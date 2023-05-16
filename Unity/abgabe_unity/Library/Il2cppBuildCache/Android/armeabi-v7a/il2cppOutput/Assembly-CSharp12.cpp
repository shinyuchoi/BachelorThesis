#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Action`1<ARLocation.WorldBuilder/Entry>
struct Action_1_t3AC51F46E712A871DD60C7A82F8C919D55BC9E7A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`2<System.Object,System.Single>
struct Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1;
// System.Func`2<Mapbox.Examples.Voxels.VoxelData,System.Single>
struct Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Mapbox.Examples.Voxels.VoxelData>
struct IEnumerable_1_tEE41F559C008A2DEFBB79D81D7F1478843F0EC0E;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_tB9F2319177B9E63FFCBB89F9E57F8529A97CC77B;
// System.Linq.IOrderedEnumerable`1<Mapbox.Examples.Voxels.VoxelData>
struct IOrderedEnumerable_1_t4709C10805BB8953A3F411DF075499511009AE0C;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>
struct List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1;
// System.Collections.Generic.List`1<ARLocation.WorldBuilder/Entry>
struct List_1_t49DD545800BB17CACA0985972E1D069B2A073A37;
// System.Collections.Generic.List`1<ARLocation.WorldVoxelController/Voxel>
struct List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C;
// System.Collections.Generic.List`1<ARLocation.WorldVoxelController/WorldChunk>
struct List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21;
// Mapbox.Map.Map`1<Mapbox.Map.RasterTile>
struct Map_1_tC48A961A1B61785722D5907072B2D13475A89832;
// Mapbox.Map.Map`1<Mapbox.Map.RawPngRasterTile>
struct Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<ARLocation.Location>
struct UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityEvent`1<ARLocation.Location>
struct UnityEvent_1_tABFD2349C2C45C1C50EBBB78451AED2D8D630486;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// Mapbox.Examples.Voxels.VoxelData[]
struct VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// ARLocation.WorldBuilder/Entry[]
struct EntryU5BU5D_t42C3F2E9B92DD9AA1D58BB481E86466F065DD4A8;
// ARLocation.WorldVoxelController/Voxel[]
struct VoxelU5BU5D_t07D10F50B802EE4C57B414DE4A7654EE7B8CACE1;
// ARLocation.WorldVoxelController/WorldChunk[]
struct WorldChunkU5BU5D_t113F913CFDEE1DCF319B6B3A4C60BF5AE9B241AB;
// ARLocation.ARLocationProvider
struct ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// ARLocation.CompassUpdateDelegate
struct CompassUpdateDelegate_t3C75D4A96686D2DE205A7B1B6A8D22A7F9E3788A;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Mapbox.Examples.ForwardGeocodeUserInput
struct ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Mapbox.Platform.IFileSource
struct IFileSource_t2DDCC31C6A4E31824E3A92156372D1AAF8ECA872;
// ARLocation.ILocationProvider
struct ILocationProvider_t4046DCCD18259875A852462DFC63D67B7DFBF640;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// ARLocation.Location
struct Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89;
// ARLocation.LocationData
struct LocationData_t1E35051773A207EE9EA92BB2B9B0BEF35BBC927C;
// ARLocation.LocationProviderOptions
struct LocationProviderOptions_t89EC102FE8FE7276EC9DFED9C3D71040619CE601;
// ARLocation.LocationUpdatedDelegate
struct LocationUpdatedDelegate_t0DD4FC098F6E9BD1EF9232AE4DE7F80FA7A07E6A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// ARLocation.PlaceAtLocation
struct PlaceAtLocation_t8F470A16D7F7E3A37FEB114A3879DD5136EE24BF;
// ARLocation.PrefabDatabase
struct PrefabDatabase_tA214EAA0B86FA31ADBF8614F56217CF7BC2E5714;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mapbox.Examples.Voxels.VoxelData
struct VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310;
// Mapbox.Examples.Voxels.VoxelFetcher
struct VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D;
// Mapbox.Examples.Voxels.VoxelTile
struct VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// TMPro.Examples.WarpTextExample
struct WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96;
// ARLocation.WorldBuilder
struct WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77;
// ARLocation.WorldBuilderApplicationController
struct WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228;
// ARLocation.WorldVoxelController
struct WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504;
// new_ItemType
struct new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001;
// ARLocation.ARLocationProvider/CompassUpdatedUnityEvent
struct CompassUpdatedUnityEvent_t9BF63C4B9DB06427C72E64F634A29C54F43975EA;
// ARLocation.ARLocationProvider/LocationEnabledUnityEvent
struct LocationEnabledUnityEvent_tFBC6C30E13557910F014359FCA50F26CDB4A4BB2;
// ARLocation.ARLocationProvider/LocationUpdatedUnityEvent
struct LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27
struct U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4;
// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76;
// ARLocation.WebMapLoader/DataEntry
struct DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3;
// ARLocation.WorldBuilder/<>c
struct U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1;
// ARLocation.WorldBuilder/<Start>d__11
struct U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9;
// ARLocation.WorldBuilder/<WaitForLocationServices>d__12
struct U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C;
// ARLocation.WorldBuilder/Entry
struct Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB;
// ARLocation.WorldBuilder/State
struct State_t8FC0BEE8CEDB6C1DF7E87CF64BA88F14F775CA95;
// ARLocation.WorldBuilder/World
struct World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F;
// ARLocation.WorldBuilderApplicationController/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t37D6D155705469CD530CA3E37BA55CC6F01E0AF2;
// ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14
struct U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13;
// ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15
struct U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B;
// ARLocation.WorldBuilderApplicationController/<Start>d__13
struct U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937;
// ARLocation.WorldBuilderApplicationController/GeneralSettings
struct GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF;
// ARLocation.WorldBuilderApplicationController/RaycastMarginSettings
struct RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F;
// ARLocation.WorldBuilderApplicationController/State
struct State_tD84D35898133E39AECF1070605DA06A912BA7DFE;
// ARLocation.WorldBuilderApplicationController/UiElementsSettings
struct UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C;
// ARLocation.WorldVoxelController/<Start>d__20
struct U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525;
// ARLocation.WorldVoxelController/<StartWorld>d__19
struct U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47;
// ARLocation.WorldVoxelController/<WaitForLocationServices>d__25
struct U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399;
// ARLocation.WorldVoxelController/ElementsSettingsData
struct ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896;
// ARLocation.WorldVoxelController/RaycastMarginSettings
struct RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1;
// ARLocation.WorldVoxelController/SettingsData
struct SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0;
// ARLocation.WorldVoxelController/StateData
struct StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B;
// ARLocation.WorldVoxelController/Voxel
struct Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658;
// ARLocation.WorldVoxelController/World
struct World_t131398ACB9EC339A34B2186311D06BF657FE6B2D;
// ARLocation.WorldVoxelController/WorldChunk
struct WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F;
// new_ShopController/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t4A3324C68B6C5F323F781DA6A96A3FB584D9AC51;
// new_ShopController/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t1431B14CFCE89B4CFC7EC7CA0849CC16EE98EA71;
// new_ShopController/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tCC5124DF87EB6B2753BFE3B70C4E3B18A21B6B55;

IL2CPP_EXTERN_C RuntimeClass* Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t49DD545800BB17CACA0985972E1D069B2A073A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral15346D87984838456588B8E97468FEE215C25002;
IL2CPP_EXTERN_C String_t* _stringLiteral27CCB8B2D6A34F683D60D39888014B4430DFCA53;
IL2CPP_EXTERN_C String_t* _stringLiteral333AA93B5B0F0530BE31BB57E63354F308638852;
IL2CPP_EXTERN_C String_t* _stringLiteral3881FEDD90936C8F50139CD3B3CECD94051A2974;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1944C88EB9D42DF0F57D0BC15630FBE8C2C218;
IL2CPP_EXTERN_C String_t* _stringLiteral4748222E3B65BCE8F2F55EBA26B2F40331E11E87;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral7964E011DB4E292D9EAABE10EB7CF51593BF1377;
IL2CPP_EXTERN_C String_t* _stringLiteral7F25462398D4833AF5C6CEB35BBB3765CB5BC9CE;
IL2CPP_EXTERN_C String_t* _stringLiteral887F8C077AC6E74BC59379CCB72C738CC88771E3;
IL2CPP_EXTERN_C String_t* _stringLiteral89CC1AE032D869BCD1FF5BB2E8615B40F6BBE317;
IL2CPP_EXTERN_C String_t* _stringLiteral9528B186D976326CE44E2F16B2A48C3163EA6A76;
IL2CPP_EXTERN_C String_t* _stringLiteralABC683BC608F72F9CBBA980D49B562A7D8111A23;
IL2CPP_EXTERN_C String_t* _stringLiteralAF79B34A3ED539F333F9D01522594F2C29E60DF5;
IL2CPP_EXTERN_C String_t* _stringLiteralB1C035653F58DBC3B5DFA72FB03C7607A652A132;
IL2CPP_EXTERN_C String_t* _stringLiteralB6881B5FA66A845E6085CCCBEE53450D6186282B;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BCAE922754846C65FD239698645DEC15DB09C8;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E58C760B62DBCBB7D29BB62E5F8561392ABF62;
IL2CPP_EXTERN_C String_t* _stringLiteralDC7FC897125FA91E861C4F5E9C15277E175053CF;
IL2CPP_EXTERN_C String_t* _stringLiteralE30F845AD6A2772EAE623C7F211CBF6ADBD5B271;
IL2CPP_EXTERN_C String_t* _stringLiteralEDD13E389B298768DBA3F3334418789F0FE7605B;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m12560E7847FA30F26A0818360CEA16715E177C36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF7B567D6013618D4E8519DC86A59419146F288D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1400D9FAE66248449C243D7B79C98808ABAE6D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0F87811BC0E10CC7E8F20605AD4EDFC2ABEEABE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8F5734F29914A3764B9A6FF3B6BF9C1AD3413E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0EA351F74BEADC08106A9559B8FCA24AEFD8F4CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1D39C41130702D0D26001266ACF2F0BEDA5E4B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC990814D941BEB15C2D5F17BAC4C4F73A5E5E014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEC2BDC0A6D8ED5399DA72C57F6E94474A490CF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m04332478F50334727E80E32D39A2AF9C186EEA34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRestoreWorldFromServerU3Ed__14_System_Collections_IEnumerator_Reset_m38F3FA13DD5E07C58EA9E82377624F6AFBF35429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSaveWorldToServerU3Ed__15_System_Collections_IEnumerator_Reset_m1650694EF7B9228311E87AB511ED902BDF99B2E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__11_System_Collections_IEnumerator_Reset_mF722C6C6D5BD5A2DA52B63B58E6839696D07AD6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__13_System_Collections_IEnumerator_Reset_m40C07F31A227594C80E097030B3EDEF2C3B22F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__20_System_Collections_IEnumerator_Reset_m803FCDAF3A12C2A8CC7AE7B959C8A019F1D4CC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartWorldU3Ed__19_System_Collections_IEnumerator_Reset_m9F662F7B9C885672EFDD4222565A5E937C44C05C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForLocationServicesU3Ed__12_System_Collections_IEnumerator_Reset_m10F9138D89CBDC158E7ADC150DCA060A55C3FB91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForLocationServicesU3Ed__25_System_Collections_IEnumerator_Reset_mDA9FD6ADCE132254F59D30A14527991ACD9B4628_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m6457C072F8A4F3A1F35AE33D89A4D55012DD5074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m684415C2B6E7A481BC395D571E222DFD7BEBF2F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoxelTile_U3CBuildRoutineU3Eb__27_0_m8BC543C8B0F7C0C1348B1261916A5824C7638A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorldVoxelController_OnLocationUpdatedListener_mFB1C4266CCFA3EFFF1429F95FC8822E5E46E5411_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>
struct List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____items_1)); }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* get__items_1() const { return ____items_1; }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1_StaticFields, ____emptyArray_5)); }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ARLocation.WorldBuilder/Entry>
struct List_1_t49DD545800BB17CACA0985972E1D069B2A073A37  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EntryU5BU5D_t42C3F2E9B92DD9AA1D58BB481E86466F065DD4A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t49DD545800BB17CACA0985972E1D069B2A073A37, ____items_1)); }
	inline EntryU5BU5D_t42C3F2E9B92DD9AA1D58BB481E86466F065DD4A8* get__items_1() const { return ____items_1; }
	inline EntryU5BU5D_t42C3F2E9B92DD9AA1D58BB481E86466F065DD4A8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EntryU5BU5D_t42C3F2E9B92DD9AA1D58BB481E86466F065DD4A8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t49DD545800BB17CACA0985972E1D069B2A073A37, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t49DD545800BB17CACA0985972E1D069B2A073A37, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t49DD545800BB17CACA0985972E1D069B2A073A37, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t49DD545800BB17CACA0985972E1D069B2A073A37_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EntryU5BU5D_t42C3F2E9B92DD9AA1D58BB481E86466F065DD4A8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t49DD545800BB17CACA0985972E1D069B2A073A37_StaticFields, ____emptyArray_5)); }
	inline EntryU5BU5D_t42C3F2E9B92DD9AA1D58BB481E86466F065DD4A8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EntryU5BU5D_t42C3F2E9B92DD9AA1D58BB481E86466F065DD4A8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EntryU5BU5D_t42C3F2E9B92DD9AA1D58BB481E86466F065DD4A8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ARLocation.WorldVoxelController/Voxel>
struct List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VoxelU5BU5D_t07D10F50B802EE4C57B414DE4A7654EE7B8CACE1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C, ____items_1)); }
	inline VoxelU5BU5D_t07D10F50B802EE4C57B414DE4A7654EE7B8CACE1* get__items_1() const { return ____items_1; }
	inline VoxelU5BU5D_t07D10F50B802EE4C57B414DE4A7654EE7B8CACE1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VoxelU5BU5D_t07D10F50B802EE4C57B414DE4A7654EE7B8CACE1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VoxelU5BU5D_t07D10F50B802EE4C57B414DE4A7654EE7B8CACE1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C_StaticFields, ____emptyArray_5)); }
	inline VoxelU5BU5D_t07D10F50B802EE4C57B414DE4A7654EE7B8CACE1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VoxelU5BU5D_t07D10F50B802EE4C57B414DE4A7654EE7B8CACE1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VoxelU5BU5D_t07D10F50B802EE4C57B414DE4A7654EE7B8CACE1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ARLocation.WorldVoxelController/WorldChunk>
struct List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WorldChunkU5BU5D_t113F913CFDEE1DCF319B6B3A4C60BF5AE9B241AB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21, ____items_1)); }
	inline WorldChunkU5BU5D_t113F913CFDEE1DCF319B6B3A4C60BF5AE9B241AB* get__items_1() const { return ____items_1; }
	inline WorldChunkU5BU5D_t113F913CFDEE1DCF319B6B3A4C60BF5AE9B241AB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WorldChunkU5BU5D_t113F913CFDEE1DCF319B6B3A4C60BF5AE9B241AB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WorldChunkU5BU5D_t113F913CFDEE1DCF319B6B3A4C60BF5AE9B241AB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21_StaticFields, ____emptyArray_5)); }
	inline WorldChunkU5BU5D_t113F913CFDEE1DCF319B6B3A4C60BF5AE9B241AB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WorldChunkU5BU5D_t113F913CFDEE1DCF319B6B3A4C60BF5AE9B241AB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WorldChunkU5BU5D_t113F913CFDEE1DCF319B6B3A4C60BF5AE9B241AB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27
struct U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mapbox.Examples.Voxels.VoxelTile Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<>4__this
	VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData> Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<distanceOrderedVoxels>5__2
	List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * ___U3CdistanceOrderedVoxelsU3E5__2_3;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<i>5__3
	int32_t ___U3CiU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CU3E4__this_2)); }
	inline VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdistanceOrderedVoxelsU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CdistanceOrderedVoxelsU3E5__2_3)); }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * get_U3CdistanceOrderedVoxelsU3E5__2_3() const { return ___U3CdistanceOrderedVoxelsU3E5__2_3; }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 ** get_address_of_U3CdistanceOrderedVoxelsU3E5__2_3() { return &___U3CdistanceOrderedVoxelsU3E5__2_3; }
	inline void set_U3CdistanceOrderedVoxelsU3E5__2_3(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * value)
	{
		___U3CdistanceOrderedVoxelsU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdistanceOrderedVoxelsU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CiU3E5__3_4)); }
	inline int32_t get_U3CiU3E5__3_4() const { return ___U3CiU3E5__3_4; }
	inline int32_t* get_address_of_U3CiU3E5__3_4() { return &___U3CiU3E5__3_4; }
	inline void set_U3CiU3E5__3_4(int32_t value)
	{
		___U3CiU3E5__3_4 = value;
	}
};


// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.WarpTextExample TMPro.Examples.WarpTextExample/<WarpText>d__8::<>4__this
	WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * ___U3CU3E4__this_2;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_CurveScale>5__2
	float ___U3Cold_CurveScaleU3E5__2_3;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_curve>5__3
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___U3Cold_curveU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CU3E4__this_2)); }
	inline WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cold_CurveScaleU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cold_CurveScaleU3E5__2_3)); }
	inline float get_U3Cold_CurveScaleU3E5__2_3() const { return ___U3Cold_CurveScaleU3E5__2_3; }
	inline float* get_address_of_U3Cold_CurveScaleU3E5__2_3() { return &___U3Cold_CurveScaleU3E5__2_3; }
	inline void set_U3Cold_CurveScaleU3E5__2_3(float value)
	{
		___U3Cold_CurveScaleU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3Cold_curveU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cold_curveU3E5__3_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_U3Cold_curveU3E5__3_4() const { return ___U3Cold_curveU3E5__3_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_U3Cold_curveU3E5__3_4() { return &___U3Cold_curveU3E5__3_4; }
	inline void set_U3Cold_curveU3E5__3_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___U3Cold_curveU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cold_curveU3E5__3_4), (void*)value);
	}
};


// ARLocation.WebMapLoader/DataEntry
struct DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3  : public RuntimeObject
{
public:
	// System.Int32 ARLocation.WebMapLoader/DataEntry::id
	int32_t ___id_0;
	// System.Double ARLocation.WebMapLoader/DataEntry::lat
	double ___lat_1;
	// System.Double ARLocation.WebMapLoader/DataEntry::lng
	double ___lng_2;
	// System.Double ARLocation.WebMapLoader/DataEntry::altitude
	double ___altitude_3;
	// System.String ARLocation.WebMapLoader/DataEntry::altitudeMode
	String_t* ___altitudeMode_4;
	// System.String ARLocation.WebMapLoader/DataEntry::name
	String_t* ___name_5;
	// System.String ARLocation.WebMapLoader/DataEntry::meshId
	String_t* ___meshId_6;
	// System.Single ARLocation.WebMapLoader/DataEntry::movementSmoothing
	float ___movementSmoothing_7;
	// System.Int32 ARLocation.WebMapLoader/DataEntry::maxNumberOfLocationUpdates
	int32_t ___maxNumberOfLocationUpdates_8;
	// System.Boolean ARLocation.WebMapLoader/DataEntry::useMovingAverage
	bool ___useMovingAverage_9;
	// System.Boolean ARLocation.WebMapLoader/DataEntry::hideObjectUtilItIsPlaced
	bool ___hideObjectUtilItIsPlaced_10;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_lat_1() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___lat_1)); }
	inline double get_lat_1() const { return ___lat_1; }
	inline double* get_address_of_lat_1() { return &___lat_1; }
	inline void set_lat_1(double value)
	{
		___lat_1 = value;
	}

	inline static int32_t get_offset_of_lng_2() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___lng_2)); }
	inline double get_lng_2() const { return ___lng_2; }
	inline double* get_address_of_lng_2() { return &___lng_2; }
	inline void set_lng_2(double value)
	{
		___lng_2 = value;
	}

	inline static int32_t get_offset_of_altitude_3() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___altitude_3)); }
	inline double get_altitude_3() const { return ___altitude_3; }
	inline double* get_address_of_altitude_3() { return &___altitude_3; }
	inline void set_altitude_3(double value)
	{
		___altitude_3 = value;
	}

	inline static int32_t get_offset_of_altitudeMode_4() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___altitudeMode_4)); }
	inline String_t* get_altitudeMode_4() const { return ___altitudeMode_4; }
	inline String_t** get_address_of_altitudeMode_4() { return &___altitudeMode_4; }
	inline void set_altitudeMode_4(String_t* value)
	{
		___altitudeMode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___altitudeMode_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_meshId_6() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___meshId_6)); }
	inline String_t* get_meshId_6() const { return ___meshId_6; }
	inline String_t** get_address_of_meshId_6() { return &___meshId_6; }
	inline void set_meshId_6(String_t* value)
	{
		___meshId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshId_6), (void*)value);
	}

	inline static int32_t get_offset_of_movementSmoothing_7() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___movementSmoothing_7)); }
	inline float get_movementSmoothing_7() const { return ___movementSmoothing_7; }
	inline float* get_address_of_movementSmoothing_7() { return &___movementSmoothing_7; }
	inline void set_movementSmoothing_7(float value)
	{
		___movementSmoothing_7 = value;
	}

	inline static int32_t get_offset_of_maxNumberOfLocationUpdates_8() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___maxNumberOfLocationUpdates_8)); }
	inline int32_t get_maxNumberOfLocationUpdates_8() const { return ___maxNumberOfLocationUpdates_8; }
	inline int32_t* get_address_of_maxNumberOfLocationUpdates_8() { return &___maxNumberOfLocationUpdates_8; }
	inline void set_maxNumberOfLocationUpdates_8(int32_t value)
	{
		___maxNumberOfLocationUpdates_8 = value;
	}

	inline static int32_t get_offset_of_useMovingAverage_9() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___useMovingAverage_9)); }
	inline bool get_useMovingAverage_9() const { return ___useMovingAverage_9; }
	inline bool* get_address_of_useMovingAverage_9() { return &___useMovingAverage_9; }
	inline void set_useMovingAverage_9(bool value)
	{
		___useMovingAverage_9 = value;
	}

	inline static int32_t get_offset_of_hideObjectUtilItIsPlaced_10() { return static_cast<int32_t>(offsetof(DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3, ___hideObjectUtilItIsPlaced_10)); }
	inline bool get_hideObjectUtilItIsPlaced_10() const { return ___hideObjectUtilItIsPlaced_10; }
	inline bool* get_address_of_hideObjectUtilItIsPlaced_10() { return &___hideObjectUtilItIsPlaced_10; }
	inline void set_hideObjectUtilItIsPlaced_10(bool value)
	{
		___hideObjectUtilItIsPlaced_10 = value;
	}
};


// ARLocation.WorldBuilder/<>c
struct U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1_StaticFields
{
public:
	// ARLocation.WorldBuilder/<>c ARLocation.WorldBuilder/<>c::<>9
	U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1 * ___U3CU3E9_0;
	// System.Action`1<ARLocation.WorldBuilder/Entry> ARLocation.WorldBuilder/<>c::<>9__23_0
	Action_1_t3AC51F46E712A871DD60C7A82F8C919D55BC9E7A * ___U3CU3E9__23_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1_StaticFields, ___U3CU3E9__23_0_1)); }
	inline Action_1_t3AC51F46E712A871DD60C7A82F8C919D55BC9E7A * get_U3CU3E9__23_0_1() const { return ___U3CU3E9__23_0_1; }
	inline Action_1_t3AC51F46E712A871DD60C7A82F8C919D55BC9E7A ** get_address_of_U3CU3E9__23_0_1() { return &___U3CU3E9__23_0_1; }
	inline void set_U3CU3E9__23_0_1(Action_1_t3AC51F46E712A871DD60C7A82F8C919D55BC9E7A * value)
	{
		___U3CU3E9__23_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__23_0_1), (void*)value);
	}
};


// ARLocation.WorldBuilder/<Start>d__11
struct U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9  : public RuntimeObject
{
public:
	// System.Int32 ARLocation.WorldBuilder/<Start>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ARLocation.WorldBuilder/<Start>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ARLocation.WorldBuilder ARLocation.WorldBuilder/<Start>d__11::<>4__this
	WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9, ___U3CU3E4__this_2)); }
	inline WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ARLocation.WorldBuilder/<WaitForLocationServices>d__12
struct U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C  : public RuntimeObject
{
public:
	// System.Int32 ARLocation.WorldBuilder/<WaitForLocationServices>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ARLocation.WorldBuilder/<WaitForLocationServices>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// ARLocation.WorldBuilder/Entry
struct Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB  : public RuntimeObject
{
public:
	// ARLocation.Location ARLocation.WorldBuilder/Entry::Location
	Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * ___Location_0;
	// System.Single ARLocation.WorldBuilder/Entry::Rotation
	float ___Rotation_1;
	// System.String ARLocation.WorldBuilder/Entry::MeshId
	String_t* ___MeshId_2;
	// UnityEngine.GameObject ARLocation.WorldBuilder/Entry::Instance
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Instance_3;

public:
	inline static int32_t get_offset_of_Location_0() { return static_cast<int32_t>(offsetof(Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB, ___Location_0)); }
	inline Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * get_Location_0() const { return ___Location_0; }
	inline Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 ** get_address_of_Location_0() { return &___Location_0; }
	inline void set_Location_0(Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * value)
	{
		___Location_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Location_0), (void*)value);
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB, ___Rotation_1)); }
	inline float get_Rotation_1() const { return ___Rotation_1; }
	inline float* get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(float value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_MeshId_2() { return static_cast<int32_t>(offsetof(Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB, ___MeshId_2)); }
	inline String_t* get_MeshId_2() const { return ___MeshId_2; }
	inline String_t** get_address_of_MeshId_2() { return &___MeshId_2; }
	inline void set_MeshId_2(String_t* value)
	{
		___MeshId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeshId_2), (void*)value);
	}

	inline static int32_t get_offset_of_Instance_3() { return static_cast<int32_t>(offsetof(Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB, ___Instance_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Instance_3() const { return ___Instance_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Instance_3() { return &___Instance_3; }
	inline void set_Instance_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Instance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_3), (void*)value);
	}
};


// ARLocation.WorldBuilder/State
struct State_t8FC0BEE8CEDB6C1DF7E87CF64BA88F14F775CA95  : public RuntimeObject
{
public:
	// ARLocation.WorldBuilder/World ARLocation.WorldBuilder/State::World
	World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F * ___World_0;

public:
	inline static int32_t get_offset_of_World_0() { return static_cast<int32_t>(offsetof(State_t8FC0BEE8CEDB6C1DF7E87CF64BA88F14F775CA95, ___World_0)); }
	inline World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F * get_World_0() const { return ___World_0; }
	inline World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F ** get_address_of_World_0() { return &___World_0; }
	inline void set_World_0(World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F * value)
	{
		___World_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___World_0), (void*)value);
	}
};


// ARLocation.WorldBuilder/World
struct World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<ARLocation.WorldBuilder/Entry> ARLocation.WorldBuilder/World::Entries
	List_1_t49DD545800BB17CACA0985972E1D069B2A073A37 * ___Entries_0;

public:
	inline static int32_t get_offset_of_Entries_0() { return static_cast<int32_t>(offsetof(World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F, ___Entries_0)); }
	inline List_1_t49DD545800BB17CACA0985972E1D069B2A073A37 * get_Entries_0() const { return ___Entries_0; }
	inline List_1_t49DD545800BB17CACA0985972E1D069B2A073A37 ** get_address_of_Entries_0() { return &___Entries_0; }
	inline void set_Entries_0(List_1_t49DD545800BB17CACA0985972E1D069B2A073A37 * value)
	{
		___Entries_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entries_0), (void*)value);
	}
};


// ARLocation.WorldBuilderApplicationController/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t37D6D155705469CD530CA3E37BA55CC6F01E0AF2  : public RuntimeObject
{
public:
	// UnityEngine.Transform ARLocation.WorldBuilderApplicationController/<>c__DisplayClass23_0::o
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___o_0;

public:
	inline static int32_t get_offset_of_o_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t37D6D155705469CD530CA3E37BA55CC6F01E0AF2, ___o_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_o_0() const { return ___o_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_o_0() { return &___o_0; }
	inline void set_o_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___o_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___o_0), (void*)value);
	}
};


// ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14
struct U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13  : public RuntimeObject
{
public:
	// System.Int32 ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ARLocation.WorldBuilderApplicationController ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::<>4__this
	WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13, ___U3CU3E4__this_2)); }
	inline WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13, ___U3CrequestU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_3() const { return ___U3CrequestU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_3() { return &___U3CrequestU3E5__2_3; }
	inline void set_U3CrequestU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_3), (void*)value);
	}
};


// ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15
struct U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B  : public RuntimeObject
{
public:
	// System.Int32 ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ARLocation.WorldBuilderApplicationController ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::<>4__this
	WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B, ___U3CU3E4__this_2)); }
	inline WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B, ___U3CrequestU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_3() const { return ___U3CrequestU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_3() { return &___U3CrequestU3E5__2_3; }
	inline void set_U3CrequestU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_3), (void*)value);
	}
};


// ARLocation.WorldBuilderApplicationController/<Start>d__13
struct U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937  : public RuntimeObject
{
public:
	// System.Int32 ARLocation.WorldBuilderApplicationController/<Start>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ARLocation.WorldBuilderApplicationController/<Start>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ARLocation.WorldBuilderApplicationController ARLocation.WorldBuilderApplicationController/<Start>d__13::<>4__this
	WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937, ___U3CU3E4__this_2)); }
	inline WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ARLocation.WorldBuilderApplicationController/GeneralSettings
struct GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF  : public RuntimeObject
{
public:
	// System.Single ARLocation.WorldBuilderApplicationController/GeneralSettings::HeightAdjustmentSensitivity
	float ___HeightAdjustmentSensitivity_0;
	// System.Single ARLocation.WorldBuilderApplicationController/GeneralSettings::RotationAdjustmentSensitivity
	float ___RotationAdjustmentSensitivity_1;
	// System.String ARLocation.WorldBuilderApplicationController/GeneralSettings::SaveWorldUrl
	String_t* ___SaveWorldUrl_2;
	// System.String ARLocation.WorldBuilderApplicationController/GeneralSettings::RestoreWorldUrl
	String_t* ___RestoreWorldUrl_3;
	// System.Boolean ARLocation.WorldBuilderApplicationController/GeneralSettings::SaveToServer
	bool ___SaveToServer_4;

public:
	inline static int32_t get_offset_of_HeightAdjustmentSensitivity_0() { return static_cast<int32_t>(offsetof(GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF, ___HeightAdjustmentSensitivity_0)); }
	inline float get_HeightAdjustmentSensitivity_0() const { return ___HeightAdjustmentSensitivity_0; }
	inline float* get_address_of_HeightAdjustmentSensitivity_0() { return &___HeightAdjustmentSensitivity_0; }
	inline void set_HeightAdjustmentSensitivity_0(float value)
	{
		___HeightAdjustmentSensitivity_0 = value;
	}

	inline static int32_t get_offset_of_RotationAdjustmentSensitivity_1() { return static_cast<int32_t>(offsetof(GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF, ___RotationAdjustmentSensitivity_1)); }
	inline float get_RotationAdjustmentSensitivity_1() const { return ___RotationAdjustmentSensitivity_1; }
	inline float* get_address_of_RotationAdjustmentSensitivity_1() { return &___RotationAdjustmentSensitivity_1; }
	inline void set_RotationAdjustmentSensitivity_1(float value)
	{
		___RotationAdjustmentSensitivity_1 = value;
	}

	inline static int32_t get_offset_of_SaveWorldUrl_2() { return static_cast<int32_t>(offsetof(GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF, ___SaveWorldUrl_2)); }
	inline String_t* get_SaveWorldUrl_2() const { return ___SaveWorldUrl_2; }
	inline String_t** get_address_of_SaveWorldUrl_2() { return &___SaveWorldUrl_2; }
	inline void set_SaveWorldUrl_2(String_t* value)
	{
		___SaveWorldUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SaveWorldUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of_RestoreWorldUrl_3() { return static_cast<int32_t>(offsetof(GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF, ___RestoreWorldUrl_3)); }
	inline String_t* get_RestoreWorldUrl_3() const { return ___RestoreWorldUrl_3; }
	inline String_t** get_address_of_RestoreWorldUrl_3() { return &___RestoreWorldUrl_3; }
	inline void set_RestoreWorldUrl_3(String_t* value)
	{
		___RestoreWorldUrl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RestoreWorldUrl_3), (void*)value);
	}

	inline static int32_t get_offset_of_SaveToServer_4() { return static_cast<int32_t>(offsetof(GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF, ___SaveToServer_4)); }
	inline bool get_SaveToServer_4() const { return ___SaveToServer_4; }
	inline bool* get_address_of_SaveToServer_4() { return &___SaveToServer_4; }
	inline void set_SaveToServer_4(bool value)
	{
		___SaveToServer_4 = value;
	}
};


// ARLocation.WorldBuilderApplicationController/RaycastMarginSettings
struct RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F  : public RuntimeObject
{
public:
	// System.Single ARLocation.WorldBuilderApplicationController/RaycastMarginSettings::Top
	float ___Top_0;
	// System.Single ARLocation.WorldBuilderApplicationController/RaycastMarginSettings::Bottom
	float ___Bottom_1;
	// System.Single ARLocation.WorldBuilderApplicationController/RaycastMarginSettings::Left
	float ___Left_2;
	// System.Single ARLocation.WorldBuilderApplicationController/RaycastMarginSettings::Right
	float ___Right_3;

public:
	inline static int32_t get_offset_of_Top_0() { return static_cast<int32_t>(offsetof(RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F, ___Top_0)); }
	inline float get_Top_0() const { return ___Top_0; }
	inline float* get_address_of_Top_0() { return &___Top_0; }
	inline void set_Top_0(float value)
	{
		___Top_0 = value;
	}

	inline static int32_t get_offset_of_Bottom_1() { return static_cast<int32_t>(offsetof(RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F, ___Bottom_1)); }
	inline float get_Bottom_1() const { return ___Bottom_1; }
	inline float* get_address_of_Bottom_1() { return &___Bottom_1; }
	inline void set_Bottom_1(float value)
	{
		___Bottom_1 = value;
	}

	inline static int32_t get_offset_of_Left_2() { return static_cast<int32_t>(offsetof(RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F, ___Left_2)); }
	inline float get_Left_2() const { return ___Left_2; }
	inline float* get_address_of_Left_2() { return &___Left_2; }
	inline void set_Left_2(float value)
	{
		___Left_2 = value;
	}

	inline static int32_t get_offset_of_Right_3() { return static_cast<int32_t>(offsetof(RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F, ___Right_3)); }
	inline float get_Right_3() const { return ___Right_3; }
	inline float* get_address_of_Right_3() { return &___Right_3; }
	inline void set_Right_3(float value)
	{
		___Right_3 = value;
	}
};


// ARLocation.WorldBuilderApplicationController/UiElementsSettings
struct UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C  : public RuntimeObject
{
public:
	// UnityEngine.UI.Button ARLocation.WorldBuilderApplicationController/UiElementsSettings::CubeBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___CubeBtn_0;
	// UnityEngine.UI.Button ARLocation.WorldBuilderApplicationController/UiElementsSettings::CylinderBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___CylinderBtn_1;
	// UnityEngine.UI.Button ARLocation.WorldBuilderApplicationController/UiElementsSettings::LogoBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___LogoBtn_2;
	// UnityEngine.UI.Button ARLocation.WorldBuilderApplicationController/UiElementsSettings::MoveBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___MoveBtn_3;
	// UnityEngine.UI.Button ARLocation.WorldBuilderApplicationController/UiElementsSettings::RotateBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___RotateBtn_4;
	// UnityEngine.UI.Button ARLocation.WorldBuilderApplicationController/UiElementsSettings::DeselectBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___DeselectBtn_5;
	// UnityEngine.UI.Button ARLocation.WorldBuilderApplicationController/UiElementsSettings::ClearWorldBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___ClearWorldBtn_6;
	// UnityEngine.UI.Button ARLocation.WorldBuilderApplicationController/UiElementsSettings::HeightBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___HeightBtn_7;
	// UnityEngine.UI.Button ARLocation.WorldBuilderApplicationController/UiElementsSettings::DeleteObjectBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___DeleteObjectBtn_8;
	// UnityEngine.UI.Text ARLocation.WorldBuilderApplicationController/UiElementsSettings::DebugText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DebugText_9;

public:
	inline static int32_t get_offset_of_CubeBtn_0() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___CubeBtn_0)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_CubeBtn_0() const { return ___CubeBtn_0; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_CubeBtn_0() { return &___CubeBtn_0; }
	inline void set_CubeBtn_0(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___CubeBtn_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CubeBtn_0), (void*)value);
	}

	inline static int32_t get_offset_of_CylinderBtn_1() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___CylinderBtn_1)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_CylinderBtn_1() const { return ___CylinderBtn_1; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_CylinderBtn_1() { return &___CylinderBtn_1; }
	inline void set_CylinderBtn_1(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___CylinderBtn_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CylinderBtn_1), (void*)value);
	}

	inline static int32_t get_offset_of_LogoBtn_2() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___LogoBtn_2)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_LogoBtn_2() const { return ___LogoBtn_2; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_LogoBtn_2() { return &___LogoBtn_2; }
	inline void set_LogoBtn_2(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___LogoBtn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogoBtn_2), (void*)value);
	}

	inline static int32_t get_offset_of_MoveBtn_3() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___MoveBtn_3)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_MoveBtn_3() const { return ___MoveBtn_3; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_MoveBtn_3() { return &___MoveBtn_3; }
	inline void set_MoveBtn_3(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___MoveBtn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveBtn_3), (void*)value);
	}

	inline static int32_t get_offset_of_RotateBtn_4() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___RotateBtn_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_RotateBtn_4() const { return ___RotateBtn_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_RotateBtn_4() { return &___RotateBtn_4; }
	inline void set_RotateBtn_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___RotateBtn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotateBtn_4), (void*)value);
	}

	inline static int32_t get_offset_of_DeselectBtn_5() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___DeselectBtn_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_DeselectBtn_5() const { return ___DeselectBtn_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_DeselectBtn_5() { return &___DeselectBtn_5; }
	inline void set_DeselectBtn_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___DeselectBtn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeselectBtn_5), (void*)value);
	}

	inline static int32_t get_offset_of_ClearWorldBtn_6() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___ClearWorldBtn_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_ClearWorldBtn_6() const { return ___ClearWorldBtn_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_ClearWorldBtn_6() { return &___ClearWorldBtn_6; }
	inline void set_ClearWorldBtn_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___ClearWorldBtn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClearWorldBtn_6), (void*)value);
	}

	inline static int32_t get_offset_of_HeightBtn_7() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___HeightBtn_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_HeightBtn_7() const { return ___HeightBtn_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_HeightBtn_7() { return &___HeightBtn_7; }
	inline void set_HeightBtn_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___HeightBtn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeightBtn_7), (void*)value);
	}

	inline static int32_t get_offset_of_DeleteObjectBtn_8() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___DeleteObjectBtn_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_DeleteObjectBtn_8() const { return ___DeleteObjectBtn_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_DeleteObjectBtn_8() { return &___DeleteObjectBtn_8; }
	inline void set_DeleteObjectBtn_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___DeleteObjectBtn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeleteObjectBtn_8), (void*)value);
	}

	inline static int32_t get_offset_of_DebugText_9() { return static_cast<int32_t>(offsetof(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C, ___DebugText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DebugText_9() const { return ___DebugText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DebugText_9() { return &___DebugText_9; }
	inline void set_DebugText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DebugText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugText_9), (void*)value);
	}
};


// ARLocation.WorldVoxelController/<Start>d__20
struct U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525  : public RuntimeObject
{
public:
	// System.Int32 ARLocation.WorldVoxelController/<Start>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ARLocation.WorldVoxelController/<Start>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ARLocation.WorldVoxelController ARLocation.WorldVoxelController/<Start>d__20::<>4__this
	WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525, ___U3CU3E4__this_2)); }
	inline WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ARLocation.WorldVoxelController/<WaitForLocationServices>d__25
struct U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399  : public RuntimeObject
{
public:
	// System.Int32 ARLocation.WorldVoxelController/<WaitForLocationServices>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ARLocation.WorldVoxelController/<WaitForLocationServices>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// ARLocation.WorldVoxelController/ElementsSettingsData
struct ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896  : public RuntimeObject
{
public:
	// UnityEngine.UI.Button ARLocation.WorldVoxelController/ElementsSettingsData::ClearWorldBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___ClearWorldBtn_0;
	// UnityEngine.UI.Button ARLocation.WorldVoxelController/ElementsSettingsData::PickAxeBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PickAxeBtn_1;
	// UnityEngine.UI.Button ARLocation.WorldVoxelController/ElementsSettingsData::BrickBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___BrickBtn_2;
	// UnityEngine.UI.Button ARLocation.WorldVoxelController/ElementsSettingsData::StoneBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___StoneBtn_3;
	// UnityEngine.UI.Button ARLocation.WorldVoxelController/ElementsSettingsData::GoldBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___GoldBtn_4;
	// UnityEngine.UI.Text ARLocation.WorldVoxelController/ElementsSettingsData::DebugText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DebugText_5;
	// UnityEngine.AudioClip ARLocation.WorldVoxelController/ElementsSettingsData::Create
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Create_6;
	// UnityEngine.AudioClip ARLocation.WorldVoxelController/ElementsSettingsData::Destroy
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Destroy_7;
	// UnityEngine.ParticleSystem ARLocation.WorldVoxelController/ElementsSettingsData::BrickParticle
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___BrickParticle_8;
	// UnityEngine.GameObject ARLocation.WorldVoxelController/ElementsSettingsData::IndicatorPlane
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___IndicatorPlane_9;
	// UnityEngine.GameObject ARLocation.WorldVoxelController/ElementsSettingsData::ChunkPlanePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ChunkPlanePrefab_10;

public:
	inline static int32_t get_offset_of_ClearWorldBtn_0() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___ClearWorldBtn_0)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_ClearWorldBtn_0() const { return ___ClearWorldBtn_0; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_ClearWorldBtn_0() { return &___ClearWorldBtn_0; }
	inline void set_ClearWorldBtn_0(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___ClearWorldBtn_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClearWorldBtn_0), (void*)value);
	}

	inline static int32_t get_offset_of_PickAxeBtn_1() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___PickAxeBtn_1)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PickAxeBtn_1() const { return ___PickAxeBtn_1; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PickAxeBtn_1() { return &___PickAxeBtn_1; }
	inline void set_PickAxeBtn_1(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PickAxeBtn_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PickAxeBtn_1), (void*)value);
	}

	inline static int32_t get_offset_of_BrickBtn_2() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___BrickBtn_2)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_BrickBtn_2() const { return ___BrickBtn_2; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_BrickBtn_2() { return &___BrickBtn_2; }
	inline void set_BrickBtn_2(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___BrickBtn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BrickBtn_2), (void*)value);
	}

	inline static int32_t get_offset_of_StoneBtn_3() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___StoneBtn_3)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_StoneBtn_3() const { return ___StoneBtn_3; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_StoneBtn_3() { return &___StoneBtn_3; }
	inline void set_StoneBtn_3(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___StoneBtn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StoneBtn_3), (void*)value);
	}

	inline static int32_t get_offset_of_GoldBtn_4() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___GoldBtn_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_GoldBtn_4() const { return ___GoldBtn_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_GoldBtn_4() { return &___GoldBtn_4; }
	inline void set_GoldBtn_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___GoldBtn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GoldBtn_4), (void*)value);
	}

	inline static int32_t get_offset_of_DebugText_5() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___DebugText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DebugText_5() const { return ___DebugText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DebugText_5() { return &___DebugText_5; }
	inline void set_DebugText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DebugText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugText_5), (void*)value);
	}

	inline static int32_t get_offset_of_Create_6() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___Create_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Create_6() const { return ___Create_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Create_6() { return &___Create_6; }
	inline void set_Create_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Create_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Create_6), (void*)value);
	}

	inline static int32_t get_offset_of_Destroy_7() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___Destroy_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Destroy_7() const { return ___Destroy_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Destroy_7() { return &___Destroy_7; }
	inline void set_Destroy_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Destroy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Destroy_7), (void*)value);
	}

	inline static int32_t get_offset_of_BrickParticle_8() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___BrickParticle_8)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_BrickParticle_8() const { return ___BrickParticle_8; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_BrickParticle_8() { return &___BrickParticle_8; }
	inline void set_BrickParticle_8(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___BrickParticle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BrickParticle_8), (void*)value);
	}

	inline static int32_t get_offset_of_IndicatorPlane_9() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___IndicatorPlane_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_IndicatorPlane_9() const { return ___IndicatorPlane_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_IndicatorPlane_9() { return &___IndicatorPlane_9; }
	inline void set_IndicatorPlane_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___IndicatorPlane_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IndicatorPlane_9), (void*)value);
	}

	inline static int32_t get_offset_of_ChunkPlanePrefab_10() { return static_cast<int32_t>(offsetof(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896, ___ChunkPlanePrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ChunkPlanePrefab_10() const { return ___ChunkPlanePrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ChunkPlanePrefab_10() { return &___ChunkPlanePrefab_10; }
	inline void set_ChunkPlanePrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ChunkPlanePrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChunkPlanePrefab_10), (void*)value);
	}
};


// ARLocation.WorldVoxelController/RaycastMarginSettings
struct RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1  : public RuntimeObject
{
public:
	// System.Single ARLocation.WorldVoxelController/RaycastMarginSettings::Top
	float ___Top_0;
	// System.Single ARLocation.WorldVoxelController/RaycastMarginSettings::Bottom
	float ___Bottom_1;
	// System.Single ARLocation.WorldVoxelController/RaycastMarginSettings::Left
	float ___Left_2;
	// System.Single ARLocation.WorldVoxelController/RaycastMarginSettings::Right
	float ___Right_3;

public:
	inline static int32_t get_offset_of_Top_0() { return static_cast<int32_t>(offsetof(RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1, ___Top_0)); }
	inline float get_Top_0() const { return ___Top_0; }
	inline float* get_address_of_Top_0() { return &___Top_0; }
	inline void set_Top_0(float value)
	{
		___Top_0 = value;
	}

	inline static int32_t get_offset_of_Bottom_1() { return static_cast<int32_t>(offsetof(RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1, ___Bottom_1)); }
	inline float get_Bottom_1() const { return ___Bottom_1; }
	inline float* get_address_of_Bottom_1() { return &___Bottom_1; }
	inline void set_Bottom_1(float value)
	{
		___Bottom_1 = value;
	}

	inline static int32_t get_offset_of_Left_2() { return static_cast<int32_t>(offsetof(RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1, ___Left_2)); }
	inline float get_Left_2() const { return ___Left_2; }
	inline float* get_address_of_Left_2() { return &___Left_2; }
	inline void set_Left_2(float value)
	{
		___Left_2 = value;
	}

	inline static int32_t get_offset_of_Right_3() { return static_cast<int32_t>(offsetof(RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1, ___Right_3)); }
	inline float get_Right_3() const { return ___Right_3; }
	inline float* get_address_of_Right_3() { return &___Right_3; }
	inline void set_Right_3(float value)
	{
		___Right_3 = value;
	}
};


// ARLocation.WorldVoxelController/Voxel
struct Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658  : public RuntimeObject
{
public:
	// System.String ARLocation.WorldVoxelController/Voxel::PrefabId
	String_t* ___PrefabId_0;
	// System.Int32 ARLocation.WorldVoxelController/Voxel::i
	int32_t ___i_1;
	// System.Int32 ARLocation.WorldVoxelController/Voxel::j
	int32_t ___j_2;
	// System.Int32 ARLocation.WorldVoxelController/Voxel::k
	int32_t ___k_3;
	// UnityEngine.GameObject ARLocation.WorldVoxelController/Voxel::Instance
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Instance_4;

public:
	inline static int32_t get_offset_of_PrefabId_0() { return static_cast<int32_t>(offsetof(Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658, ___PrefabId_0)); }
	inline String_t* get_PrefabId_0() const { return ___PrefabId_0; }
	inline String_t** get_address_of_PrefabId_0() { return &___PrefabId_0; }
	inline void set_PrefabId_0(String_t* value)
	{
		___PrefabId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabId_0), (void*)value);
	}

	inline static int32_t get_offset_of_i_1() { return static_cast<int32_t>(offsetof(Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658, ___i_1)); }
	inline int32_t get_i_1() const { return ___i_1; }
	inline int32_t* get_address_of_i_1() { return &___i_1; }
	inline void set_i_1(int32_t value)
	{
		___i_1 = value;
	}

	inline static int32_t get_offset_of_j_2() { return static_cast<int32_t>(offsetof(Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658, ___j_2)); }
	inline int32_t get_j_2() const { return ___j_2; }
	inline int32_t* get_address_of_j_2() { return &___j_2; }
	inline void set_j_2(int32_t value)
	{
		___j_2 = value;
	}

	inline static int32_t get_offset_of_k_3() { return static_cast<int32_t>(offsetof(Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658, ___k_3)); }
	inline int32_t get_k_3() const { return ___k_3; }
	inline int32_t* get_address_of_k_3() { return &___k_3; }
	inline void set_k_3(int32_t value)
	{
		___k_3 = value;
	}

	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658, ___Instance_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Instance_4() const { return ___Instance_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// ARLocation.WorldVoxelController/World
struct World_t131398ACB9EC339A34B2186311D06BF657FE6B2D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<ARLocation.WorldVoxelController/WorldChunk> ARLocation.WorldVoxelController/World::Chunks
	List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * ___Chunks_0;

public:
	inline static int32_t get_offset_of_Chunks_0() { return static_cast<int32_t>(offsetof(World_t131398ACB9EC339A34B2186311D06BF657FE6B2D, ___Chunks_0)); }
	inline List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * get_Chunks_0() const { return ___Chunks_0; }
	inline List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 ** get_address_of_Chunks_0() { return &___Chunks_0; }
	inline void set_Chunks_0(List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * value)
	{
		___Chunks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Chunks_0), (void*)value);
	}
};


// new_ShopController/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t4A3324C68B6C5F323F781DA6A96A3FB584D9AC51  : public RuntimeObject
{
public:
	// System.String new_ShopController/<>c__DisplayClass7_0::itemName
	String_t* ___itemName_0;

public:
	inline static int32_t get_offset_of_itemName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t4A3324C68B6C5F323F781DA6A96A3FB584D9AC51, ___itemName_0)); }
	inline String_t* get_itemName_0() const { return ___itemName_0; }
	inline String_t** get_address_of_itemName_0() { return &___itemName_0; }
	inline void set_itemName_0(String_t* value)
	{
		___itemName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemName_0), (void*)value);
	}
};


// new_ShopController/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t1431B14CFCE89B4CFC7EC7CA0849CC16EE98EA71  : public RuntimeObject
{
public:
	// System.String new_ShopController/<>c__DisplayClass8_0::itemName
	String_t* ___itemName_0;

public:
	inline static int32_t get_offset_of_itemName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t1431B14CFCE89B4CFC7EC7CA0849CC16EE98EA71, ___itemName_0)); }
	inline String_t* get_itemName_0() const { return ___itemName_0; }
	inline String_t** get_address_of_itemName_0() { return &___itemName_0; }
	inline void set_itemName_0(String_t* value)
	{
		___itemName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemName_0), (void*)value);
	}
};


// new_ShopController/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tCC5124DF87EB6B2753BFE3B70C4E3B18A21B6B55  : public RuntimeObject
{
public:
	// System.String new_ShopController/<>c__DisplayClass9_0::itemName
	String_t* ___itemName_0;

public:
	inline static int32_t get_offset_of_itemName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tCC5124DF87EB6B2753BFE3B70C4E3B18A21B6B55, ___itemName_0)); }
	inline String_t* get_itemName_0() const { return ___itemName_0; }
	inline String_t** get_address_of_itemName_0() { return &___itemName_0; }
	inline void set_itemName_0(String_t* value)
	{
		___itemName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemName_0), (void*)value);
	}
};


// Mapbox.Unity.Constants/GUI/Styles
struct Styles_tC2114566EF266EDE02B1538CCED728740517B148  : public RuntimeObject
{
public:

public:
};

struct Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields
{
public:
	// UnityEngine.GUIStyle Mapbox.Unity.Constants/GUI/Styles::EDITOR_NOTE_STYLE
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___EDITOR_NOTE_STYLE_0;
	// UnityEngine.GUIStyle Mapbox.Unity.Constants/GUI/Styles::EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1;
	// UnityEngine.GUIStyle Mapbox.Unity.Constants/GUI/Styles::EDITOR_TEXTURE_THUMBNAIL_STYLE
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___EDITOR_TEXTURE_THUMBNAIL_STYLE_2;

public:
	inline static int32_t get_offset_of_EDITOR_NOTE_STYLE_0() { return static_cast<int32_t>(offsetof(Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields, ___EDITOR_NOTE_STYLE_0)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_EDITOR_NOTE_STYLE_0() const { return ___EDITOR_NOTE_STYLE_0; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_EDITOR_NOTE_STYLE_0() { return &___EDITOR_NOTE_STYLE_0; }
	inline void set_EDITOR_NOTE_STYLE_0(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___EDITOR_NOTE_STYLE_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EDITOR_NOTE_STYLE_0), (void*)value);
	}

	inline static int32_t get_offset_of_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1() { return static_cast<int32_t>(offsetof(Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields, ___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1() const { return ___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1() { return &___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1; }
	inline void set_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1), (void*)value);
	}

	inline static int32_t get_offset_of_EDITOR_TEXTURE_THUMBNAIL_STYLE_2() { return static_cast<int32_t>(offsetof(Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields, ___EDITOR_TEXTURE_THUMBNAIL_STYLE_2)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_EDITOR_TEXTURE_THUMBNAIL_STYLE_2() const { return ___EDITOR_TEXTURE_THUMBNAIL_STYLE_2; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_EDITOR_TEXTURE_THUMBNAIL_STYLE_2() { return &___EDITOR_TEXTURE_THUMBNAIL_STYLE_2; }
	inline void set_EDITOR_TEXTURE_THUMBNAIL_STYLE_2(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___EDITOR_TEXTURE_THUMBNAIL_STYLE_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EDITOR_TEXTURE_THUMBNAIL_STYLE_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<ARLocation.WorldVoxelController/WorldChunk>
struct Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1, ___list_0)); }
	inline List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * get_list_0() const { return ___list_0; }
	inline List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1, ___current_3)); }
	inline WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * get_current_3() const { return ___current_3; }
	inline WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<ARLocation.Location>
struct UnityEvent_1_tABFD2349C2C45C1C50EBBB78451AED2D8D630486  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tABFD2349C2C45C1C50EBBB78451AED2D8D630486, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// ARLocation.LocationReading
struct LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0 
{
public:
	// System.Double ARLocation.LocationReading::latitude
	double ___latitude_0;
	// System.Double ARLocation.LocationReading::longitude
	double ___longitude_1;
	// System.Double ARLocation.LocationReading::altitude
	double ___altitude_2;
	// System.Double ARLocation.LocationReading::accuracy
	double ___accuracy_3;
	// System.Int32 ARLocation.LocationReading::floor
	int32_t ___floor_4;
	// System.Int64 ARLocation.LocationReading::timestamp
	int64_t ___timestamp_5;

public:
	inline static int32_t get_offset_of_latitude_0() { return static_cast<int32_t>(offsetof(LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0, ___latitude_0)); }
	inline double get_latitude_0() const { return ___latitude_0; }
	inline double* get_address_of_latitude_0() { return &___latitude_0; }
	inline void set_latitude_0(double value)
	{
		___latitude_0 = value;
	}

	inline static int32_t get_offset_of_longitude_1() { return static_cast<int32_t>(offsetof(LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0, ___longitude_1)); }
	inline double get_longitude_1() const { return ___longitude_1; }
	inline double* get_address_of_longitude_1() { return &___longitude_1; }
	inline void set_longitude_1(double value)
	{
		___longitude_1 = value;
	}

	inline static int32_t get_offset_of_altitude_2() { return static_cast<int32_t>(offsetof(LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0, ___altitude_2)); }
	inline double get_altitude_2() const { return ___altitude_2; }
	inline double* get_address_of_altitude_2() { return &___altitude_2; }
	inline void set_altitude_2(double value)
	{
		___altitude_2 = value;
	}

	inline static int32_t get_offset_of_accuracy_3() { return static_cast<int32_t>(offsetof(LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0, ___accuracy_3)); }
	inline double get_accuracy_3() const { return ___accuracy_3; }
	inline double* get_address_of_accuracy_3() { return &___accuracy_3; }
	inline void set_accuracy_3(double value)
	{
		___accuracy_3 = value;
	}

	inline static int32_t get_offset_of_floor_4() { return static_cast<int32_t>(offsetof(LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0, ___floor_4)); }
	inline int32_t get_floor_4() const { return ___floor_4; }
	inline int32_t* get_address_of_floor_4() { return &___floor_4; }
	inline void set_floor_4(int32_t value)
	{
		___floor_4 = value;
	}

	inline static int32_t get_offset_of_timestamp_5() { return static_cast<int32_t>(offsetof(LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0, ___timestamp_5)); }
	inline int64_t get_timestamp_5() const { return ___timestamp_5; }
	inline int64_t* get_address_of_timestamp_5() { return &___timestamp_5; }
	inline void set_timestamp_5(int64_t value)
	{
		___timestamp_5 = value;
	}
};


// TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Array_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// ARLocation.AltitudeMode
struct AltitudeMode_tC522C79AEC3F5ECAD7B5981064AEE721460A67F1 
{
public:
	// System.Int32 ARLocation.AltitudeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AltitudeMode_tC522C79AEC3F5ECAD7B5981064AEE721460A67F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.ColorMode
struct ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TMPro.Extents
struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ImagePosition
struct ImagePosition_t3DBA97C0793136D349135BC5E6814CFB2BE5A43A 
{
public:
	// System.Int32 UnityEngine.ImagePosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImagePosition_t3DBA97C0793136D349135BC5E6814CFB2BE5A43A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547  : public RuntimeObject
{
public:
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___m_CachedMeshInfo_17;

public:
	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___textComponent_2)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_textComponent_2() const { return ___textComponent_2; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_2), (void*)value);
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}

	inline static int32_t get_offset_of_spriteCount_4() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___spriteCount_4)); }
	inline int32_t get_spriteCount_4() const { return ___spriteCount_4; }
	inline int32_t* get_address_of_spriteCount_4() { return &___spriteCount_4; }
	inline void set_spriteCount_4(int32_t value)
	{
		___spriteCount_4 = value;
	}

	inline static int32_t get_offset_of_spaceCount_5() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___spaceCount_5)); }
	inline int32_t get_spaceCount_5() const { return ___spaceCount_5; }
	inline int32_t* get_address_of_spaceCount_5() { return &___spaceCount_5; }
	inline void set_spaceCount_5(int32_t value)
	{
		___spaceCount_5 = value;
	}

	inline static int32_t get_offset_of_wordCount_6() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___wordCount_6)); }
	inline int32_t get_wordCount_6() const { return ___wordCount_6; }
	inline int32_t* get_address_of_wordCount_6() { return &___wordCount_6; }
	inline void set_wordCount_6(int32_t value)
	{
		___wordCount_6 = value;
	}

	inline static int32_t get_offset_of_linkCount_7() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___linkCount_7)); }
	inline int32_t get_linkCount_7() const { return ___linkCount_7; }
	inline int32_t* get_address_of_linkCount_7() { return &___linkCount_7; }
	inline void set_linkCount_7(int32_t value)
	{
		___linkCount_7 = value;
	}

	inline static int32_t get_offset_of_lineCount_8() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___lineCount_8)); }
	inline int32_t get_lineCount_8() const { return ___lineCount_8; }
	inline int32_t* get_address_of_lineCount_8() { return &___lineCount_8; }
	inline void set_lineCount_8(int32_t value)
	{
		___lineCount_8 = value;
	}

	inline static int32_t get_offset_of_pageCount_9() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___pageCount_9)); }
	inline int32_t get_pageCount_9() const { return ___pageCount_9; }
	inline int32_t* get_address_of_pageCount_9() { return &___pageCount_9; }
	inline void set_pageCount_9(int32_t value)
	{
		___pageCount_9 = value;
	}

	inline static int32_t get_offset_of_materialCount_10() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___materialCount_10)); }
	inline int32_t get_materialCount_10() const { return ___materialCount_10; }
	inline int32_t* get_address_of_materialCount_10() { return &___materialCount_10; }
	inline void set_materialCount_10(int32_t value)
	{
		___materialCount_10 = value;
	}

	inline static int32_t get_offset_of_characterInfo_11() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___characterInfo_11)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_characterInfo_11() const { return ___characterInfo_11; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_characterInfo_11() { return &___characterInfo_11; }
	inline void set_characterInfo_11(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___characterInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_wordInfo_12() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___wordInfo_12)); }
	inline TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* get_wordInfo_12() const { return ___wordInfo_12; }
	inline TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502** get_address_of_wordInfo_12() { return &___wordInfo_12; }
	inline void set_wordInfo_12(TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* value)
	{
		___wordInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wordInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_linkInfo_13() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___linkInfo_13)); }
	inline TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* get_linkInfo_13() const { return ___linkInfo_13; }
	inline TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6** get_address_of_linkInfo_13() { return &___linkInfo_13; }
	inline void set_linkInfo_13(TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* value)
	{
		___linkInfo_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkInfo_13), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_14() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___lineInfo_14)); }
	inline TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* get_lineInfo_14() const { return ___lineInfo_14; }
	inline TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D** get_address_of_lineInfo_14() { return &___lineInfo_14; }
	inline void set_lineInfo_14(TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* value)
	{
		___lineInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of_pageInfo_15() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___pageInfo_15)); }
	inline TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* get_pageInfo_15() const { return ___pageInfo_15; }
	inline TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F** get_address_of_pageInfo_15() { return &___pageInfo_15; }
	inline void set_pageInfo_15(TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* value)
	{
		___pageInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pageInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfo_16() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___meshInfo_16)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_meshInfo_16() const { return ___meshInfo_16; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_meshInfo_16() { return &___meshInfo_16; }
	inline void set_meshInfo_16(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___meshInfo_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfo_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMeshInfo_17() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___m_CachedMeshInfo_17)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_m_CachedMeshInfo_17() const { return ___m_CachedMeshInfo_17; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_m_CachedMeshInfo_17() { return &___m_CachedMeshInfo_17; }
	inline void set_m_CachedMeshInfo_17(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___m_CachedMeshInfo_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMeshInfo_17), (void*)value);
	}
};

struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields
{
public:
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_InfinityVectorNegative_1;

public:
	inline static int32_t get_offset_of_k_InfinityVectorPositive_0() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields, ___k_InfinityVectorPositive_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_InfinityVectorPositive_0() const { return ___k_InfinityVectorPositive_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_InfinityVectorPositive_0() { return &___k_InfinityVectorPositive_0; }
	inline void set_k_InfinityVectorPositive_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_InfinityVectorPositive_0 = value;
	}

	inline static int32_t get_offset_of_k_InfinityVectorNegative_1() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields, ___k_InfinityVectorNegative_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_InfinityVectorNegative_1() const { return ___k_InfinityVectorNegative_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_InfinityVectorNegative_1() { return &___k_InfinityVectorNegative_1; }
	inline void set_k_InfinityVectorNegative_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_InfinityVectorNegative_1 = value;
	}
};


// TMPro.TMP_Vertex
struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_1() const { return ___uv_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_uv2_2() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv2_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv2_2() const { return ___uv2_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv2_2() { return &___uv2_2; }
	inline void set_uv2_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv2_2 = value;
	}

	inline static int32_t get_offset_of_uv4_3() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv4_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv4_3() const { return ___uv4_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv4_3() { return &___uv4_3; }
	inline void set_uv4_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv4_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___color_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_4() const { return ___color_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_4 = value;
	}
};

struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields
{
public:
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___k_Zero_5;

public:
	inline static int32_t get_offset_of_k_Zero_5() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields, ___k_Zero_5)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_k_Zero_5() const { return ___k_Zero_5; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_k_Zero_5() { return &___k_Zero_5; }
	inline void set_k_Zero_5(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___k_Zero_5 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Examples.Voxels.VoxelData
struct VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Mapbox.Examples.Voxels.VoxelData::Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_0;
	// UnityEngine.GameObject Mapbox.Examples.Voxels.VoxelData::Prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Prefab_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310, ___Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Position_0() const { return ___Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Prefab_1() { return static_cast<int32_t>(offsetof(VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310, ___Prefab_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Prefab_1() const { return ___Prefab_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Prefab_1() { return &___Prefab_1; }
	inline void set_Prefab_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Prefab_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prefab_1), (void*)value);
	}
};


// UnityEngine.WrapMode
struct WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// new_ItemType
struct new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001  : public RuntimeObject
{
public:
	// System.String new_ItemType::new_Name
	String_t* ___new_Name_0;
	// UnityEngine.GameObject new_ItemType::new_Object
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___new_Object_1;
	// UnityEngine.Vector3 new_ItemType::new_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___new_Position_2;
	// UnityEngine.Vector3 new_ItemType::new_Rotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___new_Rotation_3;
	// UnityEngine.Vector3 new_ItemType::new_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___new_Scale_4;
	// System.Boolean new_ItemType::new_Owned
	bool ___new_Owned_5;

public:
	inline static int32_t get_offset_of_new_Name_0() { return static_cast<int32_t>(offsetof(new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001, ___new_Name_0)); }
	inline String_t* get_new_Name_0() const { return ___new_Name_0; }
	inline String_t** get_address_of_new_Name_0() { return &___new_Name_0; }
	inline void set_new_Name_0(String_t* value)
	{
		___new_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___new_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_new_Object_1() { return static_cast<int32_t>(offsetof(new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001, ___new_Object_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_new_Object_1() const { return ___new_Object_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_new_Object_1() { return &___new_Object_1; }
	inline void set_new_Object_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___new_Object_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___new_Object_1), (void*)value);
	}

	inline static int32_t get_offset_of_new_Position_2() { return static_cast<int32_t>(offsetof(new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001, ___new_Position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_new_Position_2() const { return ___new_Position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_new_Position_2() { return &___new_Position_2; }
	inline void set_new_Position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___new_Position_2 = value;
	}

	inline static int32_t get_offset_of_new_Rotation_3() { return static_cast<int32_t>(offsetof(new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001, ___new_Rotation_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_new_Rotation_3() const { return ___new_Rotation_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_new_Rotation_3() { return &___new_Rotation_3; }
	inline void set_new_Rotation_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___new_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_new_Scale_4() { return static_cast<int32_t>(offsetof(new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001, ___new_Scale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_new_Scale_4() const { return ___new_Scale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_new_Scale_4() { return &___new_Scale_4; }
	inline void set_new_Scale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___new_Scale_4 = value;
	}

	inline static int32_t get_offset_of_new_Owned_5() { return static_cast<int32_t>(offsetof(new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001, ___new_Owned_5)); }
	inline bool get_new_Owned_5() const { return ___new_Owned_5; }
	inline bool* get_address_of_new_Owned_5() { return &___new_Owned_5; }
	inline void set_new_Owned_5(bool value)
	{
		___new_Owned_5 = value;
	}
};


// ARLocation.ARLocationProvider/LocationUpdatedUnityEvent
struct LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35  : public UnityEvent_1_tABFD2349C2C45C1C50EBBB78451AED2D8D630486
{
public:

public:
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ARLocation.WorldBuilderApplicationController/AppState
struct AppState_t0DDF716F729ED603C2E9FDC06E01F059C214D749 
{
public:
	// System.Int32 ARLocation.WorldBuilderApplicationController/AppState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppState_t0DDF716F729ED603C2E9FDC06E01F059C214D749, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ARLocation.WorldVoxelController/<StartWorld>d__19
struct U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47  : public RuntimeObject
{
public:
	// System.Int32 ARLocation.WorldVoxelController/<StartWorld>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ARLocation.WorldVoxelController/<StartWorld>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ARLocation.WorldVoxelController ARLocation.WorldVoxelController/<StartWorld>d__19::<>4__this
	WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * ___U3CU3E4__this_2;
	// ARLocation.WorldVoxelController/WorldChunk ARLocation.WorldVoxelController/<StartWorld>d__19::<closestChunk>5__2
	WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * ___U3CclosestChunkU3E5__2_3;
	// System.Int32 ARLocation.WorldVoxelController/<StartWorld>d__19::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Generic.List`1/Enumerator<ARLocation.WorldVoxelController/WorldChunk> ARLocation.WorldVoxelController/<StartWorld>d__19::<>7__wrap3
	Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1  ___U3CU3E7__wrap3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47, ___U3CU3E4__this_2)); }
	inline WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CclosestChunkU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47, ___U3CclosestChunkU3E5__2_3)); }
	inline WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * get_U3CclosestChunkU3E5__2_3() const { return ___U3CclosestChunkU3E5__2_3; }
	inline WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F ** get_address_of_U3CclosestChunkU3E5__2_3() { return &___U3CclosestChunkU3E5__2_3; }
	inline void set_U3CclosestChunkU3E5__2_3(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * value)
	{
		___U3CclosestChunkU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CclosestChunkU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47, ___U3CiU3E5__3_4)); }
	inline int32_t get_U3CiU3E5__3_4() const { return ___U3CiU3E5__3_4; }
	inline int32_t* get_address_of_U3CiU3E5__3_4() { return &___U3CiU3E5__3_4; }
	inline void set_U3CiU3E5__3_4(int32_t value)
	{
		___U3CiU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_5() { return static_cast<int32_t>(offsetof(U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47, ___U3CU3E7__wrap3_5)); }
	inline Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1  get_U3CU3E7__wrap3_5() const { return ___U3CU3E7__wrap3_5; }
	inline Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 * get_address_of_U3CU3E7__wrap3_5() { return &___U3CU3E7__wrap3_5; }
	inline void set_U3CU3E7__wrap3_5(Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1  value)
	{
		___U3CU3E7__wrap3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_5))->___current_3), (void*)NULL);
		#endif
	}
};


// ARLocation.WorldVoxelController/ApplicationState
struct ApplicationState_t852666E794D929671FF292C1815F7E24FE8A344C 
{
public:
	// System.Int32 ARLocation.WorldVoxelController/ApplicationState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApplicationState_t852666E794D929671FF292C1815F7E24FE8A344C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ARLocation.WorldVoxelController/Blocks
struct Blocks_t6AA4A6FD60D0AA05F38E906E4172FF4C08FFEC81 
{
public:
	// System.Int32 ARLocation.WorldVoxelController/Blocks::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Blocks_t6AA4A6FD60D0AA05F38E906E4172FF4C08FFEC81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ARLocation.WorldVoxelController/GameState
struct GameState_t986152A47C8B8AFF6C4EE77E3416853F8AC9CAA0 
{
public:
	// System.Int32 ARLocation.WorldVoxelController/GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t986152A47C8B8AFF6C4EE77E3416853F8AC9CAA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ARLocation.WorldVoxelController/SettingsData
struct SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0  : public RuntimeObject
{
public:
	// System.Single ARLocation.WorldVoxelController/SettingsData::CunkScale
	float ___CunkScale_0;
	// UnityEngine.Color ARLocation.WorldVoxelController/SettingsData::ButtonNormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ButtonNormalColor_1;
	// UnityEngine.Color ARLocation.WorldVoxelController/SettingsData::ButtonSelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ButtonSelectedColor_2;

public:
	inline static int32_t get_offset_of_CunkScale_0() { return static_cast<int32_t>(offsetof(SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0, ___CunkScale_0)); }
	inline float get_CunkScale_0() const { return ___CunkScale_0; }
	inline float* get_address_of_CunkScale_0() { return &___CunkScale_0; }
	inline void set_CunkScale_0(float value)
	{
		___CunkScale_0 = value;
	}

	inline static int32_t get_offset_of_ButtonNormalColor_1() { return static_cast<int32_t>(offsetof(SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0, ___ButtonNormalColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ButtonNormalColor_1() const { return ___ButtonNormalColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ButtonNormalColor_1() { return &___ButtonNormalColor_1; }
	inline void set_ButtonNormalColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ButtonNormalColor_1 = value;
	}

	inline static int32_t get_offset_of_ButtonSelectedColor_2() { return static_cast<int32_t>(offsetof(SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0, ___ButtonSelectedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ButtonSelectedColor_2() const { return ___ButtonSelectedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ButtonSelectedColor_2() { return &___ButtonSelectedColor_2; }
	inline void set_ButtonSelectedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ButtonSelectedColor_2 = value;
	}
};


// ARLocation.WorldVoxelController/Tools
struct Tools_t79709AD06DA3D1F9E741B125DA32A0E2F2F7EBAF 
{
public:
	// System.Int32 ARLocation.WorldVoxelController/Tools::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Tools_t79709AD06DA3D1F9E741B125DA32A0E2F2F7EBAF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ARLocation.WorldVoxelController/VoxelHit
struct VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F 
{
public:
	// ARLocation.WorldVoxelController/Voxel ARLocation.WorldVoxelController/VoxelHit::Voxel
	Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658 * ___Voxel_0;
	// UnityEngine.Vector3 ARLocation.WorldVoxelController/VoxelHit::Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Normal_1;
	// UnityEngine.Vector3 ARLocation.WorldVoxelController/VoxelHit::WorldNorma
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldNorma_2;

public:
	inline static int32_t get_offset_of_Voxel_0() { return static_cast<int32_t>(offsetof(VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F, ___Voxel_0)); }
	inline Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658 * get_Voxel_0() const { return ___Voxel_0; }
	inline Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658 ** get_address_of_Voxel_0() { return &___Voxel_0; }
	inline void set_Voxel_0(Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658 * value)
	{
		___Voxel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Voxel_0), (void*)value);
	}

	inline static int32_t get_offset_of_Normal_1() { return static_cast<int32_t>(offsetof(VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F, ___Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Normal_1() const { return ___Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Normal_1() { return &___Normal_1; }
	inline void set_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Normal_1 = value;
	}

	inline static int32_t get_offset_of_WorldNorma_2() { return static_cast<int32_t>(offsetof(VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F, ___WorldNorma_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_WorldNorma_2() const { return ___WorldNorma_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_WorldNorma_2() { return &___WorldNorma_2; }
	inline void set_WorldNorma_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___WorldNorma_2 = value;
	}
};

// Native definition for P/Invoke marshalling of ARLocation.WorldVoxelController/VoxelHit
struct VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshaled_pinvoke
{
	Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658 * ___Voxel_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldNorma_2;
};
// Native definition for COM marshalling of ARLocation.WorldVoxelController/VoxelHit
struct VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshaled_com
{
	Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658 * ___Voxel_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldNorma_2;
};

// Mapbox.Unity.Constants/GUI/Colors
struct Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD  : public RuntimeObject
{
public:

public:
};

struct Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields
{
public:
	// UnityEngine.Color Mapbox.Unity.Constants/GUI/Colors::EDITOR_TEXT_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EDITOR_TEXT_COLOR_0;
	// UnityEngine.Color Mapbox.Unity.Constants/GUI/Colors::EDITOR_NOTE_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EDITOR_NOTE_COLOR_1;
	// UnityEngine.Color Mapbox.Unity.Constants/GUI/Colors::EDITOR_FEATURE_DEFAULT_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EDITOR_FEATURE_DEFAULT_COLOR_2;

public:
	inline static int32_t get_offset_of_EDITOR_TEXT_COLOR_0() { return static_cast<int32_t>(offsetof(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields, ___EDITOR_TEXT_COLOR_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EDITOR_TEXT_COLOR_0() const { return ___EDITOR_TEXT_COLOR_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EDITOR_TEXT_COLOR_0() { return &___EDITOR_TEXT_COLOR_0; }
	inline void set_EDITOR_TEXT_COLOR_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EDITOR_TEXT_COLOR_0 = value;
	}

	inline static int32_t get_offset_of_EDITOR_NOTE_COLOR_1() { return static_cast<int32_t>(offsetof(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields, ___EDITOR_NOTE_COLOR_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EDITOR_NOTE_COLOR_1() const { return ___EDITOR_NOTE_COLOR_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EDITOR_NOTE_COLOR_1() { return &___EDITOR_NOTE_COLOR_1; }
	inline void set_EDITOR_NOTE_COLOR_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EDITOR_NOTE_COLOR_1 = value;
	}

	inline static int32_t get_offset_of_EDITOR_FEATURE_DEFAULT_COLOR_2() { return static_cast<int32_t>(offsetof(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields, ___EDITOR_FEATURE_DEFAULT_COLOR_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EDITOR_FEATURE_DEFAULT_COLOR_2() const { return ___EDITOR_FEATURE_DEFAULT_COLOR_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EDITOR_FEATURE_DEFAULT_COLOR_2() { return &___EDITOR_FEATURE_DEFAULT_COLOR_2; }
	inline void set_EDITOR_FEATURE_DEFAULT_COLOR_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EDITOR_FEATURE_DEFAULT_COLOR_2 = value;
	}
};


// ARLocation.Vendor.SimpleJSON.JSONNode/Enumerator/Type
struct Type_t8688FF1325BB931370BED1E67FAA8AD5D65CAA4A 
{
public:
	// System.Int32 ARLocation.Vendor.SimpleJSON.JSONNode/Enumerator/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t8688FF1325BB931370BED1E67FAA8AD5D65CAA4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// ARLocation.Location
struct Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89  : public RuntimeObject
{
public:
	// System.Double ARLocation.Location::Latitude
	double ___Latitude_0;
	// System.Double ARLocation.Location::Longitude
	double ___Longitude_1;
	// System.Double ARLocation.Location::Altitude
	double ___Altitude_2;
	// ARLocation.AltitudeMode ARLocation.Location::AltitudeMode
	int32_t ___AltitudeMode_3;
	// System.String ARLocation.Location::Label
	String_t* ___Label_4;

public:
	inline static int32_t get_offset_of_Latitude_0() { return static_cast<int32_t>(offsetof(Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89, ___Latitude_0)); }
	inline double get_Latitude_0() const { return ___Latitude_0; }
	inline double* get_address_of_Latitude_0() { return &___Latitude_0; }
	inline void set_Latitude_0(double value)
	{
		___Latitude_0 = value;
	}

	inline static int32_t get_offset_of_Longitude_1() { return static_cast<int32_t>(offsetof(Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89, ___Longitude_1)); }
	inline double get_Longitude_1() const { return ___Longitude_1; }
	inline double* get_address_of_Longitude_1() { return &___Longitude_1; }
	inline void set_Longitude_1(double value)
	{
		___Longitude_1 = value;
	}

	inline static int32_t get_offset_of_Altitude_2() { return static_cast<int32_t>(offsetof(Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89, ___Altitude_2)); }
	inline double get_Altitude_2() const { return ___Altitude_2; }
	inline double* get_address_of_Altitude_2() { return &___Altitude_2; }
	inline void set_Altitude_2(double value)
	{
		___Altitude_2 = value;
	}

	inline static int32_t get_offset_of_AltitudeMode_3() { return static_cast<int32_t>(offsetof(Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89, ___AltitudeMode_3)); }
	inline int32_t get_AltitudeMode_3() const { return ___AltitudeMode_3; }
	inline int32_t* get_address_of_AltitudeMode_3() { return &___AltitudeMode_3; }
	inline void set_AltitudeMode_3(int32_t value)
	{
		___AltitudeMode_3 = value;
	}

	inline static int32_t get_offset_of_Label_4() { return static_cast<int32_t>(offsetof(Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89, ___Label_4)); }
	inline String_t* get_Label_4() const { return ___Label_4; }
	inline String_t** get_address_of_Label_4() { return &___Label_4; }
	inline void set_Label_4(String_t* value)
	{
		___Label_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Label_4), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_stringLength_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___stringLength_2)); }
	inline int32_t get_stringLength_2() const { return ___stringLength_2; }
	inline int32_t* get_address_of_stringLength_2() { return &___stringLength_2; }
	inline void set_stringLength_2(int32_t value)
	{
		___stringLength_2 = value;
	}

	inline static int32_t get_offset_of_elementType_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___elementType_3)); }
	inline int32_t get_elementType_3() const { return ___elementType_3; }
	inline int32_t* get_address_of_elementType_3() { return &___elementType_3; }
	inline void set_elementType_3(int32_t value)
	{
		___elementType_3 = value;
	}

	inline static int32_t get_offset_of_textElement_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___textElement_4)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_textElement_4() const { return ___textElement_4; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_textElement_4() { return &___textElement_4; }
	inline void set_textElement_4(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___textElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___fontAsset_5)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_5() const { return ___fontAsset_5; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_5() { return &___fontAsset_5; }
	inline void set_fontAsset_5(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteAsset_6)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_6() const { return ___spriteAsset_6; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_6() { return &___spriteAsset_6; }
	inline void set_spriteAsset_6(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteIndex_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteIndex_7)); }
	inline int32_t get_spriteIndex_7() const { return ___spriteIndex_7; }
	inline int32_t* get_address_of_spriteIndex_7() { return &___spriteIndex_7; }
	inline void set_spriteIndex_7(int32_t value)
	{
		___spriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_material_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___material_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_8() const { return ___material_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_8() { return &___material_8; }
	inline void set_material_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_8), (void*)value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___materialReferenceIndex_9)); }
	inline int32_t get_materialReferenceIndex_9() const { return ___materialReferenceIndex_9; }
	inline int32_t* get_address_of_materialReferenceIndex_9() { return &___materialReferenceIndex_9; }
	inline void set_materialReferenceIndex_9(int32_t value)
	{
		___materialReferenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isUsingAlternateTypeface_10)); }
	inline bool get_isUsingAlternateTypeface_10() const { return ___isUsingAlternateTypeface_10; }
	inline bool* get_address_of_isUsingAlternateTypeface_10() { return &___isUsingAlternateTypeface_10; }
	inline void set_isUsingAlternateTypeface_10(bool value)
	{
		___isUsingAlternateTypeface_10 = value;
	}

	inline static int32_t get_offset_of_pointSize_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pointSize_11)); }
	inline float get_pointSize_11() const { return ___pointSize_11; }
	inline float* get_address_of_pointSize_11() { return &___pointSize_11; }
	inline void set_pointSize_11(float value)
	{
		___pointSize_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_pageNumber_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pageNumber_13)); }
	inline int32_t get_pageNumber_13() const { return ___pageNumber_13; }
	inline int32_t* get_address_of_pageNumber_13() { return &___pageNumber_13; }
	inline void set_pageNumber_13(int32_t value)
	{
		___pageNumber_13 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertexIndex_14)); }
	inline int32_t get_vertexIndex_14() const { return ___vertexIndex_14; }
	inline int32_t* get_address_of_vertexIndex_14() { return &___vertexIndex_14; }
	inline void set_vertexIndex_14(int32_t value)
	{
		___vertexIndex_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BL_15)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TL_16)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TL_16() const { return ___vertex_TL_16; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TL_16() { return &___vertex_TL_16; }
	inline void set_vertex_TL_16(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TL_16 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TR_17)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TR_17() const { return ___vertex_TR_17; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TR_17() { return &___vertex_TR_17; }
	inline void set_vertex_TR_17(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TR_17 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BR_18)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BR_18() const { return ___vertex_BR_18; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BR_18() { return &___vertex_BR_18; }
	inline void set_vertex_BR_18(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BR_18 = value;
	}

	inline static int32_t get_offset_of_topLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topLeft_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topLeft_19() const { return ___topLeft_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topLeft_19() { return &___topLeft_19; }
	inline void set_topLeft_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topLeft_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomLeft_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_topRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topRight_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topRight_21() const { return ___topRight_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topRight_21() { return &___topRight_21; }
	inline void set_topRight_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topRight_21 = value;
	}

	inline static int32_t get_offset_of_bottomRight_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomRight_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomRight_22() const { return ___bottomRight_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomRight_22() { return &___bottomRight_22; }
	inline void set_bottomRight_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomRight_22 = value;
	}

	inline static int32_t get_offset_of_origin_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___origin_23)); }
	inline float get_origin_23() const { return ___origin_23; }
	inline float* get_address_of_origin_23() { return &___origin_23; }
	inline void set_origin_23(float value)
	{
		___origin_23 = value;
	}

	inline static int32_t get_offset_of_xAdvance_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___xAdvance_24)); }
	inline float get_xAdvance_24() const { return ___xAdvance_24; }
	inline float* get_address_of_xAdvance_24() { return &___xAdvance_24; }
	inline void set_xAdvance_24(float value)
	{
		___xAdvance_24 = value;
	}

	inline static int32_t get_offset_of_ascender_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___ascender_25)); }
	inline float get_ascender_25() const { return ___ascender_25; }
	inline float* get_address_of_ascender_25() { return &___ascender_25; }
	inline void set_ascender_25(float value)
	{
		___ascender_25 = value;
	}

	inline static int32_t get_offset_of_baseLine_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___baseLine_26)); }
	inline float get_baseLine_26() const { return ___baseLine_26; }
	inline float* get_address_of_baseLine_26() { return &___baseLine_26; }
	inline void set_baseLine_26(float value)
	{
		___baseLine_26 = value;
	}

	inline static int32_t get_offset_of_descender_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___descender_27)); }
	inline float get_descender_27() const { return ___descender_27; }
	inline float* get_address_of_descender_27() { return &___descender_27; }
	inline void set_descender_27(float value)
	{
		___descender_27 = value;
	}

	inline static int32_t get_offset_of_adjustedAscender_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedAscender_28)); }
	inline float get_adjustedAscender_28() const { return ___adjustedAscender_28; }
	inline float* get_address_of_adjustedAscender_28() { return &___adjustedAscender_28; }
	inline void set_adjustedAscender_28(float value)
	{
		___adjustedAscender_28 = value;
	}

	inline static int32_t get_offset_of_adjustedDescender_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedDescender_29)); }
	inline float get_adjustedDescender_29() const { return ___adjustedDescender_29; }
	inline float* get_address_of_adjustedDescender_29() { return &___adjustedDescender_29; }
	inline void set_adjustedDescender_29(float value)
	{
		___adjustedDescender_29 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___aspectRatio_30)); }
	inline float get_aspectRatio_30() const { return ___aspectRatio_30; }
	inline float* get_address_of_aspectRatio_30() { return &___aspectRatio_30; }
	inline void set_aspectRatio_30(float value)
	{
		___aspectRatio_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___scale_31)); }
	inline float get_scale_31() const { return ___scale_31; }
	inline float* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(float value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_color_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___color_32)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_32() const { return ___color_32; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_32() { return &___color_32; }
	inline void set_color_32(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_32 = value;
	}

	inline static int32_t get_offset_of_underlineColor_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineColor_33)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_33() const { return ___underlineColor_33; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_33() { return &___underlineColor_33; }
	inline void set_underlineColor_33(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_33 = value;
	}

	inline static int32_t get_offset_of_underlineVertexIndex_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineVertexIndex_34)); }
	inline int32_t get_underlineVertexIndex_34() const { return ___underlineVertexIndex_34; }
	inline int32_t* get_address_of_underlineVertexIndex_34() { return &___underlineVertexIndex_34; }
	inline void set_underlineVertexIndex_34(int32_t value)
	{
		___underlineVertexIndex_34 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_35() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughColor_35)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_35() const { return ___strikethroughColor_35; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_35() { return &___strikethroughColor_35; }
	inline void set_strikethroughColor_35(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughVertexIndex_36() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughVertexIndex_36)); }
	inline int32_t get_strikethroughVertexIndex_36() const { return ___strikethroughVertexIndex_36; }
	inline int32_t* get_address_of_strikethroughVertexIndex_36() { return &___strikethroughVertexIndex_36; }
	inline void set_strikethroughVertexIndex_36(int32_t value)
	{
		___strikethroughVertexIndex_36 = value;
	}

	inline static int32_t get_offset_of_highlightColor_37() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_37() const { return ___highlightColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_37() { return &___highlightColor_37; }
	inline void set_highlightColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_37 = value;
	}

	inline static int32_t get_offset_of_highlightState_38() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightState_38)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_highlightState_38() const { return ___highlightState_38; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_highlightState_38() { return &___highlightState_38; }
	inline void set_highlightState_38(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___highlightState_38 = value;
	}

	inline static int32_t get_offset_of_style_39() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___style_39)); }
	inline int32_t get_style_39() const { return ___style_39; }
	inline int32_t* get_address_of_style_39() { return &___style_39; }
	inline void set_style_39(int32_t value)
	{
		___style_39 = value;
	}

	inline static int32_t get_offset_of_isVisible_40() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isVisible_40)); }
	inline bool get_isVisible_40() const { return ___isVisible_40; }
	inline bool* get_address_of_isVisible_40() { return &___isVisible_40; }
	inline void set_isVisible_40(bool value)
	{
		___isVisible_40 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 
{
public:
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;

public:
	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___mesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertexCount_5() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertexCount_5)); }
	inline int32_t get_vertexCount_5() const { return ___vertexCount_5; }
	inline int32_t* get_address_of_vertexCount_5() { return &___vertexCount_5; }
	inline void set_vertexCount_5(int32_t value)
	{
		___vertexCount_5 = value;
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertices_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_6() const { return ___vertices_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___normals_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_7() const { return ___normals_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_7), (void*)value);
	}

	inline static int32_t get_offset_of_tangents_8() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___tangents_8)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_tangents_8() const { return ___tangents_8; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_tangents_8() { return &___tangents_8; }
	inline void set_tangents_8(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___tangents_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tangents_8), (void*)value);
	}

	inline static int32_t get_offset_of_uvs0_9() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs0_9)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs0_9() const { return ___uvs0_9; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs0_9() { return &___uvs0_9; }
	inline void set_uvs0_9(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs0_9), (void*)value);
	}

	inline static int32_t get_offset_of_uvs2_10() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs2_10)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs2_10() const { return ___uvs2_10; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs2_10() { return &___uvs2_10; }
	inline void set_uvs2_10(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs2_10), (void*)value);
	}

	inline static int32_t get_offset_of_colors32_11() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___colors32_11)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_colors32_11() const { return ___colors32_11; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_colors32_11() { return &___colors32_11; }
	inline void set_colors32_11(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___colors32_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors32_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___triangles_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_12() const { return ___triangles_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}

	inline static int32_t get_offset_of_material_13() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___material_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_13() const { return ___material_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_13() { return &___material_13; }
	inline void set_material_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_13), (void*)value);
	}
};

struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___s_DefaultBounds_3;

public:
	inline static int32_t get_offset_of_s_DefaultColor_0() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultColor_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_0() const { return ___s_DefaultColor_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_0() { return &___s_DefaultColor_0; }
	inline void set_s_DefaultColor_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_0 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_1() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultNormal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_1() const { return ___s_DefaultNormal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_1() { return &___s_DefaultNormal_1; }
	inline void set_s_DefaultNormal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_1 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_2() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultTangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_2() const { return ___s_DefaultTangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_2() { return &___s_DefaultTangent_2; }
	inline void set_s_DefaultTangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_2 = value;
	}

	inline static int32_t get_offset_of_s_DefaultBounds_3() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultBounds_3)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_s_DefaultBounds_3() const { return ___s_DefaultBounds_3; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_s_DefaultBounds_3() { return &___s_DefaultBounds_3; }
	inline void set_s_DefaultBounds_3(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___s_DefaultBounds_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_pinvoke
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_com
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// ARLocation.WorldBuilderApplicationController/State
struct State_tD84D35898133E39AECF1070605DA06A912BA7DFE  : public RuntimeObject
{
public:
	// System.String ARLocation.WorldBuilderApplicationController/State::CurrentMeshId
	String_t* ___CurrentMeshId_0;
	// ARLocation.WorldBuilderApplicationController/AppState ARLocation.WorldBuilderApplicationController/State::AppState
	int32_t ___AppState_1;

public:
	inline static int32_t get_offset_of_CurrentMeshId_0() { return static_cast<int32_t>(offsetof(State_tD84D35898133E39AECF1070605DA06A912BA7DFE, ___CurrentMeshId_0)); }
	inline String_t* get_CurrentMeshId_0() const { return ___CurrentMeshId_0; }
	inline String_t** get_address_of_CurrentMeshId_0() { return &___CurrentMeshId_0; }
	inline void set_CurrentMeshId_0(String_t* value)
	{
		___CurrentMeshId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentMeshId_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppState_1() { return static_cast<int32_t>(offsetof(State_tD84D35898133E39AECF1070605DA06A912BA7DFE, ___AppState_1)); }
	inline int32_t get_AppState_1() const { return ___AppState_1; }
	inline int32_t* get_address_of_AppState_1() { return &___AppState_1; }
	inline void set_AppState_1(int32_t value)
	{
		___AppState_1 = value;
	}
};


// ARLocation.WorldVoxelController/StateData
struct StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B  : public RuntimeObject
{
public:
	// ARLocation.WorldVoxelController/ApplicationState ARLocation.WorldVoxelController/StateData::AppState
	int32_t ___AppState_0;
	// ARLocation.WorldVoxelController/GameState ARLocation.WorldVoxelController/StateData::GameState
	int32_t ___GameState_1;
	// ARLocation.WorldVoxelController/Blocks ARLocation.WorldVoxelController/StateData::CurrentBlock
	int32_t ___CurrentBlock_2;
	// ARLocation.WorldVoxelController/WorldChunk ARLocation.WorldVoxelController/StateData::CurrentChunk
	WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * ___CurrentChunk_3;
	// ARLocation.Location ARLocation.WorldVoxelController/StateData::CurrentLocation
	Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * ___CurrentLocation_4;

public:
	inline static int32_t get_offset_of_AppState_0() { return static_cast<int32_t>(offsetof(StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B, ___AppState_0)); }
	inline int32_t get_AppState_0() const { return ___AppState_0; }
	inline int32_t* get_address_of_AppState_0() { return &___AppState_0; }
	inline void set_AppState_0(int32_t value)
	{
		___AppState_0 = value;
	}

	inline static int32_t get_offset_of_GameState_1() { return static_cast<int32_t>(offsetof(StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B, ___GameState_1)); }
	inline int32_t get_GameState_1() const { return ___GameState_1; }
	inline int32_t* get_address_of_GameState_1() { return &___GameState_1; }
	inline void set_GameState_1(int32_t value)
	{
		___GameState_1 = value;
	}

	inline static int32_t get_offset_of_CurrentBlock_2() { return static_cast<int32_t>(offsetof(StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B, ___CurrentBlock_2)); }
	inline int32_t get_CurrentBlock_2() const { return ___CurrentBlock_2; }
	inline int32_t* get_address_of_CurrentBlock_2() { return &___CurrentBlock_2; }
	inline void set_CurrentBlock_2(int32_t value)
	{
		___CurrentBlock_2 = value;
	}

	inline static int32_t get_offset_of_CurrentChunk_3() { return static_cast<int32_t>(offsetof(StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B, ___CurrentChunk_3)); }
	inline WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * get_CurrentChunk_3() const { return ___CurrentChunk_3; }
	inline WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F ** get_address_of_CurrentChunk_3() { return &___CurrentChunk_3; }
	inline void set_CurrentChunk_3(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * value)
	{
		___CurrentChunk_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentChunk_3), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentLocation_4() { return static_cast<int32_t>(offsetof(StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B, ___CurrentLocation_4)); }
	inline Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * get_CurrentLocation_4() const { return ___CurrentLocation_4; }
	inline Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 ** get_address_of_CurrentLocation_4() { return &___CurrentLocation_4; }
	inline void set_CurrentLocation_4(Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * value)
	{
		___CurrentLocation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentLocation_4), (void*)value);
	}
};


// ARLocation.WorldVoxelController/WorldChunk
struct WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<ARLocation.WorldVoxelController/Voxel> ARLocation.WorldVoxelController/WorldChunk::Voxels
	List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C * ___Voxels_0;
	// ARLocation.Location ARLocation.WorldVoxelController/WorldChunk::ChunkLocation
	Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * ___ChunkLocation_1;
	// System.Single ARLocation.WorldVoxelController/WorldChunk::ChunkRotation
	float ___ChunkRotation_2;
	// System.Boolean ARLocation.WorldVoxelController/WorldChunk::HasLocation
	bool ___HasLocation_3;
	// System.Int32 ARLocation.WorldVoxelController/WorldChunk::Length
	int32_t ___Length_4;
	// UnityEngine.Vector3 ARLocation.WorldVoxelController/WorldChunk::Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_5;
	// UnityEngine.GameObject ARLocation.WorldVoxelController/WorldChunk::ChunkContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ChunkContainer_6;
	// UnityEngine.Bounds ARLocation.WorldVoxelController/WorldChunk::Bounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___Bounds_7;
	// System.Boolean ARLocation.WorldVoxelController/WorldChunk::IsFresh
	bool ___IsFresh_8;

public:
	inline static int32_t get_offset_of_Voxels_0() { return static_cast<int32_t>(offsetof(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F, ___Voxels_0)); }
	inline List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C * get_Voxels_0() const { return ___Voxels_0; }
	inline List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C ** get_address_of_Voxels_0() { return &___Voxels_0; }
	inline void set_Voxels_0(List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C * value)
	{
		___Voxels_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Voxels_0), (void*)value);
	}

	inline static int32_t get_offset_of_ChunkLocation_1() { return static_cast<int32_t>(offsetof(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F, ___ChunkLocation_1)); }
	inline Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * get_ChunkLocation_1() const { return ___ChunkLocation_1; }
	inline Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 ** get_address_of_ChunkLocation_1() { return &___ChunkLocation_1; }
	inline void set_ChunkLocation_1(Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * value)
	{
		___ChunkLocation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChunkLocation_1), (void*)value);
	}

	inline static int32_t get_offset_of_ChunkRotation_2() { return static_cast<int32_t>(offsetof(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F, ___ChunkRotation_2)); }
	inline float get_ChunkRotation_2() const { return ___ChunkRotation_2; }
	inline float* get_address_of_ChunkRotation_2() { return &___ChunkRotation_2; }
	inline void set_ChunkRotation_2(float value)
	{
		___ChunkRotation_2 = value;
	}

	inline static int32_t get_offset_of_HasLocation_3() { return static_cast<int32_t>(offsetof(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F, ___HasLocation_3)); }
	inline bool get_HasLocation_3() const { return ___HasLocation_3; }
	inline bool* get_address_of_HasLocation_3() { return &___HasLocation_3; }
	inline void set_HasLocation_3(bool value)
	{
		___HasLocation_3 = value;
	}

	inline static int32_t get_offset_of_Length_4() { return static_cast<int32_t>(offsetof(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F, ___Length_4)); }
	inline int32_t get_Length_4() const { return ___Length_4; }
	inline int32_t* get_address_of_Length_4() { return &___Length_4; }
	inline void set_Length_4(int32_t value)
	{
		___Length_4 = value;
	}

	inline static int32_t get_offset_of_Origin_5() { return static_cast<int32_t>(offsetof(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F, ___Origin_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Origin_5() const { return ___Origin_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Origin_5() { return &___Origin_5; }
	inline void set_Origin_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Origin_5 = value;
	}

	inline static int32_t get_offset_of_ChunkContainer_6() { return static_cast<int32_t>(offsetof(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F, ___ChunkContainer_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ChunkContainer_6() const { return ___ChunkContainer_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ChunkContainer_6() { return &___ChunkContainer_6; }
	inline void set_ChunkContainer_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ChunkContainer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChunkContainer_6), (void*)value);
	}

	inline static int32_t get_offset_of_Bounds_7() { return static_cast<int32_t>(offsetof(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F, ___Bounds_7)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_Bounds_7() const { return ___Bounds_7; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_Bounds_7() { return &___Bounds_7; }
	inline void set_Bounds_7(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___Bounds_7 = value;
	}

	inline static int32_t get_offset_of_IsFresh_8() { return static_cast<int32_t>(offsetof(WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F, ___IsFresh_8)); }
	inline bool get_IsFresh_8() const { return ___IsFresh_8; }
	inline bool* get_address_of_IsFresh_8() { return &___IsFresh_8; }
	inline void set_IsFresh_8(bool value)
	{
		___IsFresh_8 = value;
	}
};


// System.Func`2<Mapbox.Examples.Voxels.VoxelData,System.Single>
struct Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<ARLocation.Location>
struct UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_35)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_36)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_58)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_60)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_62)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ARLocation.Utils.Singleton`1<ARLocation.ARLocationProvider>
struct Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_StaticFields
{
public:
	// System.Boolean ARLocation.Utils.Singleton`1::m_ShuttingDown
	bool ___m_ShuttingDown_4;
	// System.Object ARLocation.Utils.Singleton`1::m_Lock
	RuntimeObject * ___m_Lock_5;
	// T ARLocation.Utils.Singleton`1::m_Instance
	ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * ___m_Instance_6;

public:
	inline static int32_t get_offset_of_m_ShuttingDown_4() { return static_cast<int32_t>(offsetof(Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_StaticFields, ___m_ShuttingDown_4)); }
	inline bool get_m_ShuttingDown_4() const { return ___m_ShuttingDown_4; }
	inline bool* get_address_of_m_ShuttingDown_4() { return &___m_ShuttingDown_4; }
	inline void set_m_ShuttingDown_4(bool value)
	{
		___m_ShuttingDown_4 = value;
	}

	inline static int32_t get_offset_of_m_Lock_5() { return static_cast<int32_t>(offsetof(Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_StaticFields, ___m_Lock_5)); }
	inline RuntimeObject * get_m_Lock_5() const { return ___m_Lock_5; }
	inline RuntimeObject ** get_address_of_m_Lock_5() { return &___m_Lock_5; }
	inline void set_m_Lock_5(RuntimeObject * value)
	{
		___m_Lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Instance_6() { return static_cast<int32_t>(offsetof(Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_StaticFields, ___m_Instance_6)); }
	inline ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * get_m_Instance_6() const { return ___m_Instance_6; }
	inline ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 ** get_address_of_m_Instance_6() { return &___m_Instance_6; }
	inline void set_m_Instance_6(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * value)
	{
		___m_Instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Mapbox.Examples.Voxels.VoxelTile
struct VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mapbox.Examples.ForwardGeocodeUserInput Mapbox.Examples.Voxels.VoxelTile::_geocodeInput
	ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 * ____geocodeInput_4;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_zoom
	int32_t ____zoom_5;
	// System.Single Mapbox.Examples.Voxels.VoxelTile::_elevationMultiplier
	float ____elevationMultiplier_6;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_voxelDepthPadding
	int32_t ____voxelDepthPadding_7;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_tileWidthInVoxels
	int32_t ____tileWidthInVoxels_8;
	// Mapbox.Examples.Voxels.VoxelFetcher Mapbox.Examples.Voxels.VoxelTile::_voxelFetcher
	VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D * ____voxelFetcher_9;
	// UnityEngine.GameObject Mapbox.Examples.Voxels.VoxelTile::_camera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____camera_10;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_voxelBatchCount
	int32_t ____voxelBatchCount_11;
	// System.String Mapbox.Examples.Voxels.VoxelTile::_styleUrl
	String_t* ____styleUrl_12;
	// Mapbox.Map.Map`1<Mapbox.Map.RasterTile> Mapbox.Examples.Voxels.VoxelTile::_raster
	Map_1_tC48A961A1B61785722D5907072B2D13475A89832 * ____raster_13;
	// Mapbox.Map.Map`1<Mapbox.Map.RawPngRasterTile> Mapbox.Examples.Voxels.VoxelTile::_elevation
	Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 * ____elevation_14;
	// UnityEngine.Texture2D Mapbox.Examples.Voxels.VoxelTile::_rasterTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____rasterTexture_15;
	// UnityEngine.Texture2D Mapbox.Examples.Voxels.VoxelTile::_elevationTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____elevationTexture_16;
	// Mapbox.Platform.IFileSource Mapbox.Examples.Voxels.VoxelTile::_fileSource
	RuntimeObject* ____fileSource_17;
	// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData> Mapbox.Examples.Voxels.VoxelTile::_voxels
	List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * ____voxels_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Mapbox.Examples.Voxels.VoxelTile::_instantiatedVoxels
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____instantiatedVoxels_19;
	// System.Single Mapbox.Examples.Voxels.VoxelTile::_tileScale
	float ____tileScale_20;

public:
	inline static int32_t get_offset_of__geocodeInput_4() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____geocodeInput_4)); }
	inline ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 * get__geocodeInput_4() const { return ____geocodeInput_4; }
	inline ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 ** get_address_of__geocodeInput_4() { return &____geocodeInput_4; }
	inline void set__geocodeInput_4(ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 * value)
	{
		____geocodeInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____geocodeInput_4), (void*)value);
	}

	inline static int32_t get_offset_of__zoom_5() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____zoom_5)); }
	inline int32_t get__zoom_5() const { return ____zoom_5; }
	inline int32_t* get_address_of__zoom_5() { return &____zoom_5; }
	inline void set__zoom_5(int32_t value)
	{
		____zoom_5 = value;
	}

	inline static int32_t get_offset_of__elevationMultiplier_6() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____elevationMultiplier_6)); }
	inline float get__elevationMultiplier_6() const { return ____elevationMultiplier_6; }
	inline float* get_address_of__elevationMultiplier_6() { return &____elevationMultiplier_6; }
	inline void set__elevationMultiplier_6(float value)
	{
		____elevationMultiplier_6 = value;
	}

	inline static int32_t get_offset_of__voxelDepthPadding_7() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxelDepthPadding_7)); }
	inline int32_t get__voxelDepthPadding_7() const { return ____voxelDepthPadding_7; }
	inline int32_t* get_address_of__voxelDepthPadding_7() { return &____voxelDepthPadding_7; }
	inline void set__voxelDepthPadding_7(int32_t value)
	{
		____voxelDepthPadding_7 = value;
	}

	inline static int32_t get_offset_of__tileWidthInVoxels_8() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____tileWidthInVoxels_8)); }
	inline int32_t get__tileWidthInVoxels_8() const { return ____tileWidthInVoxels_8; }
	inline int32_t* get_address_of__tileWidthInVoxels_8() { return &____tileWidthInVoxels_8; }
	inline void set__tileWidthInVoxels_8(int32_t value)
	{
		____tileWidthInVoxels_8 = value;
	}

	inline static int32_t get_offset_of__voxelFetcher_9() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxelFetcher_9)); }
	inline VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D * get__voxelFetcher_9() const { return ____voxelFetcher_9; }
	inline VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D ** get_address_of__voxelFetcher_9() { return &____voxelFetcher_9; }
	inline void set__voxelFetcher_9(VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D * value)
	{
		____voxelFetcher_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voxelFetcher_9), (void*)value);
	}

	inline static int32_t get_offset_of__camera_10() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____camera_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__camera_10() const { return ____camera_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__camera_10() { return &____camera_10; }
	inline void set__camera_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____camera_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_10), (void*)value);
	}

	inline static int32_t get_offset_of__voxelBatchCount_11() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxelBatchCount_11)); }
	inline int32_t get__voxelBatchCount_11() const { return ____voxelBatchCount_11; }
	inline int32_t* get_address_of__voxelBatchCount_11() { return &____voxelBatchCount_11; }
	inline void set__voxelBatchCount_11(int32_t value)
	{
		____voxelBatchCount_11 = value;
	}

	inline static int32_t get_offset_of__styleUrl_12() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____styleUrl_12)); }
	inline String_t* get__styleUrl_12() const { return ____styleUrl_12; }
	inline String_t** get_address_of__styleUrl_12() { return &____styleUrl_12; }
	inline void set__styleUrl_12(String_t* value)
	{
		____styleUrl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____styleUrl_12), (void*)value);
	}

	inline static int32_t get_offset_of__raster_13() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____raster_13)); }
	inline Map_1_tC48A961A1B61785722D5907072B2D13475A89832 * get__raster_13() const { return ____raster_13; }
	inline Map_1_tC48A961A1B61785722D5907072B2D13475A89832 ** get_address_of__raster_13() { return &____raster_13; }
	inline void set__raster_13(Map_1_tC48A961A1B61785722D5907072B2D13475A89832 * value)
	{
		____raster_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raster_13), (void*)value);
	}

	inline static int32_t get_offset_of__elevation_14() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____elevation_14)); }
	inline Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 * get__elevation_14() const { return ____elevation_14; }
	inline Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 ** get_address_of__elevation_14() { return &____elevation_14; }
	inline void set__elevation_14(Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 * value)
	{
		____elevation_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevation_14), (void*)value);
	}

	inline static int32_t get_offset_of__rasterTexture_15() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____rasterTexture_15)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__rasterTexture_15() const { return ____rasterTexture_15; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__rasterTexture_15() { return &____rasterTexture_15; }
	inline void set__rasterTexture_15(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____rasterTexture_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rasterTexture_15), (void*)value);
	}

	inline static int32_t get_offset_of__elevationTexture_16() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____elevationTexture_16)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__elevationTexture_16() const { return ____elevationTexture_16; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__elevationTexture_16() { return &____elevationTexture_16; }
	inline void set__elevationTexture_16(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____elevationTexture_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevationTexture_16), (void*)value);
	}

	inline static int32_t get_offset_of__fileSource_17() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____fileSource_17)); }
	inline RuntimeObject* get__fileSource_17() const { return ____fileSource_17; }
	inline RuntimeObject** get_address_of__fileSource_17() { return &____fileSource_17; }
	inline void set__fileSource_17(RuntimeObject* value)
	{
		____fileSource_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_17), (void*)value);
	}

	inline static int32_t get_offset_of__voxels_18() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxels_18)); }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * get__voxels_18() const { return ____voxels_18; }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 ** get_address_of__voxels_18() { return &____voxels_18; }
	inline void set__voxels_18(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * value)
	{
		____voxels_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voxels_18), (void*)value);
	}

	inline static int32_t get_offset_of__instantiatedVoxels_19() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____instantiatedVoxels_19)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__instantiatedVoxels_19() const { return ____instantiatedVoxels_19; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__instantiatedVoxels_19() { return &____instantiatedVoxels_19; }
	inline void set__instantiatedVoxels_19(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____instantiatedVoxels_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instantiatedVoxels_19), (void*)value);
	}

	inline static int32_t get_offset_of__tileScale_20() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____tileScale_20)); }
	inline float get__tileScale_20() const { return ____tileScale_20; }
	inline float* get_address_of__tileScale_20() { return &____tileScale_20; }
	inline void set__tileScale_20(float value)
	{
		____tileScale_20 = value;
	}
};


// TMPro.Examples.WarpTextExample
struct WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TMP_Text TMPro.Examples.WarpTextExample::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_4;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::VertexCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___VertexCurve_5;
	// System.Single TMPro.Examples.WarpTextExample::AngleMultiplier
	float ___AngleMultiplier_6;
	// System.Single TMPro.Examples.WarpTextExample::SpeedMultiplier
	float ___SpeedMultiplier_7;
	// System.Single TMPro.Examples.WarpTextExample::CurveScale
	float ___CurveScale_8;

public:
	inline static int32_t get_offset_of_m_TextComponent_4() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___m_TextComponent_4)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_4() const { return ___m_TextComponent_4; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_4() { return &___m_TextComponent_4; }
	inline void set_m_TextComponent_4(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_4), (void*)value);
	}

	inline static int32_t get_offset_of_VertexCurve_5() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___VertexCurve_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_VertexCurve_5() const { return ___VertexCurve_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_VertexCurve_5() { return &___VertexCurve_5; }
	inline void set_VertexCurve_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___VertexCurve_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexCurve_5), (void*)value);
	}

	inline static int32_t get_offset_of_AngleMultiplier_6() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___AngleMultiplier_6)); }
	inline float get_AngleMultiplier_6() const { return ___AngleMultiplier_6; }
	inline float* get_address_of_AngleMultiplier_6() { return &___AngleMultiplier_6; }
	inline void set_AngleMultiplier_6(float value)
	{
		___AngleMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_7() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___SpeedMultiplier_7)); }
	inline float get_SpeedMultiplier_7() const { return ___SpeedMultiplier_7; }
	inline float* get_address_of_SpeedMultiplier_7() { return &___SpeedMultiplier_7; }
	inline void set_SpeedMultiplier_7(float value)
	{
		___SpeedMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_CurveScale_8() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___CurveScale_8)); }
	inline float get_CurveScale_8() const { return ___CurveScale_8; }
	inline float* get_address_of_CurveScale_8() { return &___CurveScale_8; }
	inline void set_CurveScale_8(float value)
	{
		___CurveScale_8 = value;
	}
};


// ARLocation.WorldBuilder
struct WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ARLocation.PrefabDatabase ARLocation.WorldBuilder::PrefabDatabase
	PrefabDatabase_tA214EAA0B86FA31ADBF8614F56217CF7BC2E5714 * ___PrefabDatabase_4;
	// System.String ARLocation.WorldBuilder::Id
	String_t* ___Id_5;
	// System.Boolean ARLocation.WorldBuilder::UseLocalStorage
	bool ___UseLocalStorage_6;
	// ARLocation.WorldBuilder/State ARLocation.WorldBuilder::state
	State_t8FC0BEE8CEDB6C1DF7E87CF64BA88F14F775CA95 * ___state_7;
	// System.Boolean ARLocation.WorldBuilder::initialized
	bool ___initialized_8;

public:
	inline static int32_t get_offset_of_PrefabDatabase_4() { return static_cast<int32_t>(offsetof(WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77, ___PrefabDatabase_4)); }
	inline PrefabDatabase_tA214EAA0B86FA31ADBF8614F56217CF7BC2E5714 * get_PrefabDatabase_4() const { return ___PrefabDatabase_4; }
	inline PrefabDatabase_tA214EAA0B86FA31ADBF8614F56217CF7BC2E5714 ** get_address_of_PrefabDatabase_4() { return &___PrefabDatabase_4; }
	inline void set_PrefabDatabase_4(PrefabDatabase_tA214EAA0B86FA31ADBF8614F56217CF7BC2E5714 * value)
	{
		___PrefabDatabase_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabDatabase_4), (void*)value);
	}

	inline static int32_t get_offset_of_Id_5() { return static_cast<int32_t>(offsetof(WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77, ___Id_5)); }
	inline String_t* get_Id_5() const { return ___Id_5; }
	inline String_t** get_address_of_Id_5() { return &___Id_5; }
	inline void set_Id_5(String_t* value)
	{
		___Id_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Id_5), (void*)value);
	}

	inline static int32_t get_offset_of_UseLocalStorage_6() { return static_cast<int32_t>(offsetof(WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77, ___UseLocalStorage_6)); }
	inline bool get_UseLocalStorage_6() const { return ___UseLocalStorage_6; }
	inline bool* get_address_of_UseLocalStorage_6() { return &___UseLocalStorage_6; }
	inline void set_UseLocalStorage_6(bool value)
	{
		___UseLocalStorage_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77, ___state_7)); }
	inline State_t8FC0BEE8CEDB6C1DF7E87CF64BA88F14F775CA95 * get_state_7() const { return ___state_7; }
	inline State_t8FC0BEE8CEDB6C1DF7E87CF64BA88F14F775CA95 ** get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(State_t8FC0BEE8CEDB6C1DF7E87CF64BA88F14F775CA95 * value)
	{
		___state_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_7), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_8() { return static_cast<int32_t>(offsetof(WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77, ___initialized_8)); }
	inline bool get_initialized_8() const { return ___initialized_8; }
	inline bool* get_address_of_initialized_8() { return &___initialized_8; }
	inline void set_initialized_8(bool value)
	{
		___initialized_8 = value;
	}
};


// ARLocation.WorldBuilderApplicationController
struct WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ARLocation.WorldBuilderApplicationController/UiElementsSettings ARLocation.WorldBuilderApplicationController::UiElements
	UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C * ___UiElements_4;
	// ARLocation.WorldBuilderApplicationController/RaycastMarginSettings ARLocation.WorldBuilderApplicationController::RaycastMargins
	RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F * ___RaycastMargins_5;
	// ARLocation.WorldBuilderApplicationController/GeneralSettings ARLocation.WorldBuilderApplicationController::Settings
	GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF * ___Settings_6;
	// ARLocation.WorldBuilder ARLocation.WorldBuilderApplicationController::worldBuilder
	WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * ___worldBuilder_7;
	// ARLocation.PlaceAtLocation ARLocation.WorldBuilderApplicationController::selectedObject
	PlaceAtLocation_t8F470A16D7F7E3A37FEB114A3879DD5136EE24BF * ___selectedObject_8;
	// ARLocation.WorldBuilder/Entry ARLocation.WorldBuilderApplicationController::selectedObjectEntry
	Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB * ___selectedObjectEntry_9;
	// ARLocation.WorldBuilderApplicationController/State ARLocation.WorldBuilderApplicationController::state
	State_tD84D35898133E39AECF1070605DA06A912BA7DFE * ___state_10;

public:
	inline static int32_t get_offset_of_UiElements_4() { return static_cast<int32_t>(offsetof(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228, ___UiElements_4)); }
	inline UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C * get_UiElements_4() const { return ___UiElements_4; }
	inline UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C ** get_address_of_UiElements_4() { return &___UiElements_4; }
	inline void set_UiElements_4(UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C * value)
	{
		___UiElements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UiElements_4), (void*)value);
	}

	inline static int32_t get_offset_of_RaycastMargins_5() { return static_cast<int32_t>(offsetof(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228, ___RaycastMargins_5)); }
	inline RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F * get_RaycastMargins_5() const { return ___RaycastMargins_5; }
	inline RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F ** get_address_of_RaycastMargins_5() { return &___RaycastMargins_5; }
	inline void set_RaycastMargins_5(RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F * value)
	{
		___RaycastMargins_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaycastMargins_5), (void*)value);
	}

	inline static int32_t get_offset_of_Settings_6() { return static_cast<int32_t>(offsetof(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228, ___Settings_6)); }
	inline GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF * get_Settings_6() const { return ___Settings_6; }
	inline GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF ** get_address_of_Settings_6() { return &___Settings_6; }
	inline void set_Settings_6(GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF * value)
	{
		___Settings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_6), (void*)value);
	}

	inline static int32_t get_offset_of_worldBuilder_7() { return static_cast<int32_t>(offsetof(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228, ___worldBuilder_7)); }
	inline WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * get_worldBuilder_7() const { return ___worldBuilder_7; }
	inline WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 ** get_address_of_worldBuilder_7() { return &___worldBuilder_7; }
	inline void set_worldBuilder_7(WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * value)
	{
		___worldBuilder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldBuilder_7), (void*)value);
	}

	inline static int32_t get_offset_of_selectedObject_8() { return static_cast<int32_t>(offsetof(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228, ___selectedObject_8)); }
	inline PlaceAtLocation_t8F470A16D7F7E3A37FEB114A3879DD5136EE24BF * get_selectedObject_8() const { return ___selectedObject_8; }
	inline PlaceAtLocation_t8F470A16D7F7E3A37FEB114A3879DD5136EE24BF ** get_address_of_selectedObject_8() { return &___selectedObject_8; }
	inline void set_selectedObject_8(PlaceAtLocation_t8F470A16D7F7E3A37FEB114A3879DD5136EE24BF * value)
	{
		___selectedObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedObject_8), (void*)value);
	}

	inline static int32_t get_offset_of_selectedObjectEntry_9() { return static_cast<int32_t>(offsetof(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228, ___selectedObjectEntry_9)); }
	inline Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB * get_selectedObjectEntry_9() const { return ___selectedObjectEntry_9; }
	inline Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB ** get_address_of_selectedObjectEntry_9() { return &___selectedObjectEntry_9; }
	inline void set_selectedObjectEntry_9(Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB * value)
	{
		___selectedObjectEntry_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedObjectEntry_9), (void*)value);
	}

	inline static int32_t get_offset_of_state_10() { return static_cast<int32_t>(offsetof(WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228, ___state_10)); }
	inline State_tD84D35898133E39AECF1070605DA06A912BA7DFE * get_state_10() const { return ___state_10; }
	inline State_tD84D35898133E39AECF1070605DA06A912BA7DFE ** get_address_of_state_10() { return &___state_10; }
	inline void set_state_10(State_tD84D35898133E39AECF1070605DA06A912BA7DFE * value)
	{
		___state_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_10), (void*)value);
	}
};


// ARLocation.WorldVoxelController
struct WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ARLocation.PrefabDatabase ARLocation.WorldVoxelController::PrefabDatabase
	PrefabDatabase_tA214EAA0B86FA31ADBF8614F56217CF7BC2E5714 * ___PrefabDatabase_4;
	// ARLocation.WorldVoxelController/ElementsSettingsData ARLocation.WorldVoxelController::Elements
	ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896 * ___Elements_5;
	// ARLocation.WorldVoxelController/RaycastMarginSettings ARLocation.WorldVoxelController::RaycastMargins
	RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1 * ___RaycastMargins_6;
	// ARLocation.WorldVoxelController/SettingsData ARLocation.WorldVoxelController::Settings
	SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0 * ___Settings_7;
	// ARLocation.WorldVoxelController/World ARLocation.WorldVoxelController::world
	World_t131398ACB9EC339A34B2186311D06BF657FE6B2D * ___world_8;
	// ARLocation.WorldVoxelController/StateData ARLocation.WorldVoxelController::state
	StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B * ___state_9;

public:
	inline static int32_t get_offset_of_PrefabDatabase_4() { return static_cast<int32_t>(offsetof(WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504, ___PrefabDatabase_4)); }
	inline PrefabDatabase_tA214EAA0B86FA31ADBF8614F56217CF7BC2E5714 * get_PrefabDatabase_4() const { return ___PrefabDatabase_4; }
	inline PrefabDatabase_tA214EAA0B86FA31ADBF8614F56217CF7BC2E5714 ** get_address_of_PrefabDatabase_4() { return &___PrefabDatabase_4; }
	inline void set_PrefabDatabase_4(PrefabDatabase_tA214EAA0B86FA31ADBF8614F56217CF7BC2E5714 * value)
	{
		___PrefabDatabase_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabDatabase_4), (void*)value);
	}

	inline static int32_t get_offset_of_Elements_5() { return static_cast<int32_t>(offsetof(WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504, ___Elements_5)); }
	inline ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896 * get_Elements_5() const { return ___Elements_5; }
	inline ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896 ** get_address_of_Elements_5() { return &___Elements_5; }
	inline void set_Elements_5(ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896 * value)
	{
		___Elements_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Elements_5), (void*)value);
	}

	inline static int32_t get_offset_of_RaycastMargins_6() { return static_cast<int32_t>(offsetof(WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504, ___RaycastMargins_6)); }
	inline RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1 * get_RaycastMargins_6() const { return ___RaycastMargins_6; }
	inline RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1 ** get_address_of_RaycastMargins_6() { return &___RaycastMargins_6; }
	inline void set_RaycastMargins_6(RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1 * value)
	{
		___RaycastMargins_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaycastMargins_6), (void*)value);
	}

	inline static int32_t get_offset_of_Settings_7() { return static_cast<int32_t>(offsetof(WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504, ___Settings_7)); }
	inline SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0 * get_Settings_7() const { return ___Settings_7; }
	inline SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0 ** get_address_of_Settings_7() { return &___Settings_7; }
	inline void set_Settings_7(SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0 * value)
	{
		___Settings_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_7), (void*)value);
	}

	inline static int32_t get_offset_of_world_8() { return static_cast<int32_t>(offsetof(WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504, ___world_8)); }
	inline World_t131398ACB9EC339A34B2186311D06BF657FE6B2D * get_world_8() const { return ___world_8; }
	inline World_t131398ACB9EC339A34B2186311D06BF657FE6B2D ** get_address_of_world_8() { return &___world_8; }
	inline void set_world_8(World_t131398ACB9EC339A34B2186311D06BF657FE6B2D * value)
	{
		___world_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___world_8), (void*)value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504, ___state_9)); }
	inline StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B * get_state_9() const { return ___state_9; }
	inline StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B ** get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B * value)
	{
		___state_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_9), (void*)value);
	}
};


// ARLocation.ARLocationProvider
struct ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605  : public Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487
{
public:
	// ARLocation.LocationProviderOptions ARLocation.ARLocationProvider::LocationProviderSettings
	LocationProviderOptions_t89EC102FE8FE7276EC9DFED9C3D71040619CE601 * ___LocationProviderSettings_7;
	// ARLocation.LocationData ARLocation.ARLocationProvider::MockLocationData
	LocationData_t1E35051773A207EE9EA92BB2B9B0BEF35BBC927C * ___MockLocationData_8;
	// System.UInt32 ARLocation.ARLocationProvider::MaxWaitTime
	uint32_t ___MaxWaitTime_9;
	// System.UInt32 ARLocation.ARLocationProvider::StartUpDelay
	uint32_t ___StartUpDelay_10;
	// System.Boolean ARLocation.ARLocationProvider::DebugMode
	bool ___DebugMode_11;
	// ARLocation.ARLocationProvider/LocationEnabledUnityEvent ARLocation.ARLocationProvider::OnEnabled
	LocationEnabledUnityEvent_tFBC6C30E13557910F014359FCA50F26CDB4A4BB2 * ___OnEnabled_12;
	// ARLocation.ARLocationProvider/LocationUpdatedUnityEvent ARLocation.ARLocationProvider::OnLocationUpdated
	LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35 * ___OnLocationUpdated_13;
	// ARLocation.ARLocationProvider/LocationUpdatedUnityEvent ARLocation.ARLocationProvider::OnRawLocationUpdated
	LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35 * ___OnRawLocationUpdated_14;
	// ARLocation.ARLocationProvider/CompassUpdatedUnityEvent ARLocation.ARLocationProvider::OnCompassUpdated
	CompassUpdatedUnityEvent_t9BF63C4B9DB06427C72E64F634A29C54F43975EA * ___OnCompassUpdated_15;
	// ARLocation.ILocationProvider ARLocation.ARLocationProvider::<Provider>k__BackingField
	RuntimeObject* ___U3CProviderU3Ek__BackingField_16;
	// System.Int32 ARLocation.ARLocationProvider::measurementCount
	int32_t ___measurementCount_17;
	// System.Boolean ARLocation.ARLocationProvider::mute
	bool ___mute_18;
	// ARLocation.LocationUpdatedDelegate ARLocation.ARLocationProvider::OnLocationUpdatedDelegate
	LocationUpdatedDelegate_t0DD4FC098F6E9BD1EF9232AE4DE7F80FA7A07E6A * ___OnLocationUpdatedDelegate_19;
	// ARLocation.CompassUpdateDelegate ARLocation.ARLocationProvider::OnCompassUpdateDelegate
	CompassUpdateDelegate_t3C75D4A96686D2DE205A7B1B6A8D22A7F9E3788A * ___OnCompassUpdateDelegate_20;
	// System.Action ARLocation.ARLocationProvider::OnRestartDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRestartDelegate_21;

public:
	inline static int32_t get_offset_of_LocationProviderSettings_7() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___LocationProviderSettings_7)); }
	inline LocationProviderOptions_t89EC102FE8FE7276EC9DFED9C3D71040619CE601 * get_LocationProviderSettings_7() const { return ___LocationProviderSettings_7; }
	inline LocationProviderOptions_t89EC102FE8FE7276EC9DFED9C3D71040619CE601 ** get_address_of_LocationProviderSettings_7() { return &___LocationProviderSettings_7; }
	inline void set_LocationProviderSettings_7(LocationProviderOptions_t89EC102FE8FE7276EC9DFED9C3D71040619CE601 * value)
	{
		___LocationProviderSettings_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocationProviderSettings_7), (void*)value);
	}

	inline static int32_t get_offset_of_MockLocationData_8() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___MockLocationData_8)); }
	inline LocationData_t1E35051773A207EE9EA92BB2B9B0BEF35BBC927C * get_MockLocationData_8() const { return ___MockLocationData_8; }
	inline LocationData_t1E35051773A207EE9EA92BB2B9B0BEF35BBC927C ** get_address_of_MockLocationData_8() { return &___MockLocationData_8; }
	inline void set_MockLocationData_8(LocationData_t1E35051773A207EE9EA92BB2B9B0BEF35BBC927C * value)
	{
		___MockLocationData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MockLocationData_8), (void*)value);
	}

	inline static int32_t get_offset_of_MaxWaitTime_9() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___MaxWaitTime_9)); }
	inline uint32_t get_MaxWaitTime_9() const { return ___MaxWaitTime_9; }
	inline uint32_t* get_address_of_MaxWaitTime_9() { return &___MaxWaitTime_9; }
	inline void set_MaxWaitTime_9(uint32_t value)
	{
		___MaxWaitTime_9 = value;
	}

	inline static int32_t get_offset_of_StartUpDelay_10() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___StartUpDelay_10)); }
	inline uint32_t get_StartUpDelay_10() const { return ___StartUpDelay_10; }
	inline uint32_t* get_address_of_StartUpDelay_10() { return &___StartUpDelay_10; }
	inline void set_StartUpDelay_10(uint32_t value)
	{
		___StartUpDelay_10 = value;
	}

	inline static int32_t get_offset_of_DebugMode_11() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___DebugMode_11)); }
	inline bool get_DebugMode_11() const { return ___DebugMode_11; }
	inline bool* get_address_of_DebugMode_11() { return &___DebugMode_11; }
	inline void set_DebugMode_11(bool value)
	{
		___DebugMode_11 = value;
	}

	inline static int32_t get_offset_of_OnEnabled_12() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___OnEnabled_12)); }
	inline LocationEnabledUnityEvent_tFBC6C30E13557910F014359FCA50F26CDB4A4BB2 * get_OnEnabled_12() const { return ___OnEnabled_12; }
	inline LocationEnabledUnityEvent_tFBC6C30E13557910F014359FCA50F26CDB4A4BB2 ** get_address_of_OnEnabled_12() { return &___OnEnabled_12; }
	inline void set_OnEnabled_12(LocationEnabledUnityEvent_tFBC6C30E13557910F014359FCA50F26CDB4A4BB2 * value)
	{
		___OnEnabled_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEnabled_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnLocationUpdated_13() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___OnLocationUpdated_13)); }
	inline LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35 * get_OnLocationUpdated_13() const { return ___OnLocationUpdated_13; }
	inline LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35 ** get_address_of_OnLocationUpdated_13() { return &___OnLocationUpdated_13; }
	inline void set_OnLocationUpdated_13(LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35 * value)
	{
		___OnLocationUpdated_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLocationUpdated_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnRawLocationUpdated_14() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___OnRawLocationUpdated_14)); }
	inline LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35 * get_OnRawLocationUpdated_14() const { return ___OnRawLocationUpdated_14; }
	inline LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35 ** get_address_of_OnRawLocationUpdated_14() { return &___OnRawLocationUpdated_14; }
	inline void set_OnRawLocationUpdated_14(LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35 * value)
	{
		___OnRawLocationUpdated_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRawLocationUpdated_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnCompassUpdated_15() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___OnCompassUpdated_15)); }
	inline CompassUpdatedUnityEvent_t9BF63C4B9DB06427C72E64F634A29C54F43975EA * get_OnCompassUpdated_15() const { return ___OnCompassUpdated_15; }
	inline CompassUpdatedUnityEvent_t9BF63C4B9DB06427C72E64F634A29C54F43975EA ** get_address_of_OnCompassUpdated_15() { return &___OnCompassUpdated_15; }
	inline void set_OnCompassUpdated_15(CompassUpdatedUnityEvent_t9BF63C4B9DB06427C72E64F634A29C54F43975EA * value)
	{
		___OnCompassUpdated_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCompassUpdated_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProviderU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___U3CProviderU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CProviderU3Ek__BackingField_16() const { return ___U3CProviderU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CProviderU3Ek__BackingField_16() { return &___U3CProviderU3Ek__BackingField_16; }
	inline void set_U3CProviderU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CProviderU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProviderU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_measurementCount_17() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___measurementCount_17)); }
	inline int32_t get_measurementCount_17() const { return ___measurementCount_17; }
	inline int32_t* get_address_of_measurementCount_17() { return &___measurementCount_17; }
	inline void set_measurementCount_17(int32_t value)
	{
		___measurementCount_17 = value;
	}

	inline static int32_t get_offset_of_mute_18() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___mute_18)); }
	inline bool get_mute_18() const { return ___mute_18; }
	inline bool* get_address_of_mute_18() { return &___mute_18; }
	inline void set_mute_18(bool value)
	{
		___mute_18 = value;
	}

	inline static int32_t get_offset_of_OnLocationUpdatedDelegate_19() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___OnLocationUpdatedDelegate_19)); }
	inline LocationUpdatedDelegate_t0DD4FC098F6E9BD1EF9232AE4DE7F80FA7A07E6A * get_OnLocationUpdatedDelegate_19() const { return ___OnLocationUpdatedDelegate_19; }
	inline LocationUpdatedDelegate_t0DD4FC098F6E9BD1EF9232AE4DE7F80FA7A07E6A ** get_address_of_OnLocationUpdatedDelegate_19() { return &___OnLocationUpdatedDelegate_19; }
	inline void set_OnLocationUpdatedDelegate_19(LocationUpdatedDelegate_t0DD4FC098F6E9BD1EF9232AE4DE7F80FA7A07E6A * value)
	{
		___OnLocationUpdatedDelegate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLocationUpdatedDelegate_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnCompassUpdateDelegate_20() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___OnCompassUpdateDelegate_20)); }
	inline CompassUpdateDelegate_t3C75D4A96686D2DE205A7B1B6A8D22A7F9E3788A * get_OnCompassUpdateDelegate_20() const { return ___OnCompassUpdateDelegate_20; }
	inline CompassUpdateDelegate_t3C75D4A96686D2DE205A7B1B6A8D22A7F9E3788A ** get_address_of_OnCompassUpdateDelegate_20() { return &___OnCompassUpdateDelegate_20; }
	inline void set_OnCompassUpdateDelegate_20(CompassUpdateDelegate_t3C75D4A96686D2DE205A7B1B6A8D22A7F9E3788A * value)
	{
		___OnCompassUpdateDelegate_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCompassUpdateDelegate_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnRestartDelegate_21() { return static_cast<int32_t>(offsetof(ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605, ___OnRestartDelegate_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRestartDelegate_21() const { return ___OnRestartDelegate_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRestartDelegate_21() { return &___OnRestartDelegate_21; }
	inline void set_OnRestartDelegate_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRestartDelegate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRestartDelegate_21), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextBackingStringDirty_37)); }
	inline bool get_m_IsTextBackingStringDirty_37() const { return ___m_IsTextBackingStringDirty_37; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_37() { return &___m_IsTextBackingStringDirty_37; }
	inline void set_m_IsTextBackingStringDirty_37(bool value)
	{
		___m_IsTextBackingStringDirty_37 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_38)); }
	inline RuntimeObject* get_m_TextPreprocessor_38() const { return ___m_TextPreprocessor_38; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_38() { return &___m_TextPreprocessor_38; }
	inline void set_m_TextPreprocessor_38(RuntimeObject* value)
	{
		___m_TextPreprocessor_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_39)); }
	inline bool get_m_isRightToLeft_39() const { return ___m_isRightToLeft_39; }
	inline bool* get_address_of_m_isRightToLeft_39() { return &___m_isRightToLeft_39; }
	inline void set_m_isRightToLeft_39(bool value)
	{
		___m_isRightToLeft_39 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_40() const { return ___m_fontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_40() { return &___m_fontAsset_40; }
	inline void set_m_fontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_41)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_41() const { return ___m_currentFontAsset_41; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_41() { return &___m_currentFontAsset_41; }
	inline void set_m_currentFontAsset_41(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_42)); }
	inline bool get_m_isSDFShader_42() const { return ___m_isSDFShader_42; }
	inline bool* get_address_of_m_isSDFShader_42() { return &___m_isSDFShader_42; }
	inline void set_m_isSDFShader_42(bool value)
	{
		___m_isSDFShader_42 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_43() const { return ___m_sharedMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_43() { return &___m_sharedMaterial_43; }
	inline void set_m_sharedMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_44() const { return ___m_currentMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_44() { return &___m_currentMaterial_44; }
	inline void set_m_currentMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_48)); }
	inline int32_t get_m_currentMaterialIndex_48() const { return ___m_currentMaterialIndex_48; }
	inline int32_t* get_address_of_m_currentMaterialIndex_48() { return &___m_currentMaterialIndex_48; }
	inline void set_m_currentMaterialIndex_48(int32_t value)
	{
		___m_currentMaterialIndex_48 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_49)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_49() const { return ___m_fontSharedMaterials_49; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_49() { return &___m_fontSharedMaterials_49; }
	inline void set_m_fontSharedMaterials_49(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_50() const { return ___m_fontMaterial_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_50() { return &___m_fontMaterial_50; }
	inline void set_m_fontMaterial_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_51)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_51() const { return ___m_fontMaterials_51; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_51() { return &___m_fontMaterials_51; }
	inline void set_m_fontMaterials_51(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_52)); }
	inline bool get_m_isMaterialDirty_52() const { return ___m_isMaterialDirty_52; }
	inline bool* get_address_of_m_isMaterialDirty_52() { return &___m_isMaterialDirty_52; }
	inline void set_m_isMaterialDirty_52(bool value)
	{
		___m_isMaterialDirty_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_53)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_53() const { return ___m_fontColor32_53; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_53() { return &___m_fontColor32_53; }
	inline void set_m_fontColor32_53(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_54)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_54() const { return ___m_fontColor_54; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_54() { return &___m_fontColor_54; }
	inline void set_m_fontColor_54(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_54 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_56() const { return ___m_underlineColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_56() { return &___m_underlineColor_56; }
	inline void set_m_underlineColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_56 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_57)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_57() const { return ___m_strikethroughColor_57; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_57() { return &___m_strikethroughColor_57; }
	inline void set_m_strikethroughColor_57(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_57 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_58)); }
	inline bool get_m_enableVertexGradient_58() const { return ___m_enableVertexGradient_58; }
	inline bool* get_address_of_m_enableVertexGradient_58() { return &___m_enableVertexGradient_58; }
	inline void set_m_enableVertexGradient_58(bool value)
	{
		___m_enableVertexGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_59)); }
	inline int32_t get_m_colorMode_59() const { return ___m_colorMode_59; }
	inline int32_t* get_address_of_m_colorMode_59() { return &___m_colorMode_59; }
	inline void set_m_colorMode_59(int32_t value)
	{
		___m_colorMode_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_60)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_60() const { return ___m_fontColorGradient_60; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_60() { return &___m_fontColorGradient_60; }
	inline void set_m_fontColorGradient_60(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_60 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_61)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_61() const { return ___m_fontColorGradientPreset_61; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_61() { return &___m_fontColorGradientPreset_61; }
	inline void set_m_fontColorGradientPreset_61(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_62)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_62() const { return ___m_spriteAsset_62; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_62() { return &___m_spriteAsset_62; }
	inline void set_m_spriteAsset_62(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_63)); }
	inline bool get_m_tintAllSprites_63() const { return ___m_tintAllSprites_63; }
	inline bool* get_address_of_m_tintAllSprites_63() { return &___m_tintAllSprites_63; }
	inline void set_m_tintAllSprites_63(bool value)
	{
		___m_tintAllSprites_63 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_64)); }
	inline bool get_m_tintSprite_64() const { return ___m_tintSprite_64; }
	inline bool* get_address_of_m_tintSprite_64() { return &___m_tintSprite_64; }
	inline void set_m_tintSprite_64(bool value)
	{
		___m_tintSprite_64 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_65)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_65() const { return ___m_spriteColor_65; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_65() { return &___m_spriteColor_65; }
	inline void set_m_spriteColor_65(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_65 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_66)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_66() const { return ___m_StyleSheet_66; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_66() { return &___m_StyleSheet_66; }
	inline void set_m_StyleSheet_66(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_67)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_67() const { return ___m_TextStyle_67; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_67() { return &___m_TextStyle_67; }
	inline void set_m_TextStyle_67(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_68)); }
	inline int32_t get_m_TextStyleHashCode_68() const { return ___m_TextStyleHashCode_68; }
	inline int32_t* get_address_of_m_TextStyleHashCode_68() { return &___m_TextStyleHashCode_68; }
	inline void set_m_TextStyleHashCode_68(int32_t value)
	{
		___m_TextStyleHashCode_68 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_69)); }
	inline bool get_m_overrideHtmlColors_69() const { return ___m_overrideHtmlColors_69; }
	inline bool* get_address_of_m_overrideHtmlColors_69() { return &___m_overrideHtmlColors_69; }
	inline void set_m_overrideHtmlColors_69(bool value)
	{
		___m_overrideHtmlColors_69 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_70() const { return ___m_faceColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_70() { return &___m_faceColor_70; }
	inline void set_m_faceColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_71)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_71() const { return ___m_outlineColor_71; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_71() { return &___m_outlineColor_71; }
	inline void set_m_outlineColor_71(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_71 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_72)); }
	inline float get_m_outlineWidth_72() const { return ___m_outlineWidth_72; }
	inline float* get_address_of_m_outlineWidth_72() { return &___m_outlineWidth_72; }
	inline void set_m_outlineWidth_72(float value)
	{
		___m_outlineWidth_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_73)); }
	inline float get_m_fontSize_73() const { return ___m_fontSize_73; }
	inline float* get_address_of_m_fontSize_73() { return &___m_fontSize_73; }
	inline void set_m_fontSize_73(float value)
	{
		___m_fontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_74)); }
	inline float get_m_currentFontSize_74() const { return ___m_currentFontSize_74; }
	inline float* get_address_of_m_currentFontSize_74() { return &___m_currentFontSize_74; }
	inline void set_m_currentFontSize_74(float value)
	{
		___m_currentFontSize_74 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_75)); }
	inline float get_m_fontSizeBase_75() const { return ___m_fontSizeBase_75; }
	inline float* get_address_of_m_fontSizeBase_75() { return &___m_fontSizeBase_75; }
	inline void set_m_fontSizeBase_75(float value)
	{
		___m_fontSizeBase_75 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_76)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_76() const { return ___m_sizeStack_76; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_76() { return &___m_sizeStack_76; }
	inline void set_m_sizeStack_76(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_76 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_76))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_77)); }
	inline int32_t get_m_fontWeight_77() const { return ___m_fontWeight_77; }
	inline int32_t* get_address_of_m_fontWeight_77() { return &___m_fontWeight_77; }
	inline void set_m_fontWeight_77(int32_t value)
	{
		___m_fontWeight_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_78)); }
	inline int32_t get_m_FontWeightInternal_78() const { return ___m_FontWeightInternal_78; }
	inline int32_t* get_address_of_m_FontWeightInternal_78() { return &___m_FontWeightInternal_78; }
	inline void set_m_FontWeightInternal_78(int32_t value)
	{
		___m_FontWeightInternal_78 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_79)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_79() const { return ___m_FontWeightStack_79; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_79() { return &___m_FontWeightStack_79; }
	inline void set_m_FontWeightStack_79(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_79 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_79))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_80)); }
	inline bool get_m_enableAutoSizing_80() const { return ___m_enableAutoSizing_80; }
	inline bool* get_address_of_m_enableAutoSizing_80() { return &___m_enableAutoSizing_80; }
	inline void set_m_enableAutoSizing_80(bool value)
	{
		___m_enableAutoSizing_80 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_81)); }
	inline float get_m_maxFontSize_81() const { return ___m_maxFontSize_81; }
	inline float* get_address_of_m_maxFontSize_81() { return &___m_maxFontSize_81; }
	inline void set_m_maxFontSize_81(float value)
	{
		___m_maxFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_82)); }
	inline float get_m_minFontSize_82() const { return ___m_minFontSize_82; }
	inline float* get_address_of_m_minFontSize_82() { return &___m_minFontSize_82; }
	inline void set_m_minFontSize_82(float value)
	{
		___m_minFontSize_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_83)); }
	inline int32_t get_m_AutoSizeIterationCount_83() const { return ___m_AutoSizeIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_83() { return &___m_AutoSizeIterationCount_83; }
	inline void set_m_AutoSizeIterationCount_83(int32_t value)
	{
		___m_AutoSizeIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_84)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_84() const { return ___m_AutoSizeMaxIterationCount_84; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_84() { return &___m_AutoSizeMaxIterationCount_84; }
	inline void set_m_AutoSizeMaxIterationCount_84(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_84 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_85)); }
	inline bool get_m_IsAutoSizePointSizeSet_85() const { return ___m_IsAutoSizePointSizeSet_85; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_85() { return &___m_IsAutoSizePointSizeSet_85; }
	inline void set_m_IsAutoSizePointSizeSet_85(bool value)
	{
		___m_IsAutoSizePointSizeSet_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_86)); }
	inline float get_m_fontSizeMin_86() const { return ___m_fontSizeMin_86; }
	inline float* get_address_of_m_fontSizeMin_86() { return &___m_fontSizeMin_86; }
	inline void set_m_fontSizeMin_86(float value)
	{
		___m_fontSizeMin_86 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_87)); }
	inline float get_m_fontSizeMax_87() const { return ___m_fontSizeMax_87; }
	inline float* get_address_of_m_fontSizeMax_87() { return &___m_fontSizeMax_87; }
	inline void set_m_fontSizeMax_87(float value)
	{
		___m_fontSizeMax_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_88)); }
	inline int32_t get_m_fontStyle_88() const { return ___m_fontStyle_88; }
	inline int32_t* get_address_of_m_fontStyle_88() { return &___m_fontStyle_88; }
	inline void set_m_fontStyle_88(int32_t value)
	{
		___m_fontStyle_88 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_89)); }
	inline int32_t get_m_FontStyleInternal_89() const { return ___m_FontStyleInternal_89; }
	inline int32_t* get_address_of_m_FontStyleInternal_89() { return &___m_FontStyleInternal_89; }
	inline void set_m_FontStyleInternal_89(int32_t value)
	{
		___m_FontStyleInternal_89 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_90)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_90() const { return ___m_fontStyleStack_90; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_90() { return &___m_fontStyleStack_90; }
	inline void set_m_fontStyleStack_90(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_90 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_91)); }
	inline bool get_m_isUsingBold_91() const { return ___m_isUsingBold_91; }
	inline bool* get_address_of_m_isUsingBold_91() { return &___m_isUsingBold_91; }
	inline void set_m_isUsingBold_91(bool value)
	{
		___m_isUsingBold_91 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_92)); }
	inline int32_t get_m_HorizontalAlignment_92() const { return ___m_HorizontalAlignment_92; }
	inline int32_t* get_address_of_m_HorizontalAlignment_92() { return &___m_HorizontalAlignment_92; }
	inline void set_m_HorizontalAlignment_92(int32_t value)
	{
		___m_HorizontalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_93)); }
	inline int32_t get_m_VerticalAlignment_93() const { return ___m_VerticalAlignment_93; }
	inline int32_t* get_address_of_m_VerticalAlignment_93() { return &___m_VerticalAlignment_93; }
	inline void set_m_VerticalAlignment_93(int32_t value)
	{
		___m_VerticalAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_94)); }
	inline int32_t get_m_textAlignment_94() const { return ___m_textAlignment_94; }
	inline int32_t* get_address_of_m_textAlignment_94() { return &___m_textAlignment_94; }
	inline void set_m_textAlignment_94(int32_t value)
	{
		___m_textAlignment_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_95)); }
	inline int32_t get_m_lineJustification_95() const { return ___m_lineJustification_95; }
	inline int32_t* get_address_of_m_lineJustification_95() { return &___m_lineJustification_95; }
	inline void set_m_lineJustification_95(int32_t value)
	{
		___m_lineJustification_95 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_96)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_96() const { return ___m_lineJustificationStack_96; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_96() { return &___m_lineJustificationStack_96; }
	inline void set_m_lineJustificationStack_96(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_96 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_96))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_97)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_97() const { return ___m_textContainerLocalCorners_97; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_97() { return &___m_textContainerLocalCorners_97; }
	inline void set_m_textContainerLocalCorners_97(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_97), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_98)); }
	inline float get_m_characterSpacing_98() const { return ___m_characterSpacing_98; }
	inline float* get_address_of_m_characterSpacing_98() { return &___m_characterSpacing_98; }
	inline void set_m_characterSpacing_98(float value)
	{
		___m_characterSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_99)); }
	inline float get_m_cSpacing_99() const { return ___m_cSpacing_99; }
	inline float* get_address_of_m_cSpacing_99() { return &___m_cSpacing_99; }
	inline void set_m_cSpacing_99(float value)
	{
		___m_cSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_100)); }
	inline float get_m_monoSpacing_100() const { return ___m_monoSpacing_100; }
	inline float* get_address_of_m_monoSpacing_100() { return &___m_monoSpacing_100; }
	inline void set_m_monoSpacing_100(float value)
	{
		___m_monoSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_101)); }
	inline float get_m_wordSpacing_101() const { return ___m_wordSpacing_101; }
	inline float* get_address_of_m_wordSpacing_101() { return &___m_wordSpacing_101; }
	inline void set_m_wordSpacing_101(float value)
	{
		___m_wordSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_102)); }
	inline float get_m_lineSpacing_102() const { return ___m_lineSpacing_102; }
	inline float* get_address_of_m_lineSpacing_102() { return &___m_lineSpacing_102; }
	inline void set_m_lineSpacing_102(float value)
	{
		___m_lineSpacing_102 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_103)); }
	inline float get_m_lineSpacingDelta_103() const { return ___m_lineSpacingDelta_103; }
	inline float* get_address_of_m_lineSpacingDelta_103() { return &___m_lineSpacingDelta_103; }
	inline void set_m_lineSpacingDelta_103(float value)
	{
		___m_lineSpacingDelta_103 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_104)); }
	inline float get_m_lineHeight_104() const { return ___m_lineHeight_104; }
	inline float* get_address_of_m_lineHeight_104() { return &___m_lineHeight_104; }
	inline void set_m_lineHeight_104(float value)
	{
		___m_lineHeight_104 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_105)); }
	inline bool get_m_IsDrivenLineSpacing_105() const { return ___m_IsDrivenLineSpacing_105; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_105() { return &___m_IsDrivenLineSpacing_105; }
	inline void set_m_IsDrivenLineSpacing_105(bool value)
	{
		___m_IsDrivenLineSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_106)); }
	inline float get_m_lineSpacingMax_106() const { return ___m_lineSpacingMax_106; }
	inline float* get_address_of_m_lineSpacingMax_106() { return &___m_lineSpacingMax_106; }
	inline void set_m_lineSpacingMax_106(float value)
	{
		___m_lineSpacingMax_106 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_107)); }
	inline float get_m_paragraphSpacing_107() const { return ___m_paragraphSpacing_107; }
	inline float* get_address_of_m_paragraphSpacing_107() { return &___m_paragraphSpacing_107; }
	inline void set_m_paragraphSpacing_107(float value)
	{
		___m_paragraphSpacing_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_108)); }
	inline float get_m_charWidthMaxAdj_108() const { return ___m_charWidthMaxAdj_108; }
	inline float* get_address_of_m_charWidthMaxAdj_108() { return &___m_charWidthMaxAdj_108; }
	inline void set_m_charWidthMaxAdj_108(float value)
	{
		___m_charWidthMaxAdj_108 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_109)); }
	inline float get_m_charWidthAdjDelta_109() const { return ___m_charWidthAdjDelta_109; }
	inline float* get_address_of_m_charWidthAdjDelta_109() { return &___m_charWidthAdjDelta_109; }
	inline void set_m_charWidthAdjDelta_109(float value)
	{
		___m_charWidthAdjDelta_109 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_110)); }
	inline bool get_m_enableWordWrapping_110() const { return ___m_enableWordWrapping_110; }
	inline bool* get_address_of_m_enableWordWrapping_110() { return &___m_enableWordWrapping_110; }
	inline void set_m_enableWordWrapping_110(bool value)
	{
		___m_enableWordWrapping_110 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_111)); }
	inline bool get_m_isCharacterWrappingEnabled_111() const { return ___m_isCharacterWrappingEnabled_111; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_111() { return &___m_isCharacterWrappingEnabled_111; }
	inline void set_m_isCharacterWrappingEnabled_111(bool value)
	{
		___m_isCharacterWrappingEnabled_111 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_112)); }
	inline bool get_m_isNonBreakingSpace_112() const { return ___m_isNonBreakingSpace_112; }
	inline bool* get_address_of_m_isNonBreakingSpace_112() { return &___m_isNonBreakingSpace_112; }
	inline void set_m_isNonBreakingSpace_112(bool value)
	{
		___m_isNonBreakingSpace_112 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_113)); }
	inline bool get_m_isIgnoringAlignment_113() const { return ___m_isIgnoringAlignment_113; }
	inline bool* get_address_of_m_isIgnoringAlignment_113() { return &___m_isIgnoringAlignment_113; }
	inline void set_m_isIgnoringAlignment_113(bool value)
	{
		___m_isIgnoringAlignment_113 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_114)); }
	inline float get_m_wordWrappingRatios_114() const { return ___m_wordWrappingRatios_114; }
	inline float* get_address_of_m_wordWrappingRatios_114() { return &___m_wordWrappingRatios_114; }
	inline void set_m_wordWrappingRatios_114(float value)
	{
		___m_wordWrappingRatios_114 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_115)); }
	inline int32_t get_m_overflowMode_115() const { return ___m_overflowMode_115; }
	inline int32_t* get_address_of_m_overflowMode_115() { return &___m_overflowMode_115; }
	inline void set_m_overflowMode_115(int32_t value)
	{
		___m_overflowMode_115 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_116)); }
	inline int32_t get_m_firstOverflowCharacterIndex_116() const { return ___m_firstOverflowCharacterIndex_116; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_116() { return &___m_firstOverflowCharacterIndex_116; }
	inline void set_m_firstOverflowCharacterIndex_116(int32_t value)
	{
		___m_firstOverflowCharacterIndex_116 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_117() const { return ___m_linkedTextComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_117() { return &___m_linkedTextComponent_117; }
	inline void set_m_linkedTextComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_118)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_118() const { return ___parentLinkedComponent_118; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_118() { return &___parentLinkedComponent_118; }
	inline void set_parentLinkedComponent_118(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_118), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_119)); }
	inline bool get_m_isTextTruncated_119() const { return ___m_isTextTruncated_119; }
	inline bool* get_address_of_m_isTextTruncated_119() { return &___m_isTextTruncated_119; }
	inline void set_m_isTextTruncated_119(bool value)
	{
		___m_isTextTruncated_119 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_120)); }
	inline bool get_m_enableKerning_120() const { return ___m_enableKerning_120; }
	inline bool* get_address_of_m_enableKerning_120() { return &___m_enableKerning_120; }
	inline void set_m_enableKerning_120(bool value)
	{
		___m_enableKerning_120 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_121)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_121() const { return ___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_121() { return &___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_121(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_121 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_122)); }
	inline bool get_m_enableExtraPadding_122() const { return ___m_enableExtraPadding_122; }
	inline bool* get_address_of_m_enableExtraPadding_122() { return &___m_enableExtraPadding_122; }
	inline void set_m_enableExtraPadding_122(bool value)
	{
		___m_enableExtraPadding_122 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_123)); }
	inline bool get_checkPaddingRequired_123() const { return ___checkPaddingRequired_123; }
	inline bool* get_address_of_checkPaddingRequired_123() { return &___checkPaddingRequired_123; }
	inline void set_checkPaddingRequired_123(bool value)
	{
		___checkPaddingRequired_123 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_124)); }
	inline bool get_m_isRichText_124() const { return ___m_isRichText_124; }
	inline bool* get_address_of_m_isRichText_124() { return &___m_isRichText_124; }
	inline void set_m_isRichText_124(bool value)
	{
		___m_isRichText_124 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_125)); }
	inline bool get_m_parseCtrlCharacters_125() const { return ___m_parseCtrlCharacters_125; }
	inline bool* get_address_of_m_parseCtrlCharacters_125() { return &___m_parseCtrlCharacters_125; }
	inline void set_m_parseCtrlCharacters_125(bool value)
	{
		___m_parseCtrlCharacters_125 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_126)); }
	inline bool get_m_isOverlay_126() const { return ___m_isOverlay_126; }
	inline bool* get_address_of_m_isOverlay_126() { return &___m_isOverlay_126; }
	inline void set_m_isOverlay_126(bool value)
	{
		___m_isOverlay_126 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_127)); }
	inline bool get_m_isOrthographic_127() const { return ___m_isOrthographic_127; }
	inline bool* get_address_of_m_isOrthographic_127() { return &___m_isOrthographic_127; }
	inline void set_m_isOrthographic_127(bool value)
	{
		___m_isOrthographic_127 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_128)); }
	inline bool get_m_isCullingEnabled_128() const { return ___m_isCullingEnabled_128; }
	inline bool* get_address_of_m_isCullingEnabled_128() { return &___m_isCullingEnabled_128; }
	inline void set_m_isCullingEnabled_128(bool value)
	{
		___m_isCullingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_129)); }
	inline bool get_m_isMaskingEnabled_129() const { return ___m_isMaskingEnabled_129; }
	inline bool* get_address_of_m_isMaskingEnabled_129() { return &___m_isMaskingEnabled_129; }
	inline void set_m_isMaskingEnabled_129(bool value)
	{
		___m_isMaskingEnabled_129 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_130)); }
	inline bool get_isMaskUpdateRequired_130() const { return ___isMaskUpdateRequired_130; }
	inline bool* get_address_of_isMaskUpdateRequired_130() { return &___isMaskUpdateRequired_130; }
	inline void set_isMaskUpdateRequired_130(bool value)
	{
		___isMaskUpdateRequired_130 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_131)); }
	inline bool get_m_ignoreCulling_131() const { return ___m_ignoreCulling_131; }
	inline bool* get_address_of_m_ignoreCulling_131() { return &___m_ignoreCulling_131; }
	inline void set_m_ignoreCulling_131(bool value)
	{
		___m_ignoreCulling_131 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_132)); }
	inline int32_t get_m_horizontalMapping_132() const { return ___m_horizontalMapping_132; }
	inline int32_t* get_address_of_m_horizontalMapping_132() { return &___m_horizontalMapping_132; }
	inline void set_m_horizontalMapping_132(int32_t value)
	{
		___m_horizontalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_133)); }
	inline int32_t get_m_verticalMapping_133() const { return ___m_verticalMapping_133; }
	inline int32_t* get_address_of_m_verticalMapping_133() { return &___m_verticalMapping_133; }
	inline void set_m_verticalMapping_133(int32_t value)
	{
		___m_verticalMapping_133 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_134)); }
	inline float get_m_uvLineOffset_134() const { return ___m_uvLineOffset_134; }
	inline float* get_address_of_m_uvLineOffset_134() { return &___m_uvLineOffset_134; }
	inline void set_m_uvLineOffset_134(float value)
	{
		___m_uvLineOffset_134 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_135)); }
	inline int32_t get_m_renderMode_135() const { return ___m_renderMode_135; }
	inline int32_t* get_address_of_m_renderMode_135() { return &___m_renderMode_135; }
	inline void set_m_renderMode_135(int32_t value)
	{
		___m_renderMode_135 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_136)); }
	inline int32_t get_m_geometrySortingOrder_136() const { return ___m_geometrySortingOrder_136; }
	inline int32_t* get_address_of_m_geometrySortingOrder_136() { return &___m_geometrySortingOrder_136; }
	inline void set_m_geometrySortingOrder_136(int32_t value)
	{
		___m_geometrySortingOrder_136 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_137)); }
	inline bool get_m_IsTextObjectScaleStatic_137() const { return ___m_IsTextObjectScaleStatic_137; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_137() { return &___m_IsTextObjectScaleStatic_137; }
	inline void set_m_IsTextObjectScaleStatic_137(bool value)
	{
		___m_IsTextObjectScaleStatic_137 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_138)); }
	inline bool get_m_VertexBufferAutoSizeReduction_138() const { return ___m_VertexBufferAutoSizeReduction_138; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_138() { return &___m_VertexBufferAutoSizeReduction_138; }
	inline void set_m_VertexBufferAutoSizeReduction_138(bool value)
	{
		___m_VertexBufferAutoSizeReduction_138 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_139)); }
	inline int32_t get_m_firstVisibleCharacter_139() const { return ___m_firstVisibleCharacter_139; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_139() { return &___m_firstVisibleCharacter_139; }
	inline void set_m_firstVisibleCharacter_139(int32_t value)
	{
		___m_firstVisibleCharacter_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_140)); }
	inline int32_t get_m_maxVisibleCharacters_140() const { return ___m_maxVisibleCharacters_140; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_140() { return &___m_maxVisibleCharacters_140; }
	inline void set_m_maxVisibleCharacters_140(int32_t value)
	{
		___m_maxVisibleCharacters_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_141)); }
	inline int32_t get_m_maxVisibleWords_141() const { return ___m_maxVisibleWords_141; }
	inline int32_t* get_address_of_m_maxVisibleWords_141() { return &___m_maxVisibleWords_141; }
	inline void set_m_maxVisibleWords_141(int32_t value)
	{
		___m_maxVisibleWords_141 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_142)); }
	inline int32_t get_m_maxVisibleLines_142() const { return ___m_maxVisibleLines_142; }
	inline int32_t* get_address_of_m_maxVisibleLines_142() { return &___m_maxVisibleLines_142; }
	inline void set_m_maxVisibleLines_142(int32_t value)
	{
		___m_maxVisibleLines_142 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_143)); }
	inline bool get_m_useMaxVisibleDescender_143() const { return ___m_useMaxVisibleDescender_143; }
	inline bool* get_address_of_m_useMaxVisibleDescender_143() { return &___m_useMaxVisibleDescender_143; }
	inline void set_m_useMaxVisibleDescender_143(bool value)
	{
		___m_useMaxVisibleDescender_143 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_144)); }
	inline int32_t get_m_pageToDisplay_144() const { return ___m_pageToDisplay_144; }
	inline int32_t* get_address_of_m_pageToDisplay_144() { return &___m_pageToDisplay_144; }
	inline void set_m_pageToDisplay_144(int32_t value)
	{
		___m_pageToDisplay_144 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_145)); }
	inline bool get_m_isNewPage_145() const { return ___m_isNewPage_145; }
	inline bool* get_address_of_m_isNewPage_145() { return &___m_isNewPage_145; }
	inline void set_m_isNewPage_145(bool value)
	{
		___m_isNewPage_145 = value;
	}

	inline static int32_t get_offset_of_m_margin_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_146)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_146() const { return ___m_margin_146; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_146() { return &___m_margin_146; }
	inline void set_m_margin_146(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_146 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_147)); }
	inline float get_m_marginLeft_147() const { return ___m_marginLeft_147; }
	inline float* get_address_of_m_marginLeft_147() { return &___m_marginLeft_147; }
	inline void set_m_marginLeft_147(float value)
	{
		___m_marginLeft_147 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_148)); }
	inline float get_m_marginRight_148() const { return ___m_marginRight_148; }
	inline float* get_address_of_m_marginRight_148() { return &___m_marginRight_148; }
	inline void set_m_marginRight_148(float value)
	{
		___m_marginRight_148 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_149)); }
	inline float get_m_marginWidth_149() const { return ___m_marginWidth_149; }
	inline float* get_address_of_m_marginWidth_149() { return &___m_marginWidth_149; }
	inline void set_m_marginWidth_149(float value)
	{
		___m_marginWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_150)); }
	inline float get_m_marginHeight_150() const { return ___m_marginHeight_150; }
	inline float* get_address_of_m_marginHeight_150() { return &___m_marginHeight_150; }
	inline void set_m_marginHeight_150(float value)
	{
		___m_marginHeight_150 = value;
	}

	inline static int32_t get_offset_of_m_width_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_151)); }
	inline float get_m_width_151() const { return ___m_width_151; }
	inline float* get_address_of_m_width_151() { return &___m_width_151; }
	inline void set_m_width_151(float value)
	{
		___m_width_151 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_152)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_152() const { return ___m_textInfo_152; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_152() { return &___m_textInfo_152; }
	inline void set_m_textInfo_152(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_152), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_153)); }
	inline bool get_m_havePropertiesChanged_153() const { return ___m_havePropertiesChanged_153; }
	inline bool* get_address_of_m_havePropertiesChanged_153() { return &___m_havePropertiesChanged_153; }
	inline void set_m_havePropertiesChanged_153(bool value)
	{
		___m_havePropertiesChanged_153 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_154)); }
	inline bool get_m_isUsingLegacyAnimationComponent_154() const { return ___m_isUsingLegacyAnimationComponent_154; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_154() { return &___m_isUsingLegacyAnimationComponent_154; }
	inline void set_m_isUsingLegacyAnimationComponent_154(bool value)
	{
		___m_isUsingLegacyAnimationComponent_154 = value;
	}

	inline static int32_t get_offset_of_m_transform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_155)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_155() const { return ___m_transform_155; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_155() { return &___m_transform_155; }
	inline void set_m_transform_155(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_156)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_156() const { return ___m_rectTransform_156; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_156() { return &___m_rectTransform_156; }
	inline void set_m_rectTransform_156(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_156), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_157() const { return ___m_PreviousRectTransformSize_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_157() { return &___m_PreviousRectTransformSize_157; }
	inline void set_m_PreviousRectTransformSize_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_157 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_158)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_158() const { return ___m_PreviousPivotPosition_158; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_158() { return &___m_PreviousPivotPosition_158; }
	inline void set_m_PreviousPivotPosition_158(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_158 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_159)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_159() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return &___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_159(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_159 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_160)); }
	inline bool get_m_autoSizeTextContainer_160() const { return ___m_autoSizeTextContainer_160; }
	inline bool* get_address_of_m_autoSizeTextContainer_160() { return &___m_autoSizeTextContainer_160; }
	inline void set_m_autoSizeTextContainer_160(bool value)
	{
		___m_autoSizeTextContainer_160 = value;
	}

	inline static int32_t get_offset_of_m_mesh_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_161)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_161() const { return ___m_mesh_161; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_161() { return &___m_mesh_161; }
	inline void set_m_mesh_161(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_161), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_162)); }
	inline bool get_m_isVolumetricText_162() const { return ___m_isVolumetricText_162; }
	inline bool* get_address_of_m_isVolumetricText_162() { return &___m_isVolumetricText_162; }
	inline void set_m_isVolumetricText_162(bool value)
	{
		___m_isVolumetricText_162 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_165)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_165() const { return ___OnPreRenderText_165; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_165() { return &___OnPreRenderText_165; }
	inline void set_OnPreRenderText_165(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_166)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_166() const { return ___m_spriteAnimator_166; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_166() { return &___m_spriteAnimator_166; }
	inline void set_m_spriteAnimator_166(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_166 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_166), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_167)); }
	inline float get_m_flexibleHeight_167() const { return ___m_flexibleHeight_167; }
	inline float* get_address_of_m_flexibleHeight_167() { return &___m_flexibleHeight_167; }
	inline void set_m_flexibleHeight_167(float value)
	{
		___m_flexibleHeight_167 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_168)); }
	inline float get_m_flexibleWidth_168() const { return ___m_flexibleWidth_168; }
	inline float* get_address_of_m_flexibleWidth_168() { return &___m_flexibleWidth_168; }
	inline void set_m_flexibleWidth_168(float value)
	{
		___m_flexibleWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_169)); }
	inline float get_m_minWidth_169() const { return ___m_minWidth_169; }
	inline float* get_address_of_m_minWidth_169() { return &___m_minWidth_169; }
	inline void set_m_minWidth_169(float value)
	{
		___m_minWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_170)); }
	inline float get_m_minHeight_170() const { return ___m_minHeight_170; }
	inline float* get_address_of_m_minHeight_170() { return &___m_minHeight_170; }
	inline void set_m_minHeight_170(float value)
	{
		___m_minHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_171)); }
	inline float get_m_maxWidth_171() const { return ___m_maxWidth_171; }
	inline float* get_address_of_m_maxWidth_171() { return &___m_maxWidth_171; }
	inline void set_m_maxWidth_171(float value)
	{
		___m_maxWidth_171 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_172)); }
	inline float get_m_maxHeight_172() const { return ___m_maxHeight_172; }
	inline float* get_address_of_m_maxHeight_172() { return &___m_maxHeight_172; }
	inline void set_m_maxHeight_172(float value)
	{
		___m_maxHeight_172 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_173)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_173() const { return ___m_LayoutElement_173; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_173() { return &___m_LayoutElement_173; }
	inline void set_m_LayoutElement_173(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_173 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_173), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_174)); }
	inline float get_m_preferredWidth_174() const { return ___m_preferredWidth_174; }
	inline float* get_address_of_m_preferredWidth_174() { return &___m_preferredWidth_174; }
	inline void set_m_preferredWidth_174(float value)
	{
		___m_preferredWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_175)); }
	inline float get_m_renderedWidth_175() const { return ___m_renderedWidth_175; }
	inline float* get_address_of_m_renderedWidth_175() { return &___m_renderedWidth_175; }
	inline void set_m_renderedWidth_175(float value)
	{
		___m_renderedWidth_175 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_176)); }
	inline bool get_m_isPreferredWidthDirty_176() const { return ___m_isPreferredWidthDirty_176; }
	inline bool* get_address_of_m_isPreferredWidthDirty_176() { return &___m_isPreferredWidthDirty_176; }
	inline void set_m_isPreferredWidthDirty_176(bool value)
	{
		___m_isPreferredWidthDirty_176 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_177)); }
	inline float get_m_preferredHeight_177() const { return ___m_preferredHeight_177; }
	inline float* get_address_of_m_preferredHeight_177() { return &___m_preferredHeight_177; }
	inline void set_m_preferredHeight_177(float value)
	{
		___m_preferredHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_178)); }
	inline float get_m_renderedHeight_178() const { return ___m_renderedHeight_178; }
	inline float* get_address_of_m_renderedHeight_178() { return &___m_renderedHeight_178; }
	inline void set_m_renderedHeight_178(float value)
	{
		___m_renderedHeight_178 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_179)); }
	inline bool get_m_isPreferredHeightDirty_179() const { return ___m_isPreferredHeightDirty_179; }
	inline bool* get_address_of_m_isPreferredHeightDirty_179() { return &___m_isPreferredHeightDirty_179; }
	inline void set_m_isPreferredHeightDirty_179(bool value)
	{
		___m_isPreferredHeightDirty_179 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_180)); }
	inline bool get_m_isCalculatingPreferredValues_180() const { return ___m_isCalculatingPreferredValues_180; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_180() { return &___m_isCalculatingPreferredValues_180; }
	inline void set_m_isCalculatingPreferredValues_180(bool value)
	{
		___m_isCalculatingPreferredValues_180 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_181)); }
	inline int32_t get_m_layoutPriority_181() const { return ___m_layoutPriority_181; }
	inline int32_t* get_address_of_m_layoutPriority_181() { return &___m_layoutPriority_181; }
	inline void set_m_layoutPriority_181(int32_t value)
	{
		___m_layoutPriority_181 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_182)); }
	inline bool get_m_isLayoutDirty_182() const { return ___m_isLayoutDirty_182; }
	inline bool* get_address_of_m_isLayoutDirty_182() { return &___m_isLayoutDirty_182; }
	inline void set_m_isLayoutDirty_182(bool value)
	{
		___m_isLayoutDirty_182 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_183)); }
	inline bool get_m_isAwake_183() const { return ___m_isAwake_183; }
	inline bool* get_address_of_m_isAwake_183() { return &___m_isAwake_183; }
	inline void set_m_isAwake_183(bool value)
	{
		___m_isAwake_183 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_184)); }
	inline bool get_m_isWaitingOnResourceLoad_184() const { return ___m_isWaitingOnResourceLoad_184; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_184() { return &___m_isWaitingOnResourceLoad_184; }
	inline void set_m_isWaitingOnResourceLoad_184(bool value)
	{
		___m_isWaitingOnResourceLoad_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_186)); }
	inline float get_m_fontScaleMultiplier_186() const { return ___m_fontScaleMultiplier_186; }
	inline float* get_address_of_m_fontScaleMultiplier_186() { return &___m_fontScaleMultiplier_186; }
	inline void set_m_fontScaleMultiplier_186(float value)
	{
		___m_fontScaleMultiplier_186 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_190)); }
	inline float get_tag_LineIndent_190() const { return ___tag_LineIndent_190; }
	inline float* get_address_of_tag_LineIndent_190() { return &___tag_LineIndent_190; }
	inline void set_tag_LineIndent_190(float value)
	{
		___tag_LineIndent_190 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_191)); }
	inline float get_tag_Indent_191() const { return ___tag_Indent_191; }
	inline float* get_address_of_tag_Indent_191() { return &___tag_Indent_191; }
	inline void set_tag_Indent_191(float value)
	{
		___tag_Indent_191 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_192)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_192() const { return ___m_indentStack_192; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_192() { return &___m_indentStack_192; }
	inline void set_m_indentStack_192(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_192))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_193)); }
	inline bool get_tag_NoParsing_193() const { return ___tag_NoParsing_193; }
	inline bool* get_address_of_tag_NoParsing_193() { return &___tag_NoParsing_193; }
	inline void set_tag_NoParsing_193(bool value)
	{
		___tag_NoParsing_193 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_194)); }
	inline bool get_m_isParsingText_194() const { return ___m_isParsingText_194; }
	inline bool* get_address_of_m_isParsingText_194() { return &___m_isParsingText_194; }
	inline void set_m_isParsingText_194(bool value)
	{
		___m_isParsingText_194 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_195)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_195() const { return ___m_FXMatrix_195; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_195() { return &___m_FXMatrix_195; }
	inline void set_m_FXMatrix_195(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_195 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_196)); }
	inline bool get_m_isFXMatrixSet_196() const { return ___m_isFXMatrixSet_196; }
	inline bool* get_address_of_m_isFXMatrixSet_196() { return &___m_isFXMatrixSet_196; }
	inline void set_m_isFXMatrixSet_196(bool value)
	{
		___m_isFXMatrixSet_196 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextProcessingArray_197)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextProcessingArray_197() const { return ___m_TextProcessingArray_197; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextProcessingArray_197() { return &___m_TextProcessingArray_197; }
	inline void set_m_TextProcessingArray_197(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextProcessingArray_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalTextProcessingArraySize_198)); }
	inline int32_t get_m_InternalTextProcessingArraySize_198() const { return ___m_InternalTextProcessingArraySize_198; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_198() { return &___m_InternalTextProcessingArraySize_198; }
	inline void set_m_InternalTextProcessingArraySize_198(int32_t value)
	{
		___m_InternalTextProcessingArraySize_198 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_199)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_199() const { return ___m_internalCharacterInfo_199; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_199() { return &___m_internalCharacterInfo_199; }
	inline void set_m_internalCharacterInfo_199(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_200)); }
	inline int32_t get_m_totalCharacterCount_200() const { return ___m_totalCharacterCount_200; }
	inline int32_t* get_address_of_m_totalCharacterCount_200() { return &___m_totalCharacterCount_200; }
	inline void set_m_totalCharacterCount_200(int32_t value)
	{
		___m_totalCharacterCount_200 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_207)); }
	inline int32_t get_m_characterCount_207() const { return ___m_characterCount_207; }
	inline int32_t* get_address_of_m_characterCount_207() { return &___m_characterCount_207; }
	inline void set_m_characterCount_207(int32_t value)
	{
		___m_characterCount_207 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_208)); }
	inline int32_t get_m_firstCharacterOfLine_208() const { return ___m_firstCharacterOfLine_208; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_208() { return &___m_firstCharacterOfLine_208; }
	inline void set_m_firstCharacterOfLine_208(int32_t value)
	{
		___m_firstCharacterOfLine_208 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_209)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_209() const { return ___m_firstVisibleCharacterOfLine_209; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_209() { return &___m_firstVisibleCharacterOfLine_209; }
	inline void set_m_firstVisibleCharacterOfLine_209(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_210)); }
	inline int32_t get_m_lastCharacterOfLine_210() const { return ___m_lastCharacterOfLine_210; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_210() { return &___m_lastCharacterOfLine_210; }
	inline void set_m_lastCharacterOfLine_210(int32_t value)
	{
		___m_lastCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_211)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_211() const { return ___m_lastVisibleCharacterOfLine_211; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_211() { return &___m_lastVisibleCharacterOfLine_211; }
	inline void set_m_lastVisibleCharacterOfLine_211(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_212)); }
	inline int32_t get_m_lineNumber_212() const { return ___m_lineNumber_212; }
	inline int32_t* get_address_of_m_lineNumber_212() { return &___m_lineNumber_212; }
	inline void set_m_lineNumber_212(int32_t value)
	{
		___m_lineNumber_212 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_213)); }
	inline int32_t get_m_lineVisibleCharacterCount_213() const { return ___m_lineVisibleCharacterCount_213; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_213() { return &___m_lineVisibleCharacterCount_213; }
	inline void set_m_lineVisibleCharacterCount_213(int32_t value)
	{
		___m_lineVisibleCharacterCount_213 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_214)); }
	inline int32_t get_m_pageNumber_214() const { return ___m_pageNumber_214; }
	inline int32_t* get_address_of_m_pageNumber_214() { return &___m_pageNumber_214; }
	inline void set_m_pageNumber_214(int32_t value)
	{
		___m_pageNumber_214 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_215)); }
	inline float get_m_PageAscender_215() const { return ___m_PageAscender_215; }
	inline float* get_address_of_m_PageAscender_215() { return &___m_PageAscender_215; }
	inline void set_m_PageAscender_215(float value)
	{
		___m_PageAscender_215 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_216)); }
	inline float get_m_maxTextAscender_216() const { return ___m_maxTextAscender_216; }
	inline float* get_address_of_m_maxTextAscender_216() { return &___m_maxTextAscender_216; }
	inline void set_m_maxTextAscender_216(float value)
	{
		___m_maxTextAscender_216 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_217)); }
	inline float get_m_maxCapHeight_217() const { return ___m_maxCapHeight_217; }
	inline float* get_address_of_m_maxCapHeight_217() { return &___m_maxCapHeight_217; }
	inline void set_m_maxCapHeight_217(float value)
	{
		___m_maxCapHeight_217 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_218)); }
	inline float get_m_ElementAscender_218() const { return ___m_ElementAscender_218; }
	inline float* get_address_of_m_ElementAscender_218() { return &___m_ElementAscender_218; }
	inline void set_m_ElementAscender_218(float value)
	{
		___m_ElementAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_219)); }
	inline float get_m_ElementDescender_219() const { return ___m_ElementDescender_219; }
	inline float* get_address_of_m_ElementDescender_219() { return &___m_ElementDescender_219; }
	inline void set_m_ElementDescender_219(float value)
	{
		___m_ElementDescender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_220)); }
	inline float get_m_maxLineAscender_220() const { return ___m_maxLineAscender_220; }
	inline float* get_address_of_m_maxLineAscender_220() { return &___m_maxLineAscender_220; }
	inline void set_m_maxLineAscender_220(float value)
	{
		___m_maxLineAscender_220 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_221)); }
	inline float get_m_maxLineDescender_221() const { return ___m_maxLineDescender_221; }
	inline float* get_address_of_m_maxLineDescender_221() { return &___m_maxLineDescender_221; }
	inline void set_m_maxLineDescender_221(float value)
	{
		___m_maxLineDescender_221 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_222)); }
	inline float get_m_startOfLineAscender_222() const { return ___m_startOfLineAscender_222; }
	inline float* get_address_of_m_startOfLineAscender_222() { return &___m_startOfLineAscender_222; }
	inline void set_m_startOfLineAscender_222(float value)
	{
		___m_startOfLineAscender_222 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_223)); }
	inline float get_m_startOfLineDescender_223() const { return ___m_startOfLineDescender_223; }
	inline float* get_address_of_m_startOfLineDescender_223() { return &___m_startOfLineDescender_223; }
	inline void set_m_startOfLineDescender_223(float value)
	{
		___m_startOfLineDescender_223 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_224)); }
	inline float get_m_lineOffset_224() const { return ___m_lineOffset_224; }
	inline float* get_address_of_m_lineOffset_224() { return &___m_lineOffset_224; }
	inline void set_m_lineOffset_224(float value)
	{
		___m_lineOffset_224 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_225)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_225() const { return ___m_meshExtents_225; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_225() { return &___m_meshExtents_225; }
	inline void set_m_meshExtents_225(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_225 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_226)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_226() const { return ___m_htmlColor_226; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_226() { return &___m_htmlColor_226; }
	inline void set_m_htmlColor_226(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_226 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_227)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_227() const { return ___m_colorStack_227; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_227() { return &___m_colorStack_227; }
	inline void set_m_colorStack_227(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_227 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_227))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_228)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_228() const { return ___m_underlineColorStack_228; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_228() { return &___m_underlineColorStack_228; }
	inline void set_m_underlineColorStack_228(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_229)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_229() const { return ___m_strikethroughColorStack_229; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_229() { return &___m_strikethroughColorStack_229; }
	inline void set_m_strikethroughColorStack_229(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_230)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_230() const { return ___m_HighlightStateStack_230; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_230() { return &___m_HighlightStateStack_230; }
	inline void set_m_HighlightStateStack_230(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_231)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_231() const { return ___m_colorGradientPreset_231; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_231() { return &___m_colorGradientPreset_231; }
	inline void set_m_colorGradientPreset_231(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_231 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_231), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_232)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_232() const { return ___m_colorGradientStack_232; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_232() { return &___m_colorGradientStack_232; }
	inline void set_m_colorGradientStack_232(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_233)); }
	inline bool get_m_colorGradientPresetIsTinted_233() const { return ___m_colorGradientPresetIsTinted_233; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_233() { return &___m_colorGradientPresetIsTinted_233; }
	inline void set_m_colorGradientPresetIsTinted_233(bool value)
	{
		___m_colorGradientPresetIsTinted_233 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_234)); }
	inline float get_m_tabSpacing_234() const { return ___m_tabSpacing_234; }
	inline float* get_address_of_m_tabSpacing_234() { return &___m_tabSpacing_234; }
	inline void set_m_tabSpacing_234(float value)
	{
		___m_tabSpacing_234 = value;
	}

	inline static int32_t get_offset_of_m_spacing_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_235)); }
	inline float get_m_spacing_235() const { return ___m_spacing_235; }
	inline float* get_address_of_m_spacing_235() { return &___m_spacing_235; }
	inline void set_m_spacing_235(float value)
	{
		___m_spacing_235 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_236)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_236() const { return ___m_TextStyleStacks_236; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_236() { return &___m_TextStyleStacks_236; }
	inline void set_m_TextStyleStacks_236(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_236 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_236), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_237)); }
	inline int32_t get_m_TextStyleStackDepth_237() const { return ___m_TextStyleStackDepth_237; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_237() { return &___m_TextStyleStackDepth_237; }
	inline void set_m_TextStyleStackDepth_237(int32_t value)
	{
		___m_TextStyleStackDepth_237 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_238)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_238() const { return ___m_ItalicAngleStack_238; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_238() { return &___m_ItalicAngleStack_238; }
	inline void set_m_ItalicAngleStack_238(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_238 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_238))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_239)); }
	inline int32_t get_m_ItalicAngle_239() const { return ___m_ItalicAngle_239; }
	inline int32_t* get_address_of_m_ItalicAngle_239() { return &___m_ItalicAngle_239; }
	inline void set_m_ItalicAngle_239(int32_t value)
	{
		___m_ItalicAngle_239 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_240)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_240() const { return ___m_actionStack_240; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_240() { return &___m_actionStack_240; }
	inline void set_m_actionStack_240(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_240 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_240))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_241)); }
	inline float get_m_padding_241() const { return ___m_padding_241; }
	inline float* get_address_of_m_padding_241() { return &___m_padding_241; }
	inline void set_m_padding_241(float value)
	{
		___m_padding_241 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_242)); }
	inline float get_m_baselineOffset_242() const { return ___m_baselineOffset_242; }
	inline float* get_address_of_m_baselineOffset_242() { return &___m_baselineOffset_242; }
	inline void set_m_baselineOffset_242(float value)
	{
		___m_baselineOffset_242 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_243)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_243() const { return ___m_baselineOffsetStack_243; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_243() { return &___m_baselineOffsetStack_243; }
	inline void set_m_baselineOffsetStack_243(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_244)); }
	inline float get_m_xAdvance_244() const { return ___m_xAdvance_244; }
	inline float* get_address_of_m_xAdvance_244() { return &___m_xAdvance_244; }
	inline void set_m_xAdvance_244(float value)
	{
		___m_xAdvance_244 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_245)); }
	inline int32_t get_m_textElementType_245() const { return ___m_textElementType_245; }
	inline int32_t* get_address_of_m_textElementType_245() { return &___m_textElementType_245; }
	inline void set_m_textElementType_245(int32_t value)
	{
		___m_textElementType_245 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_246)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_246() const { return ___m_cached_TextElement_246; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_246() { return &___m_cached_TextElement_246; }
	inline void set_m_cached_TextElement_246(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_246 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_246), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_247)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_247() const { return ___m_Ellipsis_247; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_247() { return &___m_Ellipsis_247; }
	inline void set_m_Ellipsis_247(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_247 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_248)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_248() const { return ___m_Underline_248; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_248() { return &___m_Underline_248; }
	inline void set_m_Underline_248(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_248 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_249)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_249() const { return ___m_defaultSpriteAsset_249; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_249() { return &___m_defaultSpriteAsset_249; }
	inline void set_m_defaultSpriteAsset_249(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_250)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_250() const { return ___m_currentSpriteAsset_250; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_250() { return &___m_currentSpriteAsset_250; }
	inline void set_m_currentSpriteAsset_250(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_251)); }
	inline int32_t get_m_spriteCount_251() const { return ___m_spriteCount_251; }
	inline int32_t* get_address_of_m_spriteCount_251() { return &___m_spriteCount_251; }
	inline void set_m_spriteCount_251(int32_t value)
	{
		___m_spriteCount_251 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_252)); }
	inline int32_t get_m_spriteIndex_252() const { return ___m_spriteIndex_252; }
	inline int32_t* get_address_of_m_spriteIndex_252() { return &___m_spriteIndex_252; }
	inline void set_m_spriteIndex_252(int32_t value)
	{
		___m_spriteIndex_252 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_253)); }
	inline int32_t get_m_spriteAnimationID_253() const { return ___m_spriteAnimationID_253; }
	inline int32_t* get_address_of_m_spriteAnimationID_253() { return &___m_spriteAnimationID_253; }
	inline void set_m_spriteAnimationID_253(int32_t value)
	{
		___m_spriteAnimationID_253 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_256)); }
	inline bool get_m_ignoreActiveState_256() const { return ___m_ignoreActiveState_256; }
	inline bool* get_address_of_m_ignoreActiveState_256() { return &___m_ignoreActiveState_256; }
	inline void set_m_ignoreActiveState_256(bool value)
	{
		___m_ignoreActiveState_256 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextBackingArray_257)); }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  get_m_TextBackingArray_257() const { return ___m_TextBackingArray_257; }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B * get_address_of_m_TextBackingArray_257() { return &___m_TextBackingArray_257; }
	inline void set_m_TextBackingArray_257(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  value)
	{
		___m_TextBackingArray_257 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_257))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_m_materialReferences_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferences_45)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_45() const { return ___m_materialReferences_45; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_45() { return &___m_materialReferences_45; }
	inline void set_m_materialReferences_45(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceIndexLookup_46)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_46() const { return ___m_materialReferenceIndexLookup_46; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_46() { return &___m_materialReferenceIndexLookup_46; }
	inline void set_m_materialReferenceIndexLookup_46(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceStack_47)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_47() const { return ___m_materialReferenceStack_47; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_47() { return &___m_materialReferenceStack_47; }
	inline void set_m_materialReferenceStack_47(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_47))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_55() const { return ___s_colorWhite_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_55() { return &___s_colorWhite_55; }
	inline void set_s_colorWhite_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_55 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_163)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_163() const { return ___OnFontAssetRequest_163; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_163() { return &___OnFontAssetRequest_163; }
	inline void set_OnFontAssetRequest_163(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_164)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_164() const { return ___OnSpriteAssetRequest_164; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_164() { return &___OnSpriteAssetRequest_164; }
	inline void set_OnSpriteAssetRequest_164(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_htmlTag_187)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_187() const { return ___m_htmlTag_187; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_187() { return &___m_htmlTag_187; }
	inline void set_m_htmlTag_187(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_xmlAttribute_188)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_188() const { return ___m_xmlAttribute_188; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_188() { return &___m_xmlAttribute_188; }
	inline void set_m_xmlAttribute_188(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_attributeParameterValues_189)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_189() const { return ___m_attributeParameterValues_189; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_189() { return &___m_attributeParameterValues_189; }
	inline void set_m_attributeParameterValues_189(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedWordWrapState_201)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_201() const { return ___m_SavedWordWrapState_201; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_201() { return &___m_SavedWordWrapState_201; }
	inline void set_m_SavedWordWrapState_201(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_201 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLineState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_202() const { return ___m_SavedLineState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_202() { return &___m_SavedLineState_202; }
	inline void set_m_SavedLineState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedEllipsisState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_203() const { return ___m_SavedEllipsisState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_203() { return &___m_SavedEllipsisState_203; }
	inline void set_m_SavedEllipsisState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLastValidState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_204() const { return ___m_SavedLastValidState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_204() { return &___m_SavedLastValidState_204; }
	inline void set_m_SavedLastValidState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedSoftLineBreakState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_205() const { return ___m_SavedSoftLineBreakState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_205() { return &___m_SavedSoftLineBreakState_205; }
	inline void set_m_SavedSoftLineBreakState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_EllipsisInsertionCandidateStack_206)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_206() const { return ___m_EllipsisInsertionCandidateStack_206; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_206() { return &___m_EllipsisInsertionCandidateStack_206; }
	inline void set_m_EllipsisInsertionCandidateStack_206(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_206))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_ParseTextMarker_254)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseTextMarker_254() const { return ___k_ParseTextMarker_254; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseTextMarker_254() { return &___k_ParseTextMarker_254; }
	inline void set_k_ParseTextMarker_254(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseTextMarker_254 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_InsertNewLineMarker_255)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_InsertNewLineMarker_255() const { return ___k_InsertNewLineMarker_255; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_InsertNewLineMarker_255() { return &___k_InsertNewLineMarker_255; }
	inline void set_k_InsertNewLineMarker_255(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_InsertNewLineMarker_255 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  m_Items[1];

public:
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  m_Items[1];

public:
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared (Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m07E5F4A2FE5C2A651505F5DB0CF3ECE258F2B54D_gshared (RuntimeObject* ___source0, Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1 * ___keySelector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T ARLocation.Utils.Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_m9780CED605A5A70F4549EECA28DE6F308452C86E_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Mapbox.Examples.Voxels.VoxelData,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10 (Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<Mapbox.Examples.Voxels.VoxelData,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D (RuntimeObject* ___source0, Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 *, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m07E5F4A2FE5C2A651505F5DB0CF3ECE258F2B54D_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Mapbox.Examples.Voxels.VoxelData>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>::get_Count()
inline int32_t List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_inline (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>::get_Item(System.Int32)
inline VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_inline (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * (*) (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_havePropertiesChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_havePropertiesChanged_mF7E4FC98920C094FD42126A41DCC7601D5F95357 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * WarpTextExample_CopyAnimationCurve_m744026E638662DA48AC81ED21E0589E3E4E05FAB (WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, const RuntimeMethod* method);
// System.Boolean TMPro.TMP_Text::get_havePropertiesChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_mF777F1F3A620EBF1DB95F83812597F13D49295B2_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// UnityEngine.Bounds TMPro.TMP_Text::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  TMP_Text_get_bounds_m61214849DFA057D70FDB3510D868B99641B0F1B8 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void ARLocation.WorldBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC8C53800BD98D2DC34AB5BF3F5D237FA53F652C (U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Collections.IEnumerator ARLocation.WorldBuilder::WaitForLocationServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorldBuilder_WaitForLocationServices_mAD680BF0BABC411653D36076744A658D2CDB7F88 (WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void ARLocation.WorldBuilder::RestoreWorldFromLocalStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBuilder_RestoreWorldFromLocalStorage_mA4C6D9ABCDD4719FB7A9C812195F4FF8A1FC0793 (WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * __this, const RuntimeMethod* method);
// T ARLocation.Utils.Singleton`1<ARLocation.ARLocationProvider>::get_Instance()
inline ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF (const RuntimeMethod* method)
{
	return ((  ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m9780CED605A5A70F4549EECA28DE6F308452C86E_gshared)(method);
}
// System.Boolean ARLocation.ARLocationProvider::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARLocationProvider_get_IsEnabled_mC73EBDEE1E8972552F737886D1C5D5C1F35EF4B4 (ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * __this, const RuntimeMethod* method);
// System.Void ARLocation.WorldBuilder/World::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World__ctor_m776D4E4F5D8472AE63750832FEFB1DCB9E48DE14 (World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ARLocation.WorldBuilder/Entry>::.ctor()
inline void List_1__ctor_mC990814D941BEB15C2D5F17BAC4C4F73A5E5E014 (List_1_t49DD545800BB17CACA0985972E1D069B2A073A37 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t49DD545800BB17CACA0985972E1D069B2A073A37 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean ARLocation.Utils.Misc::WebRequestResultIsError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Misc_WebRequestResultIsError_m15E7BB880A3141DFCD7F26BF14BE53033217D2CF (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void ARLocation.WorldBuilder::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBuilder_FromJson_m1C776C473E5B82162C2C2834123BFC238BF00761 (WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * __this, String_t* ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.String ARLocation.WorldBuilder::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WorldBuilder_ToJson_m55F8699DB4173585BD0DBAF43257BAD8D48964D5 (WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean ARLocation.WorldBuilder::get_Initialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WorldBuilder_get_Initialized_m730CE16D64EFEC58E91D46B41F9770733A2B3128_inline (WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator ARLocation.WorldBuilderApplicationController::RestoreWorldFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorldBuilderApplicationController_RestoreWorldFromServer_mA563DAEBCA8262FF90B99CF632F40A6D373822DF (WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * __this, const RuntimeMethod* method);
// System.Void ARLocation.Utils.Misc::HideGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Misc_HideGameObject_m3756742FDA520090090E2802164AB41E2452FEA2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<ARLocation.Location>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m6457C072F8A4F3A1F35AE33D89A4D55012DD5074 (UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<ARLocation.Location>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m684415C2B6E7A481BC395D571E222DFD7BEBF2F3 (UnityEvent_1_tABFD2349C2C45C1C50EBBB78451AED2D8D630486 * __this, UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tABFD2349C2C45C1C50EBBB78451AED2D8D630486 *, UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Void ARLocation.WorldVoxelController::ChooseBrick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldVoxelController_ChooseBrick_m00187E01398C4A6850D32DE18F44C890F8FBFFAA (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, const RuntimeMethod* method);
// System.Void ARLocation.WorldVoxelController::LogText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Collections.IEnumerator ARLocation.WorldVoxelController::WaitForLocationServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorldVoxelController_WaitForLocationServices_m588EAE02EEB489DA9D369AF56BC651D4A0863CE9 (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, const RuntimeMethod* method);
// ARLocation.LocationReading ARLocation.ARLocationProvider::get_CurrentLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0  ARLocationProvider_get_CurrentLocation_m97EC61531303407D29991A9E804A6D28318E06CB (ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * __this, const RuntimeMethod* method);
// ARLocation.Location ARLocation.LocationReading::ToLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * LocationReading_ToLocation_m6827E067CAB18012D53C370C0D628407C3E7E329 (LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Collections.IEnumerator ARLocation.WorldVoxelController::StartWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorldVoxelController_StartWorld_mA7C7545E75A4B6739CE61C519D402BD39522EF81 (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, const RuntimeMethod* method);
// System.Void ARLocation.WorldVoxelController::InitUiListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldVoxelController_InitUiListeners_m01498A2F4D358BE1BA788C236E45D39F883AB680 (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, const RuntimeMethod* method);
// System.Void ARLocation.WorldVoxelController/<StartWorld>d__19::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWorldU3Ed__19_U3CU3Em__Finally1_mCAEEC868C6A45D9C6979E8606F80F91AA5DEC27A (U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47 * __this, const RuntimeMethod* method);
// System.Boolean ARLocation.WorldVoxelController::RestoreWorldFromLocalStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldVoxelController_RestoreWorldFromLocalStorage_mD055B24C7330AA06CA357609743D4C4A109968A8 (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ARLocation.WorldVoxelController/WorldChunk>::get_Count()
inline int32_t List_1_get_Count_mEC2BDC0A6D8ED5399DA72C57F6E94474A490CF27_inline (List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// ARLocation.WorldVoxelController/WorldChunk ARLocation.WorldVoxelController::FindClosestChunk(ARLocation.Location,System.Double&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * WorldVoxelController_FindClosestChunk_m92A2F3CE5A90869449AAAADECFA129FC92D6F533 (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * ___l0, double* ___distance1, double ___maxDistance2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void ARLocation.WorldVoxelController::SetCurrentChunk(ARLocation.WorldVoxelController/WorldChunk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldVoxelController_SetCurrentChunk_m90BF0EA6AE036163DA8307EC3D6A56963550E3F9 (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * ___chunk0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ARLocation.WorldVoxelController/WorldChunk>::GetEnumerator()
inline Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1  List_1_GetEnumerator_m8F5734F29914A3764B9A6FF3B6BF9C1AD3413E06 (List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1  (*) (List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<ARLocation.WorldVoxelController/WorldChunk>::get_Current()
inline WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * Enumerator_get_Current_m1400D9FAE66248449C243D7B79C98808ABAE6D7E_inline (Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 * __this, const RuntimeMethod* method)
{
	return ((  WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * (*) (Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Double ARLocation.Location::HorizontalDistance(ARLocation.Location,ARLocation.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Location_HorizontalDistance_mA940157B64A4EB2F2A7DE3210CF39BD5E76AC9DC (Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * ___l10, Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * ___l21, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<ARLocation.WorldVoxelController/WorldChunk>::MoveNext()
inline bool Enumerator_MoveNext_mF7B567D6013618D4E8519DC86A59419146F288D2 (Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// ARLocation.WorldVoxelController/WorldChunk ARLocation.WorldVoxelController::CreateTestChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * WorldVoxelController_CreateTestChunk_m7975C5F12201DE1F272F976AAEB346431A83E31D (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ARLocation.WorldVoxelController/WorldChunk>::Add(!0)
inline void List_1_Add_m0F87811BC0E10CC7E8F20605AD4EDFC2ABEEABE3 (List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * __this, WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 *, WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void ARLocation.WorldVoxelController::UpdateChunkLocation(ARLocation.WorldVoxelController/WorldChunk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldVoxelController_UpdateChunkLocation_mC85A972D3ABD7EAD3946BABDB99EE34783A9752F (WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * __this, WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * ___c0, const RuntimeMethod* method);
// System.Void ARLocation.WorldVoxelController/<StartWorld>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWorldU3Ed__19_System_IDisposable_Dispose_mCAB48FFD6DE743461B606E763022F88271A9FD39 (U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<ARLocation.WorldVoxelController/WorldChunk>::Dispose()
inline void Enumerator_Dispose_m12560E7847FA30F26A0818360CEA16715E177C36 (Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ARLocation.WorldVoxelController/WorldChunk>::.ctor()
inline void List_1__ctor_m1D39C41130702D0D26001266ACF2F0BEDA5E4B2E (List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ARLocation.WorldVoxelController/Voxel>::.ctor()
inline void List_1__ctor_m0EA351F74BEADC08106A9559B8FCA24AEFD8F4CF (List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_imagePosition_mE650EF31D86572D41CAED2F20B098AE471AD04F4 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildRoutineU3Ed__27__ctor_m0B8919E93FA333B95BDE8DD79D5B3A3CBA2F1443 (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildRoutineU3Ed__27_System_IDisposable_Dispose_m7CAC623BCD0EF90EF3DD2C2DC21210C2AFADE34C (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildRoutineU3Ed__27_MoveNext_m738E223B3783C8F138DACB123EDB8F55A48E8C8D (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelTile_U3CBuildRoutineU3Eb__27_0_m8BC543C8B0F7C0C1348B1261916A5824C7638A62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00be;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var distanceOrderedVoxels = _voxels.OrderBy(x => (_camera.transform.position - x.Position).magnitude).ToList();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_4 = V_1;
		NullCheck(L_4);
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_5 = L_4->get__voxels_18();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_6 = V_1;
		Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 * L_7 = (Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 *)il2cpp_codegen_object_new(Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7_il2cpp_TypeInfo_var);
		Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10(L_7, L_6, (intptr_t)((intptr_t)VoxelTile_U3CBuildRoutineU3Eb__27_0_m8BC543C8B0F7C0C1348B1261916A5824C7638A62_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10_RuntimeMethod_var);
		RuntimeObject* L_8;
		L_8 = Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D(L_5, L_7, /*hidden argument*/Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D_RuntimeMethod_var);
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_9;
		L_9 = Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728(L_8, /*hidden argument*/Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728_RuntimeMethod_var);
		__this->set_U3CdistanceOrderedVoxelsU3E5__2_3(L_9);
		// for (int i = 0; i < distanceOrderedVoxels.Count; i += _voxelBatchCount)
		__this->set_U3CiU3E5__3_4(0);
		goto IL_00d8;
	}

IL_004f:
	{
		// for (int j = 0; j < _voxelBatchCount; j++)
		V_2 = 0;
		goto IL_00a5;
	}

IL_0053:
	{
		// var index = i + j;
		int32_t L_10 = __this->get_U3CiU3E5__3_4();
		int32_t L_11 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		// if (index < distanceOrderedVoxels.Count)
		int32_t L_12 = V_3;
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_13 = __this->get_U3CdistanceOrderedVoxelsU3E5__2_3();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_inline(L_13, /*hidden argument*/List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var);
		if ((((int32_t)L_12) >= ((int32_t)L_14)))
		{
			goto IL_00a1;
		}
	}
	{
		// var voxel = distanceOrderedVoxels[index];
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_15 = __this->get_U3CdistanceOrderedVoxelsU3E5__2_3();
		int32_t L_16 = V_3;
		NullCheck(L_15);
		VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * L_17;
		L_17 = List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_RuntimeMethod_var);
		V_4 = L_17;
		// _instantiatedVoxels.Add(Instantiate(voxel.Prefab, voxel.Position, Quaternion.identity, transform) as GameObject);
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_18 = V_1;
		NullCheck(L_18);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = L_18->get__instantiatedVoxels_19();
		VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * L_20 = V_4;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_Prefab_1();
		VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * L_22 = V_4;
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_Position_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_25 = V_1;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_21, L_23, L_24, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		NullCheck(L_19);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_19, L_27, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_00a1:
	{
		// for (int j = 0; j < _voxelBatchCount; j++)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a5:
	{
		// for (int j = 0; j < _voxelBatchCount; j++)
		int32_t L_29 = V_2;
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = L_30->get__voxelBatchCount_11();
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0053;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00be:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < distanceOrderedVoxels.Count; i += _voxelBatchCount)
		int32_t L_32 = __this->get_U3CiU3E5__3_4();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->get__voxelBatchCount_11();
		__this->set_U3CiU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_34)));
	}

IL_00d8:
	{
		// for (int i = 0; i < distanceOrderedVoxels.Count; i += _voxelBatchCount)
		int32_t L_35 = __this->get_U3CiU3E5__3_4();
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_36 = __this->get_U3CdistanceOrderedVoxelsU3E5__2_3();
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_inline(L_36, /*hidden argument*/List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_004f;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildRoutineU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0DB9EC10F91D4D7D02C5AD56DF97AEDF2128A9FA (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m04332478F50334727E80E32D39A2AF9C186EEA34 (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m04332478F50334727E80E32D39A2AF9C186EEA34_RuntimeMethod_var)));
	}
}
// System.Object Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_get_Current_m634DD817D9163EE06846A5DA8C0D1E3B23BE77F3 (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m9FADE04C27A0034C5A276232FCA187AECDC6BF49 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_IDisposable_Dispose_m5AB0DCF4B3DE6C290487F3DBBC7BAE931130DE60 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.WarpTextExample/<WarpText>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWarpTextU3Ed__8_MoveNext_m9C83C8455FF8ADFBAA8D05958C3048612A96EB84 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * V_1 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_2 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float G_B14_0 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_0473;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// VertexCurve.preWrapMode = WrapMode.Clamp;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_3 = V_1;
		NullCheck(L_3);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = L_3->get_VertexCurve_5();
		NullCheck(L_4);
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_4, 1, /*hidden argument*/NULL);
		// VertexCurve.postWrapMode = WrapMode.Clamp;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_5 = V_1;
		NullCheck(L_5);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = L_5->get_VertexCurve_5();
		NullCheck(L_6);
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_6, 1, /*hidden argument*/NULL);
		// m_TextComponent.havePropertiesChanged = true; // Need to force the TextMeshPro Object to be updated.
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_7 = V_1;
		NullCheck(L_7);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_8 = L_7->get_m_TextComponent_4();
		NullCheck(L_8);
		TMP_Text_set_havePropertiesChanged_mF7E4FC98920C094FD42126A41DCC7601D5F95357(L_8, (bool)1, /*hidden argument*/NULL);
		// CurveScale *= 10;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_9 = V_1;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_CurveScale_8();
		NullCheck(L_9);
		L_9->set_CurveScale_8(((float)il2cpp_codegen_multiply((float)L_11, (float)(10.0f))));
		// float old_CurveScale = CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_CurveScale_8();
		__this->set_U3Cold_CurveScaleU3E5__2_3(L_13);
		// AnimationCurve old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_14 = V_1;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_15 = V_1;
		NullCheck(L_15);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_16 = L_15->get_VertexCurve_5();
		NullCheck(L_14);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17;
		L_17 = WarpTextExample_CopyAnimationCurve_m744026E638662DA48AC81ED21E0589E3E4E05FAB(L_14, L_16, /*hidden argument*/NULL);
		__this->set_U3Cold_curveU3E5__3_4(L_17);
	}

IL_007d:
	{
		// if (!m_TextComponent.havePropertiesChanged && old_CurveScale == CurveScale && old_curve.keys[1].value == VertexCurve.keys[1].value)
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_18 = V_1;
		NullCheck(L_18);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_19 = L_18->get_m_TextComponent_4();
		NullCheck(L_19);
		bool L_20;
		L_20 = TMP_Text_get_havePropertiesChanged_mF777F1F3A620EBF1DB95F83812597F13D49295B2_inline(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00df;
		}
	}
	{
		float L_21 = __this->get_U3Cold_CurveScaleU3E5__2_3();
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->get_CurveScale_8();
		if ((!(((float)L_21) == ((float)L_23))))
		{
			goto IL_00df;
		}
	}
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = __this->get_U3Cold_curveU3E5__3_4();
		NullCheck(L_24);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_25;
		L_25 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		float L_26;
		L_26 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_27 = V_1;
		NullCheck(L_27);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = L_27->get_VertexCurve_5();
		NullCheck(L_28);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_29;
		L_29 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		float L_30;
		L_30 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		if ((!(((float)L_26) == ((float)L_30))))
		{
			goto IL_00df;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_007d;
	}

IL_00df:
	{
		// old_CurveScale = CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_31 = V_1;
		NullCheck(L_31);
		float L_32 = L_31->get_CurveScale_8();
		__this->set_U3Cold_CurveScaleU3E5__2_3(L_32);
		// old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_33 = V_1;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_34 = V_1;
		NullCheck(L_34);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_35 = L_34->get_VertexCurve_5();
		NullCheck(L_33);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_36;
		L_36 = WarpTextExample_CopyAnimationCurve_m744026E638662DA48AC81ED21E0589E3E4E05FAB(L_33, L_35, /*hidden argument*/NULL);
		__this->set_U3Cold_curveU3E5__3_4(L_36);
		// m_TextComponent.ForceMeshUpdate(); // Generate the mesh and populate the textInfo with data we can use and manipulate.
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_37 = V_1;
		NullCheck(L_37);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_38 = L_37->get_m_TextComponent_4();
		NullCheck(L_38);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_38, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_39 = V_1;
		NullCheck(L_39);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_40 = L_39->get_m_TextComponent_4();
		NullCheck(L_40);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_41;
		L_41 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_characterCount_3();
		V_5 = L_43;
		// if (characterCount == 0) continue;
		int32_t L_44 = V_5;
		if (!L_44)
		{
			goto IL_007d;
		}
	}
	{
		// float boundsMinX = m_TextComponent.bounds.min.x;  //textInfo.meshInfo[0].mesh.bounds.min.x;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_45 = V_1;
		NullCheck(L_45);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_46 = L_45->get_m_TextComponent_4();
		NullCheck(L_46);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_47;
		L_47 = TMP_Text_get_bounds_m61214849DFA057D70FDB3510D868B99641B0F1B8(L_46, /*hidden argument*/NULL);
		V_8 = L_47;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_8), /*hidden argument*/NULL);
		float L_49 = L_48.get_x_2();
		V_6 = L_49;
		// float boundsMaxX = m_TextComponent.bounds.max.x;  //textInfo.meshInfo[0].mesh.bounds.max.x;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_50 = V_1;
		NullCheck(L_50);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_51 = L_50->get_m_TextComponent_4();
		NullCheck(L_51);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_52;
		L_52 = TMP_Text_get_bounds_m61214849DFA057D70FDB3510D868B99641B0F1B8(L_51, /*hidden argument*/NULL);
		V_8 = L_52;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_8), /*hidden argument*/NULL);
		float L_54 = L_53.get_x_2();
		V_7 = L_54;
		// for (int i = 0; i < characterCount; i++)
		V_9 = 0;
		goto IL_0446;
	}

IL_0165:
	{
		// if (!textInfo.characterInfo[i].isVisible)
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_55 = V_4;
		NullCheck(L_55);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_56 = L_55->get_characterInfo_11();
		int32_t L_57 = V_9;
		NullCheck(L_56);
		bool L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->get_isVisible_40();
		if (!L_58)
		{
			goto IL_0440;
		}
	}
	{
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_59 = V_4;
		NullCheck(L_59);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_60 = L_59->get_characterInfo_11();
		int32_t L_61 = V_9;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->get_vertexIndex_14();
		V_10 = L_62;
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_63 = V_4;
		NullCheck(L_63);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_64 = L_63->get_characterInfo_11();
		int32_t L_65 = V_9;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->get_materialReferenceIndex_9();
		V_11 = L_66;
		// vertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_67 = V_4;
		NullCheck(L_67);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_68 = L_67->get_meshInfo_16();
		int32_t L_69 = V_11;
		NullCheck(L_68);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->get_vertices_6();
		V_2 = L_70;
		// Vector3 offsetToMidBaseline = new Vector2((vertices[vertexIndex + 0].x + vertices[vertexIndex + 2].x) / 2, textInfo.characterInfo[i].baseLine);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_71 = V_2;
		int32_t L_72 = V_10;
		NullCheck(L_71);
		float L_73 = ((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->get_x_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74 = V_2;
		int32_t L_75 = V_10;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)2)))))->get_x_2();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_77 = V_4;
		NullCheck(L_77);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_78 = L_77->get_characterInfo_11();
		int32_t L_79 = V_9;
		NullCheck(L_78);
		float L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->get_baseLine_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_81), ((float)((float)((float)il2cpp_codegen_add((float)L_73, (float)L_76))/(float)(2.0f))), L_80, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_81, /*hidden argument*/NULL);
		V_12 = L_82;
		// vertices[vertexIndex + 0] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_83 = V_2;
		int32_t L_84 = V_10;
		NullCheck(L_83);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_85 = ((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_85);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		L_88 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_87, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_86, L_88, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_85 = L_89;
		// vertices[vertexIndex + 1] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_90 = V_2;
		int32_t L_91 = V_10;
		NullCheck(L_90);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_92);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_94, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_93, L_95, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_92 = L_96;
		// vertices[vertexIndex + 2] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_97 = V_2;
		int32_t L_98 = V_10;
		NullCheck(L_97);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_99 = ((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_99);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_101, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_100, L_102, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_99 = L_103;
		// vertices[vertexIndex + 3] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_104 = V_2;
		int32_t L_105 = V_10;
		NullCheck(L_104);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_106 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_106);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_108, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110;
		L_110 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_107, L_109, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_106 = L_110;
		// float x0 = (offsetToMidBaseline.x - boundsMinX) / (boundsMaxX - boundsMinX); // Character's position relative to the bounds of the mesh.
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = V_12;
		float L_112 = L_111.get_x_2();
		float L_113 = V_6;
		float L_114 = V_7;
		float L_115 = V_6;
		V_13 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_112, (float)L_113))/(float)((float)il2cpp_codegen_subtract((float)L_114, (float)L_115))));
		// float x1 = x0 + 0.0001f;
		float L_116 = V_13;
		V_14 = ((float)il2cpp_codegen_add((float)L_116, (float)(9.99999975E-05f)));
		// float y0 = VertexCurve.Evaluate(x0) * CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_117 = V_1;
		NullCheck(L_117);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_118 = L_117->get_VertexCurve_5();
		float L_119 = V_13;
		NullCheck(L_118);
		float L_120;
		L_120 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_118, L_119, /*hidden argument*/NULL);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_121 = V_1;
		NullCheck(L_121);
		float L_122 = L_121->get_CurveScale_8();
		V_15 = ((float)il2cpp_codegen_multiply((float)L_120, (float)L_122));
		// float y1 = VertexCurve.Evaluate(x1) * CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_123 = V_1;
		NullCheck(L_123);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_124 = L_123->get_VertexCurve_5();
		float L_125 = V_14;
		NullCheck(L_124);
		float L_126;
		L_126 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_124, L_125, /*hidden argument*/NULL);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_127 = V_1;
		NullCheck(L_127);
		float L_128 = L_127->get_CurveScale_8();
		V_16 = ((float)il2cpp_codegen_multiply((float)L_126, (float)L_128));
		// Vector3 horizontal = new Vector3(1, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_129), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// Vector3 tangent = new Vector3(x1 * (boundsMaxX - boundsMinX) + boundsMinX, y1) - new Vector3(offsetToMidBaseline.x, y0);
		float L_130 = V_14;
		float L_131 = V_7;
		float L_132 = V_6;
		float L_133 = V_6;
		float L_134 = V_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_135), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_130, (float)((float)il2cpp_codegen_subtract((float)L_131, (float)L_132)))), (float)L_133)), L_134, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_136 = V_12;
		float L_137 = L_136.get_x_2();
		float L_138 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_139), L_137, L_138, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_140;
		L_140 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_135, L_139, /*hidden argument*/NULL);
		V_17 = L_140;
		// float dot = Mathf.Acos(Vector3.Dot(horizontal, tangent.normalized)) * 57.2957795f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141 = L_129;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142;
		L_142 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_17), /*hidden argument*/NULL);
		float L_143;
		L_143 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_141, L_142, /*hidden argument*/NULL);
		float L_144;
		L_144 = acosf(L_143);
		V_18 = ((float)il2cpp_codegen_multiply((float)L_144, (float)(57.2957802f)));
		// Vector3 cross = Vector3.Cross(horizontal, tangent);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145 = V_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146;
		L_146 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_141, L_145, /*hidden argument*/NULL);
		// float angle = cross.z > 0 ? dot : 360 - dot;
		float L_147 = L_146.get_z_4();
		if ((((float)L_147) > ((float)(0.0f))))
		{
			goto IL_0339;
		}
	}
	{
		float L_148 = V_18;
		G_B14_0 = ((float)il2cpp_codegen_subtract((float)(360.0f), (float)L_148));
		goto IL_033b;
	}

IL_0339:
	{
		float L_149 = V_18;
		G_B14_0 = L_149;
	}

IL_033b:
	{
		V_19 = G_B14_0;
		// matrix = Matrix4x4.TRS(new Vector3(0, y0, 0), Quaternion.Euler(0, 0, angle), Vector3.one);
		float L_150 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151;
		memset((&L_151), 0, sizeof(L_151));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_151), (0.0f), L_150, (0.0f), /*hidden argument*/NULL);
		float L_152 = V_19;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_153;
		L_153 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_152, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_154;
		L_154 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_155;
		L_155 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_151, L_153, L_154, /*hidden argument*/NULL);
		V_3 = L_155;
		// vertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 0]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_156 = V_2;
		int32_t L_157 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_158 = V_2;
		int32_t L_159 = V_10;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162;
		L_162 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), L_161, /*hidden argument*/NULL);
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(L_157), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_162);
		// vertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 1]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_163 = V_2;
		int32_t L_164 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_165 = V_2;
		int32_t L_166 = V_10;
		NullCheck(L_165);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_169;
		L_169 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), L_168, /*hidden argument*/NULL);
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_169);
		// vertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 2]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_170 = V_2;
		int32_t L_171 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_172 = V_2;
		int32_t L_173 = V_10;
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_176;
		L_176 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), L_175, /*hidden argument*/NULL);
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_176);
		// vertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 3]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_177 = V_2;
		int32_t L_178 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_179 = V_2;
		int32_t L_180 = V_10;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_183;
		L_183 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), L_182, /*hidden argument*/NULL);
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_183);
		// vertices[vertexIndex + 0] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_184 = V_2;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_186 = ((L_184)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_185)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_186);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_188 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_189;
		L_189 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_187, L_188, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_186 = L_189;
		// vertices[vertexIndex + 1] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_190 = V_2;
		int32_t L_191 = V_10;
		NullCheck(L_190);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_192 = ((L_190)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_193 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_192);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_194 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_195;
		L_195 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_193, L_194, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_192 = L_195;
		// vertices[vertexIndex + 2] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_196 = V_2;
		int32_t L_197 = V_10;
		NullCheck(L_196);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_198 = ((L_196)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_197, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_199 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_198);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_200 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201;
		L_201 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_199, L_200, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_198 = L_201;
		// vertices[vertexIndex + 3] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_202 = V_2;
		int32_t L_203 = V_10;
		NullCheck(L_202);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_204 = ((L_202)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_203, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_205 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_204);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_206 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_207;
		L_207 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_205, L_206, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_204 = L_207;
	}

IL_0440:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_208 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)1));
	}

IL_0446:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_209 = V_9;
		int32_t L_210 = V_5;
		if ((((int32_t)L_209) < ((int32_t)L_210)))
		{
			goto IL_0165;
		}
	}
	{
		// m_TextComponent.UpdateVertexData();
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_211 = V_1;
		NullCheck(L_211);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_212 = L_211->get_m_TextComponent_4();
		NullCheck(L_212);
		VirtActionInvoker0::Invoke(109 /* System.Void TMPro.TMP_Text::UpdateVertexData() */, L_212);
		// yield return new WaitForSeconds(0.025f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_213 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_213, (0.0250000004f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_213);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0473:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_007d;
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWarpTextU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9D5776AF80C4227401ADD7E13D98F2530CB9E7A1 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWarpTextU3Ed__8_System_Collections_IEnumerator_get_Current_m01FA935D93D737C9DDD88A051F7DFC393DD7BD25 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ARLocation.AltitudeMode ARLocation.WebMapLoader/DataEntry::getAltitudeMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEntry_getAltitudeMode_mDEF1722E404825342F1C3E459EB962626D9FE29B (DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4748222E3B65BCE8F2F55EBA26B2F40331E11E87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BCAE922754846C65FD239698645DEC15DB09C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC7FC897125FA91E861C4F5E9C15277E175053CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (altitudeMode == "GroundRelative")
		String_t* L_0 = __this->get_altitudeMode_4();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral4748222E3B65BCE8F2F55EBA26B2F40331E11E87, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return AltitudeMode.GroundRelative;
		return (int32_t)(0);
	}

IL_0014:
	{
		// else if (altitudeMode == "DeviceRelative")
		String_t* L_2 = __this->get_altitudeMode_4();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralDC7FC897125FA91E861C4F5E9C15277E175053CF, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return AltitudeMode.DeviceRelative;
		return (int32_t)(1);
	}

IL_0028:
	{
		// else if (altitudeMode == "Absolute")
		String_t* L_4 = __this->get_altitudeMode_4();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteralC2BCAE922754846C65FD239698645DEC15DB09C8, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// return AltitudeMode.Absolute;
		return (int32_t)(2);
	}

IL_003c:
	{
		// return AltitudeMode.Ignore;
		return (int32_t)(3);
	}
}
// System.Void ARLocation.WebMapLoader/DataEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry__ctor_m92C043CFBD18A15002613D6D55F6D83EE0A4A6E2 (DataEntry_t33FEEC744238E7EB3977611536DC6C0A6CA388B3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8CD088CF8DD915B81895E8E29E364BF76DC32920 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1 * L_0 = (U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1 *)il2cpp_codegen_object_new(U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAC8C53800BD98D2DC34AB5BF3F5D237FA53F652C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ARLocation.WorldBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC8C53800BD98D2DC34AB5BF3F5D237FA53F652C (U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ARLocation.WorldBuilder/<>c::<ClearWorld>b__23_0(ARLocation.WorldBuilder/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CClearWorldU3Eb__23_0_m21E7CE44ADA920B816554EAB7E299BF301AD3A1C (U3CU3Ec_t6560C12F9DDDBA0BE759D1E97EC142B084520DE1 * __this, Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (e.Instance != null)
		Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB * L_0 = ___e0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_Instance_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(e.Instance);
		Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB * L_3 = ___e0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_Instance_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilder/<Start>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__11__ctor_mEB9F8E9FB8863FCA856C475CE3953732827C45C7 (U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ARLocation.WorldBuilder/<Start>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__11_System_IDisposable_Dispose_m6CF5F632049E8A079C6149D25FE882EC0CF02BEB (U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ARLocation.WorldBuilder/<Start>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__11_MoveNext_mEDC00464DA2B06700F62D38208F7B2216F55D2D7 (U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(WaitForLocationServices());
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_4 = V_1;
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = WorldBuilder_WaitForLocationServices_mAD680BF0BABC411653D36076744A658D2CDB7F88(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_4, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (UseLocalStorage)
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_UseLocalStorage_6();
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		// RestoreWorldFromLocalStorage();
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_10 = V_1;
		NullCheck(L_10);
		WorldBuilder_RestoreWorldFromLocalStorage_mA4C6D9ABCDD4719FB7A9C812195F4FF8A1FC0793(L_10, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// initialized = true;
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_initialized_8((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object ARLocation.WorldBuilder/<Start>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD1F8834D7A88F6C1E72CA8F700BDA9843C2D2760 (U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ARLocation.WorldBuilder/<Start>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__11_System_Collections_IEnumerator_Reset_mF722C6C6D5BD5A2DA52B63B58E6839696D07AD6E (U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__11_System_Collections_IEnumerator_Reset_mF722C6C6D5BD5A2DA52B63B58E6839696D07AD6E_RuntimeMethod_var)));
	}
}
// System.Object ARLocation.WorldBuilder/<Start>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__11_System_Collections_IEnumerator_get_Current_m9995E0F4AADFE599BC6EE841F982DCF470C58B12 (U3CStartU3Ed__11_t923C741C5866E5117C2111EE5A4180E589AB1FB9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilder/<WaitForLocationServices>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLocationServicesU3Ed__12__ctor_mB0E081157FC6F80947552EAD52001420488B82B5 (U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ARLocation.WorldBuilder/<WaitForLocationServices>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLocationServicesU3Ed__12_System_IDisposable_Dispose_m5CAE00BE382E2B0ECBEF52701C19C94DA0DF77CF (U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ARLocation.WorldBuilder/<WaitForLocationServices>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForLocationServicesU3Ed__12_MoveNext_mF3295676DE60950C9B59393A7610B94326FC7E29 (U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0039;
	}

IL_0019:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0039:
	{
		// while (!ARLocationProvider.Instance.IsEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_il2cpp_TypeInfo_var);
		ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * L_4;
		L_4 = Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF(/*hidden argument*/Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5;
		L_5 = ARLocationProvider_get_IsEnabled_mC73EBDEE1E8972552F737886D1C5D5C1F35EF4B4(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ARLocation.WorldBuilder/<WaitForLocationServices>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForLocationServicesU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m362C4F91E9E792C76526D2E013841DF893902A65 (U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ARLocation.WorldBuilder/<WaitForLocationServices>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLocationServicesU3Ed__12_System_Collections_IEnumerator_Reset_m10F9138D89CBDC158E7ADC150DCA060A55C3FB91 (U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForLocationServicesU3Ed__12_System_Collections_IEnumerator_Reset_m10F9138D89CBDC158E7ADC150DCA060A55C3FB91_RuntimeMethod_var)));
	}
}
// System.Object ARLocation.WorldBuilder/<WaitForLocationServices>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForLocationServicesU3Ed__12_System_Collections_IEnumerator_get_Current_m001F487FE1FEE0A266039C66B648E70740B30C46 (U3CWaitForLocationServicesU3Ed__12_t0CFACBF6935FDEC52C2AC8482C8A969EB746EB2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilder/Entry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m168A13A8D5BE3EB10F8E68EE09DE35EC8365E4BB (Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilder/State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_mE7106FCC519870E7B5FEEFAD8B105F267784A8EC (State_t8FC0BEE8CEDB6C1DF7E87CF64BA88F14F775CA95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public World World = new World();
		World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F * L_0 = (World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F *)il2cpp_codegen_object_new(World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F_il2cpp_TypeInfo_var);
		World__ctor_m776D4E4F5D8472AE63750832FEFB1DCB9E48DE14(L_0, /*hidden argument*/NULL);
		__this->set_World_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilder/World::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World__ctor_m776D4E4F5D8472AE63750832FEFB1DCB9E48DE14 (World_t6E88F524DC99FF6C6A1A4B542CC7C2E66BB9BB7F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC990814D941BEB15C2D5F17BAC4C4F73A5E5E014_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t49DD545800BB17CACA0985972E1D069B2A073A37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Entry> Entries = new List<Entry>();
		List_1_t49DD545800BB17CACA0985972E1D069B2A073A37 * L_0 = (List_1_t49DD545800BB17CACA0985972E1D069B2A073A37 *)il2cpp_codegen_object_new(List_1_t49DD545800BB17CACA0985972E1D069B2A073A37_il2cpp_TypeInfo_var);
		List_1__ctor_mC990814D941BEB15C2D5F17BAC4C4F73A5E5E014(L_0, /*hidden argument*/List_1__ctor_mC990814D941BEB15C2D5F17BAC4C4F73A5E5E014_RuntimeMethod_var);
		__this->set_Entries_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilderApplicationController/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_mF0FCAE4693EEB7A4030CFB29437DDE198551F056 (U3CU3Ec__DisplayClass23_0_t37D6D155705469CD530CA3E37BA55CC6F01E0AF2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ARLocation.WorldBuilderApplicationController/<>c__DisplayClass23_0::<OnTouchOrClick>b__0(ARLocation.WorldBuilder/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass23_0_U3COnTouchOrClickU3Eb__0_m4FAE4D5B2F36718BEE71D0FB1B9FE437064FDFB1 (U3CU3Ec__DisplayClass23_0_t37D6D155705469CD530CA3E37BA55CC6F01E0AF2 * __this, Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// entry = worldBuilder.GetWorld().Entries.Find(e => e.Instance == o.gameObject);
		Entry_t151AA3814C8D7F16A030ABD11129F0C595DEC9CB * L_0 = ___e0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_Instance_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_o_0();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestoreWorldFromServerU3Ed__14__ctor_mF3F4A3FDBDCF050E861ED1E3A6E9DEC5D715EB2D (U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestoreWorldFromServerU3Ed__14_System_IDisposable_Dispose_mB5F202DC734ACF01C484046EEEBAE8A48B2EACB9 (U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRestoreWorldFromServerU3Ed__14_MoveNext_mCA9A1499A739E24E854C5A464D2E86743EE93A46 (U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9528B186D976326CE44E2F16B2A48C3163EA6A76);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var request = UnityWebRequest.Get($"{Settings.RestoreWorldUrl}{worldBuilder.Id}");
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_4 = V_1;
		NullCheck(L_4);
		GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF * L_5 = L_4->get_Settings_6();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_RestoreWorldUrl_3();
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_7 = V_1;
		NullCheck(L_7);
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_8 = L_7->get_worldBuilder_7();
		NullCheck(L_8);
		String_t* L_9 = L_8->get_Id_5();
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, L_9, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11;
		L_11 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_10, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_3(L_11);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CrequestU3E5__2_3();
		NullCheck(L_12);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_13;
		L_13 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Utils.Misc.WebRequestResultIsError(request))
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CrequestU3E5__2_3();
		bool L_15;
		L_15 = Misc_WebRequestResultIsError_m15E7BB880A3141DFCD7F26BF14BE53033217D2CF(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// Debug.Log("Failed to restore world from server!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9528B186D976326CE44E2F16B2A48C3163EA6A76, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_007e:
	{
		// Debug.Log(request.downloadHandler.text);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_U3CrequestU3E5__2_3();
		NullCheck(L_16);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_17;
		L_17 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_18, /*hidden argument*/NULL);
		// Debug.Log(request.responseCode);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_19 = __this->get_U3CrequestU3E5__2_3();
		NullCheck(L_19);
		int64_t L_20;
		L_20 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_19, /*hidden argument*/NULL);
		int64_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_21);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
		// worldBuilder.FromJson(request.downloadHandler.text);
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_23 = V_1;
		NullCheck(L_23);
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_24 = L_23->get_worldBuilder_7();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_25 = __this->get_U3CrequestU3E5__2_3();
		NullCheck(L_25);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_26;
		L_26 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		WorldBuilder_FromJson_m1C776C473E5B82162C2C2834123BFC238BF00761(L_24, L_27, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestoreWorldFromServerU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD42336260FEAA43388A9AF7A040C6F042DBD3486 (U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestoreWorldFromServerU3Ed__14_System_Collections_IEnumerator_Reset_m38F3FA13DD5E07C58EA9E82377624F6AFBF35429 (U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRestoreWorldFromServerU3Ed__14_System_Collections_IEnumerator_Reset_m38F3FA13DD5E07C58EA9E82377624F6AFBF35429_RuntimeMethod_var)));
	}
}
// System.Object ARLocation.WorldBuilderApplicationController/<RestoreWorldFromServer>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestoreWorldFromServerU3Ed__14_System_Collections_IEnumerator_get_Current_mA605986B2D56E29D9FD72231E3B50AF445F37D32 (U3CRestoreWorldFromServerU3Ed__14_t1BC195D258F6C9A677CFE33012A10FED77E61B13 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveWorldToServerU3Ed__15__ctor_m14D5CC1F2CC507AE1FA6D45CFD5DDA75E24F117C (U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveWorldToServerU3Ed__15_System_IDisposable_Dispose_mC570EBAAD87479C60DE2D0E67F80E49B43535249 (U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSaveWorldToServerU3Ed__15_MoveNext_m3A8A7A89B22B26FDF8A5D52FD9434C6F38741844 (U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF79B34A3ED539F333F9D01522594F2C29E60DF5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var request = new UnityWebRequest($"{Settings.SaveWorldUrl}{worldBuilder.Id}", "POST");
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_4 = V_1;
		NullCheck(L_4);
		GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF * L_5 = L_4->get_Settings_6();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_SaveWorldUrl_2();
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_7 = V_1;
		NullCheck(L_7);
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_8 = L_7->get_worldBuilder_7();
		NullCheck(L_8);
		String_t* L_9 = L_8->get_Id_5();
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, L_9, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_11, L_10, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_3(L_11);
		// byte[] bodyRaw = Encoding.UTF8.GetBytes(worldBuilder.ToJson());
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_13 = V_1;
		NullCheck(L_13);
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_14 = L_13->get_worldBuilder_7();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = WorldBuilder_ToJson_m55F8699DB4173585BD0DBAF43257BAD8D48964D5(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, L_15);
		V_2 = L_16;
		// request.uploadHandler = (UploadHandler) new UploadHandlerRaw(bodyRaw);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CrequestU3E5__2_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_2;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_19 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_19, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_17, L_19, /*hidden argument*/NULL);
		// request.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_20 = __this->get_U3CrequestU3E5__2_3();
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_21 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_20, L_21, /*hidden argument*/NULL);
		// request.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_22 = __this->get_U3CrequestU3E5__2_3();
		NullCheck(L_22);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_22, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_23 = __this->get_U3CrequestU3E5__2_3();
		NullCheck(L_23);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_24;
		L_24 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_23, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Utils.Misc.WebRequestResultIsError(request))
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_25 = __this->get_U3CrequestU3E5__2_3();
		bool L_26;
		L_26 = Misc_WebRequestResultIsError_m15E7BB880A3141DFCD7F26BF14BE53033217D2CF(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00d0;
		}
	}
	{
		// Debug.LogWarning("Failed to save to server!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralAF79B34A3ED539F333F9D01522594F2C29E60DF5, /*hidden argument*/NULL);
	}

IL_00d0:
	{
		// }
		return (bool)0;
	}
}
// System.Object ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSaveWorldToServerU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m670E216A9319DE58D0BF21D1793D304B4B97C121 (U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveWorldToServerU3Ed__15_System_Collections_IEnumerator_Reset_m1650694EF7B9228311E87AB511ED902BDF99B2E9 (U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSaveWorldToServerU3Ed__15_System_Collections_IEnumerator_Reset_m1650694EF7B9228311E87AB511ED902BDF99B2E9_RuntimeMethod_var)));
	}
}
// System.Object ARLocation.WorldBuilderApplicationController/<SaveWorldToServer>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSaveWorldToServerU3Ed__15_System_Collections_IEnumerator_get_Current_mE8BDB1F28C86F245BCACBAAAD2C152F342754615 (U3CSaveWorldToServerU3Ed__15_tFDB6D1F6FE0DEE26967CAF125CED4C9F5FDA9C0B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilderApplicationController/<Start>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__13__ctor_m06D9792956694C6F63DE017842934D761D75FBE8 (U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ARLocation.WorldBuilderApplicationController/<Start>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__13_System_IDisposable_Dispose_mBF3B890289A394AE9CAF99B4DCDABDE522DAD059 (U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ARLocation.WorldBuilderApplicationController/<Start>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__13_MoveNext_m65238F9CE7AF4D37307835519DAABA0FF2105864 (U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_007a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Settings.SaveToServer)
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_3 = V_1;
		NullCheck(L_3);
		GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF * L_4 = L_3->get_Settings_6();
		NullCheck(L_4);
		bool L_5 = L_4->get_SaveToServer_4();
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0058;
	}

IL_0038:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0051:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0058:
	{
		// while (!worldBuilder.Initialized)
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_7 = V_1;
		NullCheck(L_7);
		WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * L_8 = L_7->get_worldBuilder_7();
		NullCheck(L_8);
		bool L_9;
		L_9 = WorldBuilder_get_Initialized_m730CE16D64EFEC58E91D46B41F9770733A2B3128_inline(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// yield return RestoreWorldFromServer();
		WorldBuilderApplicationController_tFE48840B225954BFB9782D9799DAFF218C391228 * L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = WorldBuilderApplicationController_RestoreWorldFromServer_mA563DAEBCA8262FF90B99CF632F40A6D373822DF(L_10, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0081:
	{
		// }
		return (bool)0;
	}
}
// System.Object ARLocation.WorldBuilderApplicationController/<Start>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6200AF3D9A6BBF0809F460CE0B6C783C7B7DCB02 (U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ARLocation.WorldBuilderApplicationController/<Start>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__13_System_Collections_IEnumerator_Reset_m40C07F31A227594C80E097030B3EDEF2C3B22F7F (U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__13_System_Collections_IEnumerator_Reset_m40C07F31A227594C80E097030B3EDEF2C3B22F7F_RuntimeMethod_var)));
	}
}
// System.Object ARLocation.WorldBuilderApplicationController/<Start>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__13_System_Collections_IEnumerator_get_Current_m4C7C637169F0DF843ED9C5F8D911C4CD3014AF8B (U3CStartU3Ed__13_tB5AD52B13DBA13A7D2D366C50585F21D7A9A8937 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilderApplicationController/GeneralSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralSettings__ctor_m7636ECF58F78B5E28BC233C1A6F95E13F4D804D6 (GeneralSettings_t827E4998D93C25C854ACF6252B417302D7E5C7FF * __this, const RuntimeMethod* method)
{
	{
		// public float HeightAdjustmentSensitivity = 0.25f;
		__this->set_HeightAdjustmentSensitivity_0((0.25f));
		// public float RotationAdjustmentSensitivity = 1.0f;
		__this->set_RotationAdjustmentSensitivity_1((1.0f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilderApplicationController/RaycastMarginSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastMarginSettings__ctor_mA3881C031CD2783E548AE3094043B0B0AE150695 (RaycastMarginSettings_t81485563B8D10D25D894D73023D9F0825BC4CA5F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilderApplicationController/State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_m23BFE49EA3E85D0BE5CA5B260233053730338C31 (State_tD84D35898133E39AECF1070605DA06A912BA7DFE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldBuilderApplicationController/UiElementsSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiElementsSettings__ctor_m025EE240A876B3A5CD9694CB722A938EBF27C440 (UiElementsSettings_tD0041B2681CE2AA80B0189BC29DA7D518821A15C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldVoxelController/<Start>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__20__ctor_m7CA2FD67733BA04D3A2ACD7C80148A5469666BCC (U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ARLocation.WorldVoxelController/<Start>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__20_System_IDisposable_Dispose_m80FC7FA199E6EB9DAB383B481849F381D33FA439 (U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ARLocation.WorldVoxelController/<Start>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__20_MoveNext_mB3252DDB05E405FE6CE8CDC17B1C266A9293AA19 (U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m6457C072F8A4F3A1F35AE33D89A4D55012DD5074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m684415C2B6E7A481BC395D571E222DFD7BEBF2F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldVoxelController_OnLocationUpdatedListener_mFB1C4266CCFA3EFFF1429F95FC8822E5E46E5411_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15346D87984838456588B8E97468FEE215C25002);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3881FEDD90936C8F50139CD3B3CECD94051A2974);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7964E011DB4E292D9EAABE10EB7CF51593BF1377);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral887F8C077AC6E74BC59379CCB72C738CC88771E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C035653F58DBC3B5DFA72FB03C7607A652A132);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1E58C760B62DBCBB7D29BB62E5F8561392ABF62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * V_1 = NULL;
	LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_00bb;
			}
			case 3:
			{
				goto IL_0113;
			}
			case 4:
			{
				goto IL_0135;
			}
			case 5:
			{
				goto IL_0160;
			}
			case 6:
			{
				goto IL_0191;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Utils.Misc.HideGameObject(Elements.IndicatorPlane);
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_3 = V_1;
		NullCheck(L_3);
		ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896 * L_4 = L_3->get_Elements_5();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_IndicatorPlane_9();
		Misc_HideGameObject_m3756742FDA520090090E2802164AB41E2452FEA2(L_5, /*hidden argument*/NULL);
		// ARLocationProvider.Instance.OnLocationUpdated.AddListener(OnLocationUpdatedListener);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_il2cpp_TypeInfo_var);
		ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * L_6;
		L_6 = Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF(/*hidden argument*/Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF_RuntimeMethod_var);
		NullCheck(L_6);
		LocationUpdatedUnityEvent_t572ECB87266A4AE2E0DCCB2935D5164A48DD0A35 * L_7 = L_6->get_OnLocationUpdated_13();
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_8 = V_1;
		UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27 * L_9 = (UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27 *)il2cpp_codegen_object_new(UnityAction_1_tE471B05ECB78D7A040BB0DD9227400AD6098EA27_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m6457C072F8A4F3A1F35AE33D89A4D55012DD5074(L_9, L_8, (intptr_t)((intptr_t)WorldVoxelController_OnLocationUpdatedListener_mFB1C4266CCFA3EFFF1429F95FC8822E5E46E5411_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m6457C072F8A4F3A1F35AE33D89A4D55012DD5074_RuntimeMethod_var);
		NullCheck(L_7);
		UnityEvent_1_AddListener_m684415C2B6E7A481BC395D571E222DFD7BEBF2F3(L_7, L_9, /*hidden argument*/UnityEvent_1_AddListener_m684415C2B6E7A481BC395D571E222DFD7BEBF2F3_RuntimeMethod_var);
		// ChooseBrick();
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_10 = V_1;
		NullCheck(L_10);
		WorldVoxelController_ChooseBrick_m00187E01398C4A6850D32DE18F44C890F8FBFFAA(L_10, /*hidden argument*/NULL);
		// LogText("Starting...");
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_11 = V_1;
		NullCheck(L_11);
		WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_11, _stringLiteral3881FEDD90936C8F50139CD3B3CECD94051A2974, /*hidden argument*/NULL);
		// LogText("Waiting for location...");
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_12 = V_1;
		NullCheck(L_12);
		WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_12, _stringLiteralD1E58C760B62DBCBB7D29BB62E5F8561392ABF62, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_13, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0099:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(WaitForLocationServices());
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_14 = V_1;
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_15 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = WorldVoxelController_WaitForLocationServices_m588EAE02EEB489DA9D369AF56BC651D4A0863CE9(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_14, L_16, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00bb:
	{
		__this->set_U3CU3E1__state_0((-1));
		// state.CurrentLocation = ARLocationProvider.Instance.CurrentLocation.ToLocation();
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_18 = V_1;
		NullCheck(L_18);
		StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B * L_19 = L_18->get_state_9();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_il2cpp_TypeInfo_var);
		ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * L_20;
		L_20 = Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF(/*hidden argument*/Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF_RuntimeMethod_var);
		NullCheck(L_20);
		LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0  L_21;
		L_21 = ARLocationProvider_get_CurrentLocation_m97EC61531303407D29991A9E804A6D28318E06CB(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * L_22;
		L_22 = LocationReading_ToLocation_m6827E067CAB18012D53C370C0D628407C3E7E329((LocationReading_t8A256D73620DC494ADA44C1183CC671820E058F0 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_CurrentLocation_4(L_22);
		// LogText($"Location enabled: {state.CurrentLocation}");
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_23 = V_1;
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_24 = V_1;
		NullCheck(L_24);
		StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B * L_25 = L_24->get_state_9();
		NullCheck(L_25);
		Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * L_26 = L_25->get_CurrentLocation_4();
		String_t* L_27;
		L_27 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral887F8C077AC6E74BC59379CCB72C738CC88771E3, L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_23, L_27, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_28 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_28, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0113:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(StartWorld());
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_29 = V_1;
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_30 = V_1;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = WorldVoxelController_StartWorld_mA7C7545E75A4B6739CE61C519D402BD39522EF81(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_32;
		L_32 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_29, L_31, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_32);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_0135:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LogText($"Starting UI Listeners...");
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_33 = V_1;
		NullCheck(L_33);
		WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_33, _stringLiteral15346D87984838456588B8E97468FEE215C25002, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_34 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_34, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_34);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_0160:
	{
		__this->set_U3CU3E1__state_0((-1));
		// InitUiListeners();
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_35 = V_1;
		NullCheck(L_35);
		WorldVoxelController_InitUiListeners_m01498A2F4D358BE1BA788C236E45D39F883AB680(L_35, /*hidden argument*/NULL);
		// LogText($"Setting app running...");
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_36 = V_1;
		NullCheck(L_36);
		WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_36, _stringLiteral7964E011DB4E292D9EAABE10EB7CF51593BF1377, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_37 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_37, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_37);
		__this->set_U3CU3E1__state_0(6);
		return (bool)1;
	}

IL_0191:
	{
		__this->set_U3CU3E1__state_0((-1));
		// state.AppState = ApplicationState.Running;
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_38 = V_1;
		NullCheck(L_38);
		StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B * L_39 = L_38->get_state_9();
		NullCheck(L_39);
		L_39->set_AppState_0(1);
		// LogText($"App is running!");
		WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_40 = V_1;
		NullCheck(L_40);
		WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_40, _stringLiteralB1C035653F58DBC3B5DFA72FB03C7607A652A132, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ARLocation.WorldVoxelController/<Start>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m301E2F3CD89FEFBEA67102DADFF9EB0CC42FAE1C (U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ARLocation.WorldVoxelController/<Start>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__20_System_Collections_IEnumerator_Reset_m803FCDAF3A12C2A8CC7AE7B959C8A019F1D4CC59 (U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__20_System_Collections_IEnumerator_Reset_m803FCDAF3A12C2A8CC7AE7B959C8A019F1D4CC59_RuntimeMethod_var)));
	}
}
// System.Object ARLocation.WorldVoxelController/<Start>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__20_System_Collections_IEnumerator_get_Current_m812D99C892C7C4A52DFA739A3C65BA559981F365 (U3CStartU3Ed__20_tBC91C2BA3682FCE4567CEAB39669F7C789CF1525 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldVoxelController/<StartWorld>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWorldU3Ed__19__ctor_m44505E7226447BDBEB5254C492A76937A8E3DD79 (U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ARLocation.WorldVoxelController/<StartWorld>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWorldU3Ed__19_System_IDisposable_Dispose_mCAB48FFD6DE743461B606E763022F88271A9FD39 (U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CStartWorldU3Ed__19_U3CU3Em__Finally1_mCAEEC868C6A45D9C6979E8606F80F91AA5DEC27A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean ARLocation.WorldVoxelController/<StartWorld>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartWorldU3Ed__19_MoveNext_mA8DBD86FD0B235278B36DD2C0B8922D6289A230F (U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF7B567D6013618D4E8519DC86A59419146F288D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1400D9FAE66248449C243D7B79C98808ABAE6D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0F87811BC0E10CC7E8F20605AD4EDFC2ABEEABE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8F5734F29914A3764B9A6FF3B6BF9C1AD3413E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEC2BDC0A6D8ED5399DA72C57F6E94474A490CF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27CCB8B2D6A34F683D60D39888014B4430DFCA53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral333AA93B5B0F0530BE31BB57E63354F308638852);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1944C88EB9D42DF0F57D0BC15630FBE8C2C218);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F25462398D4833AF5C6CEB35BBB3765CB5BC9CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89CC1AE032D869BCD1FF5BB2E8615B40F6BBE317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABC683BC608F72F9CBBA980D49B562A7D8111A23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6881B5FA66A845E6085CCCBEE53450D6186282B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE30F845AD6A2772EAE623C7F211CBF6ADBD5B271);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDD13E389B298768DBA3F3334418789F0FE7605B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * V_2 = NULL;
	WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * V_3 = NULL;
	double V_4 = 0.0;
	WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * V_5 = NULL;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 12> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0043;
				}
				case 1:
				{
					goto IL_0073;
				}
				case 2:
				{
					goto IL_00c8;
				}
				case 3:
				{
					goto IL_0152;
				}
				case 4:
				{
					goto IL_018e;
				}
				case 5:
				{
					goto IL_01c5;
				}
				case 6:
				{
					goto IL_0263;
				}
				case 7:
				{
					goto IL_02d1;
				}
				case 8:
				{
					goto IL_02fe;
				}
				case 9:
				{
					goto IL_0359;
				}
			}
		}

IL_003c:
		{
			V_0 = (bool)0;
			goto IL_036b;
		}

IL_0043:
		{
			__this->set_U3CU3E1__state_0((-1));
			// LogText($"Loading previous session file...");
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_3 = V_2;
			NullCheck(L_3);
			WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_3, _stringLiteral27CCB8B2D6A34F683D60D39888014B4430DFCA53, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(0.5f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.5f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_4);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_036b;
		}

IL_0073:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (RestoreWorldFromLocalStorage())
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_5 = V_2;
			NullCheck(L_5);
			bool L_6;
			L_6 = WorldVoxelController_RestoreWorldFromLocalStorage_mD055B24C7330AA06CA357609743D4C4A109968A8(L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_02a8;
			}
		}

IL_0085:
		{
			// LogText($"Restored world with {world.Chunks.Count} chunks");
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_7 = V_2;
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_8 = V_2;
			NullCheck(L_8);
			World_t131398ACB9EC339A34B2186311D06BF657FE6B2D * L_9 = L_8->get_world_8();
			NullCheck(L_9);
			List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * L_10 = L_9->get_Chunks_0();
			NullCheck(L_10);
			int32_t L_11;
			L_11 = List_1_get_Count_mEC2BDC0A6D8ED5399DA72C57F6E94474A490CF27_inline(L_10, /*hidden argument*/List_1_get_Count_mEC2BDC0A6D8ED5399DA72C57F6E94474A490CF27_RuntimeMethod_var);
			int32_t L_12 = L_11;
			RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
			String_t* L_14;
			L_14 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral89CC1AE032D869BCD1FF5BB2E8615B40F6BBE317, L_13, /*hidden argument*/NULL);
			NullCheck(L_7);
			WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_7, L_14, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(0.5f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (0.5f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_15);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_036b;
		}

IL_00c8:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (world.Chunks.Count > 0)
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_16 = V_2;
			NullCheck(L_16);
			World_t131398ACB9EC339A34B2186311D06BF657FE6B2D * L_17 = L_16->get_world_8();
			NullCheck(L_17);
			List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * L_18 = L_17->get_Chunks_0();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = List_1_get_Count_mEC2BDC0A6D8ED5399DA72C57F6E94474A490CF27_inline(L_18, /*hidden argument*/List_1_get_Count_mEC2BDC0A6D8ED5399DA72C57F6E94474A490CF27_RuntimeMethod_var);
			if ((((int32_t)L_19) <= ((int32_t)0)))
			{
				goto IL_02d8;
			}
		}

IL_00e5:
		{
			// var closestChunk = FindClosestChunk(state.CurrentLocation, out distance, 1000.0);
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_20 = V_2;
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_21 = V_2;
			NullCheck(L_21);
			StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B * L_22 = L_21->get_state_9();
			NullCheck(L_22);
			Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * L_23 = L_22->get_CurrentLocation_4();
			NullCheck(L_20);
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_24;
			L_24 = WorldVoxelController_FindClosestChunk_m92A2F3CE5A90869449AAAADECFA129FC92D6F533(L_20, L_23, (double*)(&V_4), (1000.0), /*hidden argument*/NULL);
			__this->set_U3CclosestChunkU3E5__2_3(L_24);
			// if (closestChunk != null)
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_25 = __this->get_U3CclosestChunkU3E5__2_3();
			if (!L_25)
			{
				goto IL_019c;
			}
		}

IL_0112:
		{
			// LogText($"Found closes chunk at {closestChunk.ChunkLocation}, d = {distance}");
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_26 = V_2;
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_27 = __this->get_U3CclosestChunkU3E5__2_3();
			NullCheck(L_27);
			Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * L_28 = L_27->get_ChunkLocation_1();
			double L_29 = V_4;
			double L_30 = L_29;
			RuntimeObject * L_31 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_30);
			String_t* L_32;
			L_32 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral7F25462398D4833AF5C6CEB35BBB3765CB5BC9CE, L_28, L_31, /*hidden argument*/NULL);
			NullCheck(L_26);
			WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_26, L_32, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(0.5f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_33 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_33, (0.5f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_33);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_036b;
		}

IL_0152:
		{
			__this->set_U3CU3E1__state_0((-1));
			// SetCurrentChunk(closestChunk);
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_34 = V_2;
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_35 = __this->get_U3CclosestChunkU3E5__2_3();
			NullCheck(L_34);
			WorldVoxelController_SetCurrentChunk_m90BF0EA6AE036163DA8307EC3D6A56963550E3F9(L_34, L_35, /*hidden argument*/NULL);
			// LogText($"Current Chunk Set");
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_36 = V_2;
			NullCheck(L_36);
			WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_36, _stringLiteral3C1944C88EB9D42DF0F57D0BC15630FBE8C2C218, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(0.5f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_37 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_37, (0.5f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_37);
			__this->set_U3CU3E1__state_0(4);
			V_0 = (bool)1;
			goto IL_036b;
		}

IL_018e:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield break;
			V_0 = (bool)0;
			goto IL_036b;
		}

IL_019c:
		{
			// LogText($"No chunk nearby!");
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_38 = V_2;
			NullCheck(L_38);
			WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_38, _stringLiteralEDD13E389B298768DBA3F3334418789F0FE7605B, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(0.5f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_39 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_39, (0.5f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_39);
			__this->set_U3CU3E1__state_0(5);
			V_0 = (bool)1;
			goto IL_036b;
		}

IL_01c5:
		{
			__this->set_U3CU3E1__state_0((-1));
			// var i = 0;
			__this->set_U3CiU3E5__3_4(0);
			// foreach (var c in world.Chunks)
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_40 = V_2;
			NullCheck(L_40);
			World_t131398ACB9EC339A34B2186311D06BF657FE6B2D * L_41 = L_40->get_world_8();
			NullCheck(L_41);
			List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * L_42 = L_41->get_Chunks_0();
			NullCheck(L_42);
			Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1  L_43;
			L_43 = List_1_GetEnumerator_m8F5734F29914A3764B9A6FF3B6BF9C1AD3413E06(L_42, /*hidden argument*/List_1_GetEnumerator_m8F5734F29914A3764B9A6FF3B6BF9C1AD3413E06_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_5(L_43);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_027d;
		}

IL_01f6:
		{
			// foreach (var c in world.Chunks)
			Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 * L_44 = __this->get_address_of_U3CU3E7__wrap3_5();
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_45;
			L_45 = Enumerator_get_Current_m1400D9FAE66248449C243D7B79C98808ABAE6D7E_inline((Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 *)L_44, /*hidden argument*/Enumerator_get_Current_m1400D9FAE66248449C243D7B79C98808ABAE6D7E_RuntimeMethod_var);
			V_5 = L_45;
			// var d = Location.HorizontalDistance(state.CurrentLocation, c.ChunkLocation);
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_46 = V_2;
			NullCheck(L_46);
			StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B * L_47 = L_46->get_state_9();
			NullCheck(L_47);
			Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * L_48 = L_47->get_CurrentLocation_4();
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_49 = V_5;
			NullCheck(L_49);
			Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * L_50 = L_49->get_ChunkLocation_1();
			double L_51;
			L_51 = Location_HorizontalDistance_mA940157B64A4EB2F2A7DE3210CF39BD5E76AC9DC(L_48, L_50, /*hidden argument*/NULL);
			V_6 = L_51;
			// LogText($"Chunk {i} at {c.ChunkLocation}, d = {d}");
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_52 = V_2;
			int32_t L_53 = __this->get_U3CiU3E5__3_4();
			int32_t L_54 = L_53;
			RuntimeObject * L_55 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_54);
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_56 = V_5;
			NullCheck(L_56);
			Location_tF89221C24420A624E9A69BB9E7D678B78ABCFF89 * L_57 = L_56->get_ChunkLocation_1();
			double L_58 = V_6;
			double L_59 = L_58;
			RuntimeObject * L_60 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_59);
			String_t* L_61;
			L_61 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralE30F845AD6A2772EAE623C7F211CBF6ADBD5B271, L_55, L_57, L_60, /*hidden argument*/NULL);
			NullCheck(L_52);
			WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_52, L_61, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(0.5f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_62 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_62, (0.5f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_62);
			__this->set_U3CU3E1__state_0(6);
			V_0 = (bool)1;
			goto IL_036b;
		}

IL_0263:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// i++;
			int32_t L_63 = __this->get_U3CiU3E5__3_4();
			V_7 = L_63;
			int32_t L_64 = V_7;
			__this->set_U3CiU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1)));
		}

IL_027d:
		{
			// foreach (var c in world.Chunks)
			Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 * L_65 = __this->get_address_of_U3CU3E7__wrap3_5();
			bool L_66;
			L_66 = Enumerator_MoveNext_mF7B567D6013618D4E8519DC86A59419146F288D2((Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 *)L_65, /*hidden argument*/Enumerator_MoveNext_mF7B567D6013618D4E8519DC86A59419146F288D2_RuntimeMethod_var);
			if (L_66)
			{
				goto IL_01f6;
			}
		}

IL_028d:
		{
			U3CStartWorldU3Ed__19_U3CU3Em__Finally1_mCAEEC868C6A45D9C6979E8606F80F91AA5DEC27A(__this, /*hidden argument*/NULL);
			Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 * L_67 = __this->get_address_of_U3CU3E7__wrap3_5();
			il2cpp_codegen_initobj(L_67, sizeof(Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 ));
			// }
			__this->set_U3CclosestChunkU3E5__2_3((WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F *)NULL);
			// }
			goto IL_02d8;
		}

IL_02a8:
		{
			// LogText($"No world to restore!");
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_68 = V_2;
			NullCheck(L_68);
			WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_68, _stringLiteralB6881B5FA66A845E6085CCCBEE53450D6186282B, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(0.5f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_69 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_69, (0.5f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_69);
			__this->set_U3CU3E1__state_0(7);
			V_0 = (bool)1;
			goto IL_036b;
		}

IL_02d1:
		{
			__this->set_U3CU3E1__state_0((-1));
		}

IL_02d8:
		{
			// LogText("Creating new chunk...");
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_70 = V_2;
			NullCheck(L_70);
			WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_70, _stringLiteralABC683BC608F72F9CBBA980D49B562A7D8111A23, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(0.5f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_71 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_71, (0.5f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_71);
			__this->set_U3CU3E1__state_0(8);
			V_0 = (bool)1;
			goto IL_036b;
		}

IL_02fe:
		{
			__this->set_U3CU3E1__state_0((-1));
			// var chunk = CreateTestChunk();
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_72 = V_2;
			NullCheck(L_72);
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_73;
			L_73 = WorldVoxelController_CreateTestChunk_m7975C5F12201DE1F272F976AAEB346431A83E31D(L_72, /*hidden argument*/NULL);
			V_3 = L_73;
			// chunk.IsFresh = true;
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_74 = V_3;
			NullCheck(L_74);
			L_74->set_IsFresh_8((bool)1);
			// world.Chunks.Add(chunk);
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_75 = V_2;
			NullCheck(L_75);
			World_t131398ACB9EC339A34B2186311D06BF657FE6B2D * L_76 = L_75->get_world_8();
			NullCheck(L_76);
			List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * L_77 = L_76->get_Chunks_0();
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_78 = V_3;
			NullCheck(L_77);
			List_1_Add_m0F87811BC0E10CC7E8F20605AD4EDFC2ABEEABE3(L_77, L_78, /*hidden argument*/List_1_Add_m0F87811BC0E10CC7E8F20605AD4EDFC2ABEEABE3_RuntimeMethod_var);
			// SetCurrentChunk(chunk);
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_79 = V_2;
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_80 = V_3;
			NullCheck(L_79);
			WorldVoxelController_SetCurrentChunk_m90BF0EA6AE036163DA8307EC3D6A56963550E3F9(L_79, L_80, /*hidden argument*/NULL);
			// UpdateChunkLocation(chunk);
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_81 = V_2;
			WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * L_82 = V_3;
			NullCheck(L_81);
			WorldVoxelController_UpdateChunkLocation_mC85A972D3ABD7EAD3946BABDB99EE34783A9752F(L_81, L_82, /*hidden argument*/NULL);
			// LogText("Added new chunk!");
			WorldVoxelController_tBE60EC4C79077AEED7070B50ACC3D6E28ACCD504 * L_83 = V_2;
			NullCheck(L_83);
			WorldVoxelController_LogText_mF0226E303DD9E2B4C1C391288AEEB30C58D59CDF(L_83, _stringLiteral333AA93B5B0F0530BE31BB57E63354F308638852, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(0.5f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_84 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_84, (0.5f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_84);
			__this->set_U3CU3E1__state_0(((int32_t)9));
			V_0 = (bool)1;
			goto IL_036b;
		}

IL_0359:
		{
			__this->set_U3CU3E1__state_0((-1));
			// }
			V_0 = (bool)0;
			goto IL_036b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0364;
	}

FAULT_0364:
	{ // begin fault (depth: 1)
		U3CStartWorldU3Ed__19_System_IDisposable_Dispose_mCAB48FFD6DE743461B606E763022F88271A9FD39(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(868)
	} // end fault
	IL2CPP_CLEANUP(868)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_036b:
	{
		bool L_85 = V_0;
		return L_85;
	}
}
// System.Void ARLocation.WorldVoxelController/<StartWorld>d__19::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWorldU3Ed__19_U3CU3Em__Finally1_mCAEEC868C6A45D9C6979E8606F80F91AA5DEC27A (U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m12560E7847FA30F26A0818360CEA16715E177C36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 * L_0 = __this->get_address_of_U3CU3E7__wrap3_5();
		Enumerator_Dispose_m12560E7847FA30F26A0818360CEA16715E177C36((Enumerator_t7A90A756489DBC0C007BC3889B1C18E32592CCB1 *)L_0, /*hidden argument*/Enumerator_Dispose_m12560E7847FA30F26A0818360CEA16715E177C36_RuntimeMethod_var);
		return;
	}
}
// System.Object ARLocation.WorldVoxelController/<StartWorld>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartWorldU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m78DF8260192FAFE310E5360CD8EF02F3B43A7A0F (U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ARLocation.WorldVoxelController/<StartWorld>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWorldU3Ed__19_System_Collections_IEnumerator_Reset_m9F662F7B9C885672EFDD4222565A5E937C44C05C (U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartWorldU3Ed__19_System_Collections_IEnumerator_Reset_m9F662F7B9C885672EFDD4222565A5E937C44C05C_RuntimeMethod_var)));
	}
}
// System.Object ARLocation.WorldVoxelController/<StartWorld>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartWorldU3Ed__19_System_Collections_IEnumerator_get_Current_m8BF6ABC362F36F4951247BF36FDCED71D631AD5D (U3CStartWorldU3Ed__19_t750B4DEF83B7D2F7C41FA78DDB0224ED46CDDA47 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldVoxelController/<WaitForLocationServices>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLocationServicesU3Ed__25__ctor_m1B02CDC690DCFEBCD395815B9C407A9A8DED5CD6 (U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ARLocation.WorldVoxelController/<WaitForLocationServices>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLocationServicesU3Ed__25_System_IDisposable_Dispose_m941288AD2EDFC591E0E75D745EEC5522E39D5A07 (U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ARLocation.WorldVoxelController/<WaitForLocationServices>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForLocationServicesU3Ed__25_MoveNext_m09511E8D57F3C2CBCF22E35EE6AE44DEE2758D9A (U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0039;
	}

IL_0019:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0039:
	{
		// while (!ARLocationProvider.Instance.IsEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD57C2738BF9AC395B2E74DD1B396BD5D364DD487_il2cpp_TypeInfo_var);
		ARLocationProvider_t47C5F7E2A5840C8C1056AA5CCEB31F2517BF4605 * L_4;
		L_4 = Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF(/*hidden argument*/Singleton_1_get_Instance_m1ED84734C5E51C5097F9BDC38872152904BDAEFF_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5;
		L_5 = ARLocationProvider_get_IsEnabled_mC73EBDEE1E8972552F737886D1C5D5C1F35EF4B4(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ARLocation.WorldVoxelController/<WaitForLocationServices>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForLocationServicesU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBC6B654B63F027360A6713FC61A90B19D573798B (U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ARLocation.WorldVoxelController/<WaitForLocationServices>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLocationServicesU3Ed__25_System_Collections_IEnumerator_Reset_mDA9FD6ADCE132254F59D30A14527991ACD9B4628 (U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForLocationServicesU3Ed__25_System_Collections_IEnumerator_Reset_mDA9FD6ADCE132254F59D30A14527991ACD9B4628_RuntimeMethod_var)));
	}
}
// System.Object ARLocation.WorldVoxelController/<WaitForLocationServices>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForLocationServicesU3Ed__25_System_Collections_IEnumerator_get_Current_mC431C45C29F5F8090EA663CAFCD0CB3650CCFA2C (U3CWaitForLocationServicesU3Ed__25_tB371C83EDE76677BE0191100440D26A065116399 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldVoxelController/ElementsSettingsData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementsSettingsData__ctor_mE2F408BEAA941CC5702D484D7F39F50F845F383F (ElementsSettingsData_t1BF525F1CF8587A51E8FF4865EBC3A838A049896 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ARLocation.WorldVoxelController/RaycastMarginSettings::IsInside(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastMarginSettings_IsInside_mB64C48C4E8BBC6BCB54C642CB186368BB4579DDB (RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		// if (v.x < Left || v.x > (1 - Right)) return false;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		float L_2 = __this->get_Left_2();
		if ((((float)L_1) < ((float)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___v0;
		float L_4 = L_3.get_x_0();
		float L_5 = __this->get_Right_3();
		if ((!(((float)L_4) > ((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5))))))
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		// if (v.x < Left || v.x > (1 - Right)) return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (v.y < Bottom || v.y > (1 - Top)) return false;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___v0;
		float L_7 = L_6.get_y_1();
		float L_8 = __this->get_Bottom_1();
		if ((((float)L_7) < ((float)L_8)))
		{
			goto IL_0046;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___v0;
		float L_10 = L_9.get_y_1();
		float L_11 = __this->get_Top_0();
		if ((!(((float)L_10) > ((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_11))))))
		{
			goto IL_0048;
		}
	}

IL_0046:
	{
		// if (v.y < Bottom || v.y > (1 - Top)) return false;
		return (bool)0;
	}

IL_0048:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void ARLocation.WorldVoxelController/RaycastMarginSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastMarginSettings__ctor_m6F0E0D38C1B89D6572FEA0FBA0A5A2F72BE221E3 (RaycastMarginSettings_t5F2E5AD4F0901CD2AF4AF6CE22D83841702CF7C1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldVoxelController/SettingsData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsData__ctor_m15DD50BEBEA7E45A1A96320861C450271EC7F6AF (SettingsData_t4D0AB04CBFD220F5166FDE8C1E01667EDD6309B0 * __this, const RuntimeMethod* method)
{
	{
		// public float CunkScale = 1.0f;
		__this->set_CunkScale_0((1.0f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldVoxelController/StateData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData__ctor_m2D6D776D64A8F62D4833880FCAC7D2A2EB9FBF92 (StateData_tE621759B6131200BBF65C0098F7E4E9EB690DC9B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldVoxelController/Voxel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voxel__ctor_m413316B409403E386CC24B8BF60C4FF88759FE4C (Voxel_t72AFF52D55DE700689025ED8B2A0B7AB8C0FA658 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ARLocation.WorldVoxelController/VoxelHit
IL2CPP_EXTERN_C void VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshal_pinvoke(const VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F& unmarshaled, VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Voxel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Voxel' of type 'VoxelHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Voxel_0Exception, NULL);
}
IL2CPP_EXTERN_C void VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshal_pinvoke_back(const VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshaled_pinvoke& marshaled, VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F& unmarshaled)
{
	Exception_t* ___Voxel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Voxel' of type 'VoxelHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Voxel_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ARLocation.WorldVoxelController/VoxelHit
IL2CPP_EXTERN_C void VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshal_pinvoke_cleanup(VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ARLocation.WorldVoxelController/VoxelHit
IL2CPP_EXTERN_C void VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshal_com(const VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F& unmarshaled, VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshaled_com& marshaled)
{
	Exception_t* ___Voxel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Voxel' of type 'VoxelHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Voxel_0Exception, NULL);
}
IL2CPP_EXTERN_C void VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshal_com_back(const VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshaled_com& marshaled, VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F& unmarshaled)
{
	Exception_t* ___Voxel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Voxel' of type 'VoxelHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Voxel_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ARLocation.WorldVoxelController/VoxelHit
IL2CPP_EXTERN_C void VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshal_com_cleanup(VoxelHit_tDA17F7B1F7827BD3B5A36C42963549EBB1F43F6F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldVoxelController/World::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World__ctor_m0F0882B2880598006E3D4C36F5DCFDF02DF31B9E (World_t131398ACB9EC339A34B2186311D06BF657FE6B2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1D39C41130702D0D26001266ACF2F0BEDA5E4B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WorldChunk> Chunks = new List<WorldChunk>();
		List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 * L_0 = (List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21 *)il2cpp_codegen_object_new(List_1_tA34D1A9827D8766A2C0C590822CCE99DDF8B6D21_il2cpp_TypeInfo_var);
		List_1__ctor_m1D39C41130702D0D26001266ACF2F0BEDA5E4B2E(L_0, /*hidden argument*/List_1__ctor_m1D39C41130702D0D26001266ACF2F0BEDA5E4B2E_RuntimeMethod_var);
		__this->set_Chunks_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARLocation.WorldVoxelController/WorldChunk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldChunk__ctor_mCD8E3D6647E214ACA2F4628DCBA78B20823F3918 (WorldChunk_tA6E01D891FFCD2923E6D6B8500CD0631DBF68C3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0EA351F74BEADC08106A9559B8FCA24AEFD8F4CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Voxel> Voxels = new List<Voxel>();
		List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C * L_0 = (List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C *)il2cpp_codegen_object_new(List_1_tD5690E7A9825F5488F5F6AE50E9229989F54C24C_il2cpp_TypeInfo_var);
		List_1__ctor_m0EA351F74BEADC08106A9559B8FCA24AEFD8F4CF(L_0, /*hidden argument*/List_1__ctor_m0EA351F74BEADC08106A9559B8FCA24AEFD8F4CF_RuntimeMethod_var);
		__this->set_Voxels_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void new_ShopController/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m372DE1D2DB9E339E52F99E6958E1AEB9C317B1A0 (U3CU3Ec__DisplayClass7_0_t4A3324C68B6C5F323F781DA6A96A3FB584D9AC51 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean new_ShopController/<>c__DisplayClass7_0::<OnAccessoryButtonClick>b__0(new_ItemType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3COnAccessoryButtonClickU3Eb__0_m0FDEE4257F6EB07F5B89A0C4CC88622B2400F24C (U3CU3Ec__DisplayClass7_0_t4A3324C68B6C5F323F781DA6A96A3FB584D9AC51 * __this, new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001 * ___s0, const RuntimeMethod* method)
{
	{
		// var _itemType = accessory.items_new.First(s => s.new_Name.Equals(itemName));
		new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001 * L_0 = ___s0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_new_Name_0();
		String_t* L_2 = __this->get_itemName_0();
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void new_ShopController/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mEB318D0649C608501B872CAD436E7D7B92A0D3B4 (U3CU3Ec__DisplayClass8_0_t1431B14CFCE89B4CFC7EC7CA0849CC16EE98EA71 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean new_ShopController/<>c__DisplayClass8_0::<OnFoodButtonClick>b__0(new_ItemType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3COnFoodButtonClickU3Eb__0_m441F6EA92E8D8C5D0EC6E1D3B4BECF372540B448 (U3CU3Ec__DisplayClass8_0_t1431B14CFCE89B4CFC7EC7CA0849CC16EE98EA71 * __this, new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001 * ___s0, const RuntimeMethod* method)
{
	{
		// var _itemType = food.items_new.First(s => s.new_Name.Equals(itemName.ToString()));
		new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001 * L_0 = ___s0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_new_Name_0();
		String_t* L_2 = __this->get_itemName_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void new_ShopController/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mEC4DA8F84BEF38E5101EBE7FBDA009024FECEFE4 (U3CU3Ec__DisplayClass9_0_tCC5124DF87EB6B2753BFE3B70C4E3B18A21B6B55 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean new_ShopController/<>c__DisplayClass9_0::<OnHousingButtonClick>b__0(new_ItemType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3COnHousingButtonClickU3Eb__0_mB55B2E11DDE1DCB78EA53293D916EB8FE5B33473 (U3CU3Ec__DisplayClass9_0_tCC5124DF87EB6B2753BFE3B70C4E3B18A21B6B55 * __this, new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001 * ___s0, const RuntimeMethod* method)
{
	{
		// var _itemType = housing.items_new.First(s => s.new_Name.Equals(itemName.ToString()));
		new_ItemType_t4B0CD76101C98FFCB56E6480E7511CCD1EBEF001 * L_0 = ___s0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_new_Name_0();
		String_t* L_2 = __this->get_itemName_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Unity.Constants/GUI/Colors::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Colors__cctor_mC3C959146F9C4D1CA5B50F879B8CE77CE5CE49AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Color EDITOR_TEXT_COLOR = new Color(0.7f, 0.7f, 0.7f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_0), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->set_EDITOR_TEXT_COLOR_0(L_0);
		// public static readonly Color EDITOR_NOTE_COLOR = new Color(1.0f, 0.8f, 0.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_1), (1.0f), (0.800000012f), (0.0f), /*hidden argument*/NULL);
		((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->set_EDITOR_NOTE_COLOR_1(L_1);
		// public static readonly Color EDITOR_FEATURE_DEFAULT_COLOR = new Color(0.1764706f, 0.8509805f, 1.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (0.176470593f), (0.85098052f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->set_EDITOR_FEATURE_DEFAULT_COLOR_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Unity.Constants/GUI/Styles::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Styles__cctor_m0C8D2A1B018039E7B1145FAF284772F28526F9D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly GUIStyle EDITOR_NOTE_STYLE = new GUIStyle { wordWrap = true, normal = { textColor = Colors.EDITOR_NOTE_COLOR } };
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_0, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = L_0;
		NullCheck(L_1);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_1, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = L_1;
		NullCheck(L_2);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_3;
		L_3 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->get_EDITOR_NOTE_COLOR_1();
		NullCheck(L_3);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_3, L_4, /*hidden argument*/NULL);
		((Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields*)il2cpp_codegen_static_fields_for(Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var))->set_EDITOR_NOTE_STYLE_0(L_2);
		// public static readonly GUIStyle EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE = new GUIStyle { wordWrap = true, normal = { textColor = Colors.EDITOR_TEXT_COLOR } };
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_5, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = L_5;
		NullCheck(L_6);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_6, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_7 = L_6;
		NullCheck(L_7);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_8;
		L_8 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_7, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->get_EDITOR_TEXT_COLOR_0();
		NullCheck(L_8);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_8, L_9, /*hidden argument*/NULL);
		((Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields*)il2cpp_codegen_static_fields_for(Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var))->set_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1(L_7);
		// public static readonly GUIStyle EDITOR_TEXTURE_THUMBNAIL_STYLE = new GUIStyle { imagePosition = ImagePosition.ImageOnly, wordWrap = true };
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_10 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_10, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11 = L_10;
		NullCheck(L_11);
		GUIStyle_set_imagePosition_mE650EF31D86572D41CAED2F20B098AE471AD04F4(L_11, 2, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_12 = L_11;
		NullCheck(L_12);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_12, (bool)1, /*hidden argument*/NULL);
		((Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields*)il2cpp_codegen_static_fields_for(Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var))->set_EDITOR_TEXTURE_THUMBNAIL_STYLE_2(L_12);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_mF777F1F3A620EBF1DB95F83812597F13D49295B2_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_havePropertiesChanged; }
		bool L_0 = __this->get_m_havePropertiesChanged_153();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_textInfo; }
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_0 = __this->get_m_textInfo_152();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WorldBuilder_get_Initialized_m730CE16D64EFEC58E91D46B41F9770733A2B3128_inline (WorldBuilder_t691400967398BB82C3F8221E09896EE668F3CC77 * __this, const RuntimeMethod* method)
{
	{
		// public bool Initialized => initialized;
		bool L_0 = __this->get_initialized_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
