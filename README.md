# Bachelorthesis
**AR Companion Application for Physical and Mental Health Especially for Elderly People**  
_Bachelor Thesis – Informatik: Games Engineering_  
Author: Choi Shin-yu  


**Abstract**
 To address the growing interest in pets among the aging society, especially the retired baby  boomers during the pandemic, we conducted a study on the awareness of virtual pets. Due to the time and financial commitments associated with raising a pet, many people may feel
 hesitant to adopt one. As a result, there has been a rise in the popularity of virtual pets as an alternative. To explore this topic, we developed an Augmented Reality(AR) pet application called Lets Go Bailey. Through this application, we investigated whether a virtual pet could provide a similar experience to a real pet. We also explored whether a virtual pet could motivate its owner’s physical activity in the same way as a real pet. Furthermore, we examined the limitations of current AR technology and mobile devices for creating virtual pets. By doing so, we aimed to gain a comprehensive understanding of the feasibility of virtual pets as a substitute for real pets

## 🚀 Implementation
![System Architecture](/FinalPresentation/images/structure.png)

This project is structured around three main components: the **Client (Unity-based mobile app)**, the **Server (Python/Flask)**, and the **Database (MySQL)**. Each component plays a distinct and essential role in the system:

### 📱 Client (Unity Mobile App)
The client runs on a smartphone and enables users to interact with the application. It serves as the primary interface for the user, providing AR-based interactions with a virtual pet. The app collects user input, such as location and activity data, and sends it to the server. It also displays processed information received from the server, such as weather conditions, nearby parks, and pet status.

### 🖥️ Server (Python + Flask)
The server handles all incoming requests from the client. It processes data using external APIs like Google Maps and OpenWeather, formats the responses, and sends them back to the client. Additionally, the server manages business logic and stores user-related data in the MySQL database.

### 🗄️ Database (MySQL)
The database stores persistent user data, including pet status, owned items, and activity records (e.g., distance walked, steps taken, duration). This data enables the system to deliver a personalized and consistent experience across user sessions.

## 🧭 Scene Structure

![Scene Structure](/FinalPresentation/images/1.png)
## 📡 API Reference

Below are the main API endpoints provided by the Flask server:
![API Reference](/FinalPresentation/images/implementation_server.png)

## 🖼️ UI Example
![UI Example](/FinalPresentation/images/NevigateScene.png)


## 📄 Project Documents
- 📘 [Full Thesis (PDF)](FinalPresentation/Thesis_Shin-yu,Choi.pdf)  
- 📊 [Final Presentation (PPTX)](FinalPresentation/Final-Presentation_Abgabe.pptx)
