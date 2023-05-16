import json
import math
import os
import random
import threading
import time

from flask import Flask, jsonify, request, make_response,abort
from flask_cors import CORS
from flask_mysqldb import MySQL
from dotenv import load_dotenv
from datetime import datetime, timedelta

#from geopy.geocoders import Nominatim

import requests


# load dotenv#
load_dotenv()

app = Flask(__name__)
CORS(app)


app.config['MYSQL_USER'] = os.getenv("MYSQL_USER")
app.config['MYSQL_PASSWORD'] = os.getenv("MYSQL_PASSWORD")
app.config['MYSQL_HOST'] = os.getenv("MYSQL_HOST")
app.config['MYSQL_DB'] = os.getenv("MYSQL_DB")

flask_mysql = MySQL(app)
# DB: https://shanepark.tistory.com/64







# map_api =os.getenv("GOOGLE_MAP_API")
# gmaps = googlemaps.Client(key=map_api)
# reverse_geocode_result = gmaps.reverse_geocode((37.54794204380073, 127.07460710236217))
# print(reverse_geocode_result)



#request_place over
@app.route('/request_place', methods=['POST'])
def find():
    try:
        params = request.get_json()
        input_lat = params["lat"]
        input_lng = params["lng"]
        api_key = os.getenv("GOOGLE_MAP_API")
        weather_api = os.getenv("WEATHER_API")
        part = 'current'
        url = f'https://maps.googleapis.com/maps/api/place/nearbysearch/json?location={input_lat}%2C{input_lng}8&radius=1300&type=park&key={api_key}'
        weather =f'https://api.openweathermap.org/data/2.5/weather?lat={input_lat}&lon={input_lng}&appid={weather_api}'
        payload = {}
        headers = {}

        response = requests.request("GET", url, headers=headers, data=payload).json()
        response_weather = requests.request("GET", weather, headers=headers, data=payload).json()

        #print(params)

        tmp=[]
        # check status
        if response['status'] == 'OK':
            result = response['results']
            ret = {}
            for i in range(len(result)):
                # create ret
                ret = {}
                #ret[i] = []
                # location 추가
                """
                ret[i].append({"lat": result[i]['geometry']['location']['lat']})
                ret[i].append({"lng": result[i]['geometry']['location']['lng']})
                ret[i].append({"weather" : response_weather['main']['feels_like'] -273})
                ret[i].append({"address": result[i]['vicinity']})
                """


                var_lat = result[i]['geometry']['location']['lat']
                var_lng = result[i]['geometry']['location']['lng']
                var_weather = response_weather['main']['feels_like'] -273
                var_address = result[i]['vicinity']
                var_name = None
                var_photo = None
                var_distance = calculate_distance(input_lat, input_lng,var_lat,var_lng)



                # check if 'name' exist
                if 'name' in result[i]:
                    """ret[i].append({
                        "name": result[i]['name']
                    })"""
                    var_name = result[i]['name']
                else:
                    #ret[i].append({"name": ""})
                    var_name = ""

                # check if 'photo_reference' exist
                if 'photos' in result[i]:
                    res_photo_reference = result[i]['photos'][0]['photo_reference']
                    var_photo = f'https://maps.googleapis.com/maps/api/place/photo?maxwidth=400&photo_reference={res_photo_reference}&key={api_key}'
                    """ret[i].append({
                        "photo": f'https://maps.googleapis.com/maps/api/place/photo?maxwidth=400&photo_reference={res_photo_reference}&key={api_key}'})
                    """
                else:
                    #ret[i].append({"photo": ""})
                    var_photo=""
                #ret[i].append({"types": result[0]['types']})
                var_type =result[0]['types']
                ret = [{"lat": var_lat, "lng": var_lng, "weather": var_weather, "address": var_address, "name": var_name, "photo": var_photo,"distance" : var_distance}]
                tmp+=ret


                #print(ret)
                #tmp= json.loads(ret)

                #ret[i].append({"lat":var_lat,"lng":var_lng,"weather":var_weather,"address":var_address,"name":var_name,"photo":var_photo})

            #jsonify(tmp)

            return jsonify({"responseData": tmp})
    except Exception as e:
        print(e)

        return {}


#register over
@app.route('/sign_up', methods=['POST'])
def regist():
    try:
        # MySQL 서버에 접속하기
        cursor = flask_mysql.connection.cursor()

        params = request.get_json()
        IMEI = params['IMEI']
        print(IMEI)
        pet = params['pet']
        print(pet)
        sql = "INSERT INTO user  VALUES(%s,%s)"
        cursor.execute(sql, (IMEI, pet))
        flask_mysql.connection.commit()
        cursor.close()

        print(sql);

        ret = app.response_class(response=json.dumps(200), status=200, mimetype='application/json')
        return ret
    except Exception as e:
        ret = app.response_class(response=json.dumps(400), status=400, mimetype='application/json')
        return ret
#

@app.route('/test', methods=['GET', 'POST'])
def visit():
    if request.method == 'GET':
        # MySQL 서버에 접속하기
        cur = flask_mysql.connection.cursor()
        # MySQL 명령어 실행하기
        cur.execute("SELECT * FROM visits")
        # 전체 row 가져오기
        res = cur.fetchall()
        # Flask에서 제공하는 json변환 함수
        return jsonify(res)

    if request.method == 'POST':
        print(request.is_json)
        params = request.get_json()
        a = params['a']
        b = params['b']
        c = params['c']

        cur = flask_mysql.connection.cursor()
        # DB 데이터 삽입하기
        sql = "INSERT INTO visits (a,b,c) VALUES(%s,%s,%s)"
        cur.execute(sql, (a, b, c))

        # cur.execute("INSERT INTO visits (visitor_name) VALUES(%s)", [name])
        # DB에 수정사항 반영하기
        flask_mysql.connection.commit()
        # mysql cursor 종료하기
        cur.close()
        return make_response(params, 200)


@app.route('/delete_all', methods=['GET'])
def clear():
    cur = flask_mysql.connection.cursor()
    cur.execute("TRUNCATE TABLE visits")
    flask_mysql.connection.commit()
    cur.close()
    res = cur.fetchall()
    # Flask에서 제공하는 json변환 함수
    return jsonify(res)


@app.route('/connection_test', methods=['GET', 'POST'])
def update():
    return request.get_json()

@app.route('/get_all_info', methods=[ 'POST'])
def get_all_info():
    cursor = flask_mysql.connection.cursor()
    query = "SELECT * FROM pet_status"
    cursor.execute(query)
    result = cursor.fetchone()

    # Close the database connection
    cursor.close()

    # Convert the result to a dictionary
    var_happy= result[0]
    var_food = result[1]
    var_water= result[2]

    cursor = flask_mysql.connection.cursor()
    query = "SELECT item_name, owned FROM item_shop"
    cursor.execute(query)
    results = cursor.fetchall()

    # Close the database connection

    # Convert the results to a list of dictionaries
    items = []

    ret = {'happy': var_happy, 'food': var_food, 'water': var_water}

    for result in results:
        item = {'item_name': result[0], 'owned': bool(result[1])}
        items.append(item)
        ret[result[0]]=result[1]

    #happy, food water

    query_bone = "SELECT owned FROM food WHERE item_name='Bone'"
    cursor.execute(query_bone)
    result_bone = cursor.fetchone()
    owned_bone = result_bone[0]

    query_food = "SELECT owned FROM food WHERE item_name='food'"
    cursor.execute(query_food)
    result_food = cursor.fetchone()
    owned_food = result_food[0]


    ret["nr_food"]  = owned_food
    ret["nr_bone"]  = owned_bone


    # Return the item list as a JSON response
    cursor.close()

    return ret





@app.route('/update_shop', methods=['PUT'])
def update_shop():

    #print(request.get_json())
    #params = request.get_json()
    #EarringL = params["EarringL"]
    #Sunglasses = params["Sunglasses"]
    #Necklace = params["Necklace"]
    #EarringR = params["EarringR"]

    data = request.get_json()



    earring_l = int(data.get('EarringL', '0'))
    sunglasses = int(data.get('Sunglasses', '0'))
    necklace = int(data.get('Necklace', '0'))
    earring_r = int(data.get('EarringR', '0'))


    #, Sunglasses=%s, Necklace=%s ,EarringR=%s
    #,Sunglasses, Necklace, EarringR
    cur = flask_mysql.connection.cursor()
    # DB 데이터 삽입하기
    cur.execute('UPDATE your_table_name SET owned = %s WHERE item_name = %s', (earring_l, 'EarringL'))
    cur.execute('UPDATE your_table_name SET owned = %s WHERE item_name = %s', (sunglasses, 'Sunglasses'))
    cur.execute('UPDATE your_table_name SET owned = %s WHERE item_name = %s', (necklace, 'Necklace'))
    cur.execute('UPDATE your_table_name SET owned = %s WHERE item_name = %s', (earring_r, 'EarringR'))
    flask_mysql.connection.commit()

    # cur.execute("INSERT INTO visits (visitor_name) VALUES(%s)", [name])
    # DB에 수정사항 반영하기
    flask_mysql.connection.commit()
    # mysql cursor 종료하기
    cur.close()


@app.route('/get_weather', methods=['POST'])
def get_weather():
    if request.method == 'POST':
        params = request.get_json()
        lat = params["lat"]
        lng = params["lng"]
        locator = Nominatim(user_agent="myGeocoder")
        coordinates = str(lat)+', '+str(lng)
        location = locator.reverse(coordinates,language='en').raw
        print(location['address']['city'])

        return params


@app.route('/show_items')
def request_items():
    # MySQL 서버에 접속하기
    cursor = flask_mysql.connection.cursor()

    params = request.get_json()
    IMEI = params['IMEI']
    print(IMEI)
    pet = params['pet']
    print(pet)
    sql = "INSERT INTO user  VALUES(%s,%s)"
    cursor.execute(sql, (IMEI, pet))
    flask_mysql.connection.commit()

    cursor.close()
    print(sql);
    return 'test!'



@app.route('/pet_status', methods=['GET'])
def get_pet_status():
    # Connect to the database
    cursor = flask_mysql.connection.cursor()
    query = "SELECT * FROM pet_status"
    cursor.execute(query)
    result = cursor.fetchone()

    # Close the database connection
    cursor.close()

    # Convert the result to a dictionary
    pet_status = {'happy': result[0], 'food': result[1], 'water': result[2]}

    # Return the pet_status as a JSON response
    return jsonify(pet_status)


@app.route('/item_status/<string:item_name>', methods=['GET', 'PUT'])
def handle_item_status(item_name):
    if request.method == 'GET' and item_name == 'all':
        # Retrieve the item st atus from the database
        cursor = flask_mysql.connection.cursor()
        query = "SELECT item_name, owned FROM item_shop"
        cursor.execute(query)
        results = cursor.fetchall()

        # Close the database connection
        cursor.close()

        # Convert the results to a list of dictionaries
        items = []
        for result in results:
            item = {'item_name': result[0], 'owned': bool(result[1])}
            items.append(item)

        # Return the item list as a JSON response
        return jsonify({'items': items})



    elif request.method == 'PUT':
        # Get the new owned status from the request body
        owned = request.json['owned']

        # Update the owned status of the specified item in the database
        cursor = flask_mysql.connection.cursor()
        query = "UPDATE item_shop SET owned = %s WHERE item_name = %s"
        cursor.execute(query, (owned, item_name))
        flask_mysql.connection.commit()

        # Close the database connection
        cursor.close()

        # Return a success message as a JSON response
        return jsonify({'message': 'Item status updated successfully'})
    else :
        return abort(404)



@app.route('/buy_item/<int:price>', methods=['GET'])
def buy_item(price):
    # Retrieve the current happy value from the database
    cursor = flask_mysql.connection.cursor()
    query = "SELECT happy FROM pet_status"
    cursor.execute(query)
    result = cursor.fetchone()
    happy = result[0]

    # Check if the user has enough happy to buy the item
    if happy >= price:
        # Subtract the price from the happy value and update the database
        happy -= price
        query = "UPDATE pet_status SET happy = %s"
        cursor.execute(query, (happy,))
        flask_mysql.connection.commit()

        # Close the database connection
        cursor.close()

        # Return a success message as a JSON response
        return jsonify({'message': 'Item purchased successfully'})
    else:
        # Close the database connection
        cursor.close()

        # Return an error message as a JSON response
        return jsonify({'message': 'Not enough happy to purchase the item'})

@app.route('/sell_item/<int:price>', methods=['GET'])
def sell_item(price):
    # Retrieve the current happy value from the database
    cursor = flask_mysql.connection.cursor()
    query = "SELECT happy FROM pet_status"
    cursor.execute(query)
    result = cursor.fetchone()
    happy = result[0]

    # Check if the user has enough happy to buy the item

    # Subtract the price from the happy value and update the database
    happy += price
    query = "UPDATE pet_status SET happy = %s"
    cursor.execute(query, (happy,))
    flask_mysql.connection.commit()

    # Close the database connection
    cursor.close()

    # Return a success message as a JSON response
    return jsonify({'message': 'Item purchased successfully'})



@app.route('/last_login/<int:user_id>')
def get_last_login(user_id):
    cursor = flask_mysql.connection.cursor()
    cursor.execute("SELECT last_login_time FROM user_last_login WHERE user_id=%s", (user_id,))
    last_login = cursor.fetchone()
    cursor.close()
    if last_login:
        return jsonify({'user_id': user_id, 'last_login_time': last_login[0].strftime('%Y-%m-%d %H:%M:%S')})
    else:
        return abort(404)

@app.route('/decrease')
def decrease_pet_status():
    acursor = flask_mysql.connection.cursor()
    query = "UPDATE pet_status SET food = GREATEST(food - 1, 0), water = GREATEST(water - 1, 0) "

    acursor.execute(query)
    flask_mysql.connection.commit()

    # Close the database connection
    acursor.close()
    return jsonify({'user_id': 123.4, 'last_login_time': 4.5})


@app.route('/reset')
def reset_petstatus():
    acursor = flask_mysql.connection.cursor()
    query = "UPDATE pet_status SET food = 41, happy = 43, water = 42 "

    acursor.execute(query)
    flask_mysql.connection.commit()

    # Close the database connection
    acursor.close()
    return jsonify({'user_id': 123.4, 'last_login_time': 4.5})


@app.route('/food_reset')
def food_reset():
    acursor = flask_mysql.connection.cursor()
    query = "UPDATE pet_status SET food = 100"

    acursor.execute(query)
    flask_mysql.connection.commit()

    # Close the database connection
    acursor.close()
    return jsonify({'user_id': 123.4, 'last_login_time': 4.5})


@app.route('/water_reset')
def water_reset():
    acursor = flask_mysql.connection.cursor()
    query = "UPDATE pet_status SET water = 100"

    acursor.execute(query)
    flask_mysql.connection.commit()

    # Close the database connection
    acursor.close()
    return jsonify({'user_id': 123.4, 'last_login_time': 4.5})




'''
@app.route('/gave/<string:stuff>')
def decrease_pet_status():
    acursor = flask_mysql.connection.cursor()
    query = "UPDATE pet_status SET food = food - 1, happy = happy - 1, water = water - 1"
    acursor.execute(query)
    flask_mysql.connection.commit()

    # Close the database connection
    acursor.close()
    return jsonify({'user_id': 123.4, 'last_login_time': 4.5})
'''


@app.route('/tessst/<string:item_name>', methods=['GET'])
def hello_world(item_name):
    # Retrieve the current owned status from the database
    cursor = flask_mysql.connection.cursor()
    query = "SELECT owned FROM item_shop WHERE item_name = %s"
    cursor.execute(query, (item_name,))
    result = cursor.fetchone()

    # Close the database connection
    cursor.close()

    # Check if the item exists in the database
    if result is None:
        abort(404)

    # Get the current owned status and calculate the new value
    current_owned = bool(result[0])
    new_owned = not current_owned

    # Update the owned status of the item in the database
    cursor = flask_mysql.connection.cursor()
    query = "UPDATE item_shop SET owned = %s WHERE item_name = %s"
    cursor.execute(query, (new_owned, item_name))
    flask_mysql.connection.commit()

    # Close the database connection
    cursor.close()

    # Return the new owned status as a JSON response
    return jsonify({'item_name': item_name, 'owned': new_owned})


@app.route('/get_food', methods=['GET'])
def get_food():
    try:
        cursor = flask_mysql.connection.cursor()
        query = "SELECT owned FROM food WHERE item_name='food'"
        cursor.execute(query)
        # Fetch data and store as a list of integers
        owned_data = [int(row[0]) for row in cursor.fetchall()]

        # Close database connection
        cursor.close()

        # Return data as a JSON response
        return jsonify({'food': owned_data})

    except Exception as e:
        # Handle exceptions (e.g. database connection error)
        return jsonify({'error': str(e)})

@app.route('/increasefood')
def increase_food():
    try:
        # Connect to database
        cursor = flask_mysql.connection.cursor()

        # Execute SQL query to increase 'owned' by 1
        query = "UPDATE food SET owned = owned + 1 WHERE item_name = 'food'"
        cursor.execute(query)

        # Commit changes to database
        flask_mysql.connection.commit()

        # Close database connection
        cursor.close()

        # Return success message as a JSON response
        return jsonify({'message': 'Owned increased by 1.'})

    except Exception as e:
        # Handle exceptions (e.g. database connection error)
        return jsonify({'error': str(e)})

@app.route('/increase_happy')
def increase_happy():
    try:
        # Connect to database
        cursor = flask_mysql.connection.cursor()

        # Execute SQL query to increase 'owned' by 1
        query = "UPDATE pet_status SET happy = happy + 3"
        cursor.execute(query)

        # Commit changes to database
        flask_mysql.connection.commit()

        # Close database connection
        cursor.close()

        # Return success message as a JSON response
        return jsonify({'message': 'Owned increased by 1.'})

    except Exception as e:
        # Handle exceptions (e.g. database connection error)
        return jsonify({'error': str(e)})


@app.route('/activities/<int:user_id>', methods=['GET'])
def get_activities(user_id):
    activities = []
    for i in range(49,56):
        date = (datetime.now() - timedelta(days=i)).date()
        cur = flask_mysql.connection.cursor()
        cur.execute("""
                SELECT distance, steps, duration 
                FROM walking_records 
                WHERE user_id = %s AND date = %s
            """, (user_id, date))
        result = cur.fetchone()
        if result is None:
            activities.append({
                "distance": 0,
                "steps": 0,
                "duration": 0,
                "date": date.isoformat()
            })
        else:
            activities.append({
                "distance": result[0] or 0,
                "steps": result[1] or 0,
                "duration": result[2] or 0,
                "date": date.isoformat()
            })

    return jsonify(activities), 200

@app.route('/my_home', methods=['POST'])
def address():
    params = request.get_json()
    input_lat = params["lat"]
    input_lng = params["lng"]

    key = os.getenv("MAPBOX_API")
    url = f'https://api.mapbox.com/geocoding/v5/mapbox.places/{input_lng},{input_lat}.json?access_token={key}'
    response = requests.get(url)
    json_data = response.json()
    tmp = [json_data['features'][0]['place_name']]
    print(tmp)
    return jsonify({"responseData": tmp})

@app.route('/request_place2', methods=['POST'])
def find2():

    try:
        params = request.get_json()
        print(params)
        input_lat = params["lat"]
        input_lng = params["lng"]
        api_key = os.getenv("GOOGLE_MAP_API")
        weather_api = os.getenv("WEATHER_API")
        part = 'current'
        url = f'https://maps.googleapis.com/maps/api/place/nearbysearch/json?location={input_lat}%2C{input_lng}8&radius=1300&type=park&key={api_key}'
        weather =f'https://api.openweathermap.org/data/2.5/weather?lat={input_lat}&lon={input_lng}&appid={weather_api}'
        payload = {}
        headers = {}

        response = requests.request("GET", url, headers=headers, data=payload).json()
        response_weather = requests.request("GET", weather, headers=headers, data=payload).json()

        # check status
        if response['status'] == 'OK':
            result = response['results']

            # 무작위로 4개의 요소 선택
            random_results = random.sample(result, k=min(len(result), 4))
            print(random_results[0])

            tmp = []
            for item in random_results:
                print(item)
                var_lat = item['geometry']['location']['lat']
                var_lng = item['geometry']['location']['lng']
                var_weather = response_weather['main']['feels_like'] - 273
                var_address = get_location(var_lat,var_lng)
                var_name = item.get('name', '')
                var_photo = item.get('photos', [{'photo_reference': ''}])[0].get('photo_reference', '')
                var_type = item['types']
                var_distance = calculate_distance(input_lat, input_lng, var_lat, var_lng)

                ret = [{"lat": var_lat, "lng": var_lng, "weather": var_weather, "address": var_address, "name": var_name, "photo": var_photo, "distance": var_distance}]
                tmp += ret
            home = [{"lat": input_lat, "lng": input_lng, "weather": "", "address": get_location(input_lat, input_lng), "name": "",
                    "photo": "", "distance": ""}]
            tmp += home
            return jsonify({"responseData": tmp})
    except Exception as e:
        print(e)

    return {}

@app.route('/get_home', methods=['POST'])
def get_home(lat, lng):
    key = os.getenv("MAPBOX_API")
    url = f'https://api.mapbox.com/geocoding/v5/mapbox.places/{lng},{lat}.json?access_token={key}'
    response = requests.get(url)
    json_data = response.json()
    return json_data['features'][0]['place_name']


@app.route('/request_place3', methods=['POST'])
def find3():
    try:
        params = request.get_json()
        input_lat = params["lat"]
        input_lng = params["lng"]
        api_key = os.getenv("GOOGLE_MAP_API")
        weather_api = os.getenv("WEATHER_API")
        url = f'https://maps.googleapis.com/maps/api/place/nearbysearch/json?location={input_lat}%2C{input_lng}8&radius=1300&type=park&key={api_key}'
        weather =f'https://api.openweathermap.org/data/2.5/weather?lat={input_lat}&lon={input_lng}&appid={weather_api}'
        payload = {}
        headers = {}

        response = requests.request("GET", url, headers=headers, data=payload).json()
        response_weather = requests.request("GET", weather, headers=headers, data=payload).json()




        tmp=[]
        # check status
        if response['status'] == 'OK':
            result = response['results']

            result_length = len(result)
            random_numbers = random.sample(range(result_length), k=4)
            ret = {}
            for i in random_numbers:
                # create ret
                ret = {}
                #ret[i] = []
                # location 추가
                """
                ret[i].append({"lat": result[i]['geometry']['location']['lat']})
                ret[i].append({"lng": result[i]['geometry']['location']['lng']})
                ret[i].append({"weather" : response_weather['main']['feels_like'] -273})
                ret[i].append({"address": result[i]['vicinity']})
                """


                var_lat = result[i]['geometry']['location']['lat']
                var_lng = result[i]['geometry']['location']['lng']
                var_weather = response_weather['main']['feels_like'] -273
                var_address = get_location(var_lat,var_lng)
                var_name = None
                var_photo = None
                var_distance = calculate_distance(input_lat, input_lng,var_lat,var_lng)



                # check if 'name' exist
                if 'name' in result[i]:
                    """ret[i].append({
                        "name": result[i]['name']
                    })"""
                    var_name = result[i]['name']
                else:
                    var_name = ""

                # check if 'photo_reference' exist
                if 'photos' in result[i]:
                    res_photo_reference = result[i]['photos'][0]['photo_reference']
                    var_photo = f'https://maps.googleapis.com/maps/api/place/photo?maxwidth=400&photo_reference={res_photo_reference}&key={api_key}'
                    """ret[i].append({
                        "photo": f'https://maps.googleapis.com/maps/api/place/photo?maxwidth=400&photo_reference={res_photo_reference}&key={api_key}'})
                    """
                else:
                    var_photo=""
                var_type =result[0]['types']
                ret = [{"lat": var_lat, "lng": var_lng, "weather": var_weather, "address": var_address, "name": var_name, "photo": var_photo,"distance" : var_distance}]
                tmp+=ret

            home = [{"lat": input_lat, "lng": input_lng, "weather": "", "address": get_location(input_lat, input_lng), "name": "",
                    "photo": "", "distance": ""}]
            tmp += home
            print(jsonify({"responseData": tmp}))
            return jsonify({"responseData": tmp})
    except Exception as e:
        print(e)

        return {}



# Define route for decreasing 'owned'
@app.route('/decreasefood')
def decrease_food():
    try:
        # Connect to database
        cursor = flask_mysql.connection.cursor()

        # Execute SQL query to decrease 'owned' by 1
        query = "UPDATE food SET owned = CASE WHEN owned > 0 THEN owned - 1 ELSE 0 END WHERE item_name = 'food'"
        cursor.execute(query)

        # Commit changes to database
        flask_mysql.connection.commit()

        # Close database connection
        cursor.close()

        # Return success message as a JSON response
        return jsonify({'message': 'Owned decreased by 1.'})

    except Exception as e:
        # Handle exceptions (e.g. database connection error)
        return jsonify({'error': str(e)})



def decrease_values():
    while True:

        # Decrease values by 1 every minute
        time.sleep(100)
        # Connect to the database

        response = requests.get('http://127.0.0.1:9000/decrease')

        #if response.status_code == 200:
            # Request was successful
        #    data = response.json()
            # Do something with the response data
        #else:
            # Request failed
        #    print(f'Request failed with status code: {response.status_code}')



def calculate_distance(lat1, lon1, lat2, lon2):
    # Earth radius in kilometers
    R = 6371

    # Convert latitude and longitude to radians
    lat1, lon1, lat2, lon2 = map(math.radians, [lat1, lon1, lat2, lon2])

    # Haversine formula
    dlat = lat2 - lat1
    dlon = lon2 - lon1
    a = math.sin(dlat/2)**2 + math.cos(lat1) * math.cos(lat2) * math.sin(dlon/2)**2
    c = 2 * math.atan2(math.sqrt(a), math.sqrt(1-a))
    distance = R * c

    return distance








#get address
#    get_location(48.13238, 11.58659)
def get_location(lat, lng):
    key = os.getenv("MAPBOX_API")
    url = f'https://api.mapbox.com/geocoding/v5/mapbox.places/{lng},{lat}.json?access_token={key}'
    response = requests.get(url)
    json_data = response.json()
    return json_data['features'][0]['place_name']








thread = threading.Thread(target=decrease_values)
thread.daemon = True
thread.start()

if __name__ == '__main__':
    # app.run(debug=True)
    app.run(debug=True, host='0.0.0.0', port=9000,use_reloader=False)



