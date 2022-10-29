#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Piece>
struct List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5;
// System.Collections.Generic.List`1<Segment>
struct List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Piece>
struct Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5;
// System.Predicate`1<Segment>
struct Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Piece[]
struct PieceU5BU5D_t479534D7088AF1EC1DE52B385871886428F8EA77;
// PieceSpawner[]
struct PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// Segment[]
struct SegmentU5BU5D_t77D45FB67A612A3C81D40BC2A9335A38F5FB1E8A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraMotor
struct CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// Coin
struct Coin_t6EC3724A41D53D737B499E377089217F0190C268;
// CoinSpawner
struct CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// FollowPlayer
struct FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GlacierSpawner
struct GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B;
// GoogleUtility
struct GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_tBFE8F3C727285D4A45458AAD496AFBB7816429AD;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_tD4A3FB7D57BFF95CCE85912B197D18627787D58D;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MobileInput
struct MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Piece
struct Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D;
// PieceSpawner
struct PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9;
// PlayerMotor
struct PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E;
// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Segment
struct Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameManager/<>c
struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5;
// LevelManager/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8;
// LevelManager/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral28E8C35CC1DB613EA8CE3AB5A9007B6FB3DD7F5C;
IL2CPP_EXTERN_C String_t* _stringLiteral2B15101EE2154B1B5947F613D8D6FE052BE0CE91;
IL2CPP_EXTERN_C String_t* _stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B;
IL2CPP_EXTERN_C String_t* _stringLiteral4092F3E355F4C91924AA3F56E8F8CEF3C314E8EF;
IL2CPP_EXTERN_C String_t* _stringLiteral43B922C95DCE7193C57AC8EE6A66B8303FFD2141;
IL2CPP_EXTERN_C String_t* _stringLiteral4BC63B107D4833D467C4780F5A9CBB0519FE5FCB;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1BAB0B18C7A55EB65D6F964C2DADEB0863418B;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral735E167E84756C49442B09965132F1EC53776D9A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B8986E15C0F7C222FF9FCD6B48A64E3899A31B0;
IL2CPP_EXTERN_C String_t* _stringLiteral9CADF05E1679B3182803A8EDB860A2CC2F7DDF4D;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE876F33DFA87362AD7ADC75E42CC5BD4C8508B;
IL2CPP_EXTERN_C String_t* _stringLiteralA17474CA0C600D38D899463D436DB6E0973F01A2;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B;
IL2CPP_EXTERN_C String_t* _stringLiteralC008E503687BA2A627379D4E257787AEA3506830;
IL2CPP_EXTERN_C String_t* _stringLiteralC8226A327309729FFBE322F20EEC90EF602EDCD2;
IL2CPP_EXTERN_C String_t* _stringLiteralCA5EF003C43724A30EBD3751479853EC15EA99A5;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
IL2CPP_EXTERN_C String_t* _stringLiteralE000FC52E4D241E3BAE704F479D74DE5B08D4353;
IL2CPP_EXTERN_C String_t* _stringLiteralE7696BC6563F761A22FAC1ADEB13FA4F4B9404DF;
IL2CPP_EXTERN_C String_t* _stringLiteralEA96601D79B410E78ED885E29D7A25794A833FD2;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPiece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D_mB14B4C048761A123DF14D9544B1C89E1D202D772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSegment_t7CA3839B9674B8E067BF27C840F7C019EE01118F_m5DA0F3EADE36E75F2B7D9240FEE3759DC30E7DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisPieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16_mA29C60F62599FF7A6816F0229E7F40C6A13AF84F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleUtility_U3COnConnectClickU3Eb__4_0_m8CB571582FBCEEA23619E54B410708964F3181C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_U3CSpawnSegmentU3Eb__28_0_m5ECAEE3148BE3915DEA717E5F018FE83CBCD940F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_U3CSpawnTransitionU3Eb__27_0_mE5C3D878060AD865B57EC0736134813FED479223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFDAAE4EBEAEBD968F7D8888FC81B9CA1B04BAFF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindAll_mC30A265141BEE402B7C13944596D8628F3DB1528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m7139FEF7EC0123D05C7653A6BCC1435BE5380DC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mA915FF20B5DC1362FE2F6EB84DB62EB60FC89411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m04C351BB086CA8DCA6985A2CD605013A80C82354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m98C966D0803B9E4F6A8D82E70D2A9F8E3531AE51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3970B19A0D9860D058B03FDE64D2B2EBB040DF52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0C8419CCE02FC59792FDA71A6A3174B0D3D3F5E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B_mF575CEA92C5937277946FCCA911F92360B4C2932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B_m98C19247A5F8C5D79D29A1F2AB90822867A4C826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CReportScoreU3Eb__36_0_mCF52128863636D6219765B755F9C408F2DE82DCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUnlockAchievementU3Eb__35_0_m1574CF5EF7023943B155153043A6D1463B364C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass30_0_U3CGetSegmentU3Eb__0_m01FB36ECC8B9A0AD1054A8E0C6043D5625BE62B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CGetPieceU3Eb__0_mE0E0A97CAA4716ED27BAD47E633C578E9AC5E114_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Piece>
struct List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PieceU5BU5D_t479534D7088AF1EC1DE52B385871886428F8EA77* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PieceU5BU5D_t479534D7088AF1EC1DE52B385871886428F8EA77* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Segment>
struct List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SegmentU5BU5D_t77D45FB67A612A3C81D40BC2A9335A38F5FB1E8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SegmentU5BU5D_t77D45FB67A612A3C81D40BC2A9335A38F5FB1E8A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// GPGSPenguRunSDIds
struct GPGSPenguRunSDIds_tC2933A0C222ABCC3C74CD633E46D0EB43C1701F4  : public RuntimeObject
{
};

// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9  : public RuntimeObject
{
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* ___mLocalUser_3;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	RuntimeObject* ___mClient_4;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___mIdMap_6;
};

struct PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9_StaticFields
{
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_1;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	RuntimeObject* ___sNearbyConnectionClient_2;
};

// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32  : public RuntimeObject
{
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean GooglePlayGames.PlayGamesUserProfile::mIsFriend
	bool ___mIsFriend_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_4;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mImage_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// GameManager/<>c
struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5  : public RuntimeObject
{
};

struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields
{
	// GameManager/<>c GameManager/<>c::<>9
	U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* ___U3CU3E9_0;
	// System.Action`1<System.Boolean> GameManager/<>c::<>9__35_0
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___U3CU3E9__35_0_1;
	// System.Action`1<System.Boolean> GameManager/<>c::<>9__36_0
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___U3CU3E9__36_0_2;
};

// LevelManager/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8  : public RuntimeObject
{
	// System.Int32 LevelManager/<>c__DisplayClass30_0::id
	int32_t ___id_0;
	// System.Boolean LevelManager/<>c__DisplayClass30_0::transition
	bool ___transition_1;
};

// LevelManager/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71  : public RuntimeObject
{
	// PieceType LevelManager/<>c__DisplayClass31_0::pieceType
	int32_t ___pieceType_0;
	// System.Int32 LevelManager/<>c__DisplayClass31_0::visualIndex
	int32_t ___visualIndex_1;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
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
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
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
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
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
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
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
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73  : public PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32
{
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesLocalUser::mPlatform
	PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* ___mPlatform_6;
	// GooglePlayGames.BasicApi.PlayerStats GooglePlayGames.PlayGamesLocalUser::mStats
	PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* ___mStats_7;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
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
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
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
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Predicate`1<Piece>
struct Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5  : public MulticastDelegate_t
{
};

// System.Predicate`1<Segment>
struct Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
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
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
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
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
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
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CameraMotor
struct CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraMotor::lookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAt_4;
	// UnityEngine.Vector3 CameraMotor::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
	// System.Single CameraMotor::smoothness
	float ___smoothness_6;
	// UnityEngine.Vector3 CameraMotor::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_7;
	// System.Boolean CameraMotor::<IsMoving>k__BackingField
	bool ___U3CIsMovingU3Ek__BackingField_8;
};

// Coin
struct Coin_t6EC3724A41D53D737B499E377089217F0190C268  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator Coin::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_4;
};

// CoinSpawner
struct CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CoinSpawner::maxCoins
	int32_t ___maxCoins_4;
	// System.Single CoinSpawner::chanceToSpawn
	float ___chanceToSpawn_5;
	// System.Boolean CoinSpawner::forceSpawnAll
	bool ___forceSpawnAll_6;
	// UnityEngine.GameObject[] CoinSpawner::coins
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___coins_7;
};

// FollowPlayer
struct FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FollowPlayer::playerPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerPosition_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameManager::COIN_SCORE_VALUE
	int32_t ___COIN_SCORE_VALUE_4;
	// System.Boolean GameManager::<GameStarted>k__BackingField
	bool ___U3CGameStartedU3Ek__BackingField_6;
	// System.Boolean GameManager::<IsDead>k__BackingField
	bool ___U3CIsDeadU3Ek__BackingField_7;
	// PlayerMotor GameManager::_playerMotor
	PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* ____playerMotor_8;
	// UnityEngine.GameObject GameManager::deadAnimPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deadAnimPanel_9;
	// TMPro.TextMeshProUGUI GameManager::deadScoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___deadScoreText_10;
	// TMPro.TextMeshProUGUI GameManager::deadCoinText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___deadCoinText_11;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_12;
	// UnityEngine.UI.Text GameManager::coinsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___coinsText_13;
	// TMPro.TextMeshProUGUI GameManager::highScoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___highScoreText_14;
	// UnityEngine.UI.Text GameManager::modifierText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___modifierText_15;
	// UnityEngine.Animator GameManager::gameMenu
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___gameMenu_16;
	// UnityEngine.Animator GameManager::MenuPanel
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___MenuPanel_17;
	// System.Single GameManager::score
	float ___score_18;
	// System.Int32 GameManager::coins
	int32_t ___coins_19;
	// System.Single GameManager::modifier
	float ___modifier_20;
	// System.Int32 GameManager::lastScore
	int32_t ___lastScore_21;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::<Instance>k__BackingField
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CInstanceU3Ek__BackingField_5;
};

// GlacierSpawner
struct GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GlacierSpawner::scrollSpeed
	float ___scrollSpeed_5;
	// System.Single GlacierSpawner::totalLength
	float ___totalLength_6;
	// System.Boolean GlacierSpawner::<IsScrolling>k__BackingField
	bool ___U3CIsScrollingU3Ek__BackingField_7;
	// UnityEngine.Transform GlacierSpawner::playerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTransform_8;
	// System.Single GlacierSpawner::scrollLocation
	float ___scrollLocation_9;
};

// GoogleUtility
struct GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GoogleUtility::connectedUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___connectedUI_4;
	// UnityEngine.GameObject GoogleUtility::disconnectedUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___disconnectedUI_5;
};

struct GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7_StaticFields
{
	// GoogleUtility GoogleUtility::instance
	GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7* ___instance_6;
};

// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean LevelManager::SHOW_COLLIDER
	bool ___SHOW_COLLIDER_5;
	// UnityEngine.Transform LevelManager::cameraContainer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraContainer_10;
	// System.Int32 LevelManager::amountOfACtiveSegments
	int32_t ___amountOfACtiveSegments_11;
	// System.Int32 LevelManager::continuousSegments
	int32_t ___continuousSegments_12;
	// System.Int32 LevelManager::currentSpawnZ
	int32_t ___currentSpawnZ_13;
	// System.Int32 LevelManager::y1
	int32_t ___y1_14;
	// System.Int32 LevelManager::y2
	int32_t ___y2_15;
	// System.Int32 LevelManager::y3
	int32_t ___y3_16;
	// System.Collections.Generic.List`1<Piece> LevelManager::longblocks
	List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* ___longblocks_17;
	// System.Collections.Generic.List`1<Piece> LevelManager::slides
	List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* ___slides_18;
	// System.Collections.Generic.List`1<Piece> LevelManager::ramps
	List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* ___ramps_19;
	// System.Collections.Generic.List`1<Piece> LevelManager::jumps
	List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* ___jumps_20;
	// System.Collections.Generic.List`1<Piece> LevelManager::pieces
	List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* ___pieces_21;
	// System.Collections.Generic.List`1<Segment> LevelManager::availableSegments
	List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* ___availableSegments_22;
	// System.Collections.Generic.List`1<Segment> LevelManager::availableTransitions
	List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* ___availableTransitions_23;
	// System.Collections.Generic.List`1<Segment> LevelManager::_activeSegments
	List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* ____activeSegments_24;
};

struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields
{
	// LevelManager LevelManager::<Instance>k__BackingField
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___U3CInstanceU3Ek__BackingField_4;
};

// MobileInput
struct MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 MobileInput::startTouch
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startTouch_6;
	// System.Boolean MobileInput::<Tap>k__BackingField
	bool ___U3CTapU3Ek__BackingField_7;
	// System.Boolean MobileInput::<SwipeLeft>k__BackingField
	bool ___U3CSwipeLeftU3Ek__BackingField_8;
	// System.Boolean MobileInput::<SwipeRight>k__BackingField
	bool ___U3CSwipeRightU3Ek__BackingField_9;
	// System.Boolean MobileInput::<SwipeDown>k__BackingField
	bool ___U3CSwipeDownU3Ek__BackingField_10;
	// System.Boolean MobileInput::<SwipeUp>k__BackingField
	bool ___U3CSwipeUpU3Ek__BackingField_11;
	// UnityEngine.Vector2 MobileInput::<SwipeDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CSwipeDeltaU3Ek__BackingField_12;
};

struct MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_StaticFields
{
	// MobileInput MobileInput::instance
	MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* ___instance_5;
};

// Piece
struct Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PieceType Piece::type
	int32_t ___type_4;
	// System.Int32 Piece::visualIndex
	int32_t ___visualIndex_5;
};

// PieceSpawner
struct PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PieceType PieceSpawner::type
	int32_t ___type_4;
	// Piece PieceSpawner::currentPiece
	Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* ___currentPiece_5;
};

// PlayerMotor
struct PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController PlayerMotor::_characterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____characterController_6;
	// UnityEngine.Animator PlayerMotor::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_7;
	// System.Single PlayerMotor::jumpForce
	float ___jumpForce_8;
	// System.Single PlayerMotor::gravity
	float ___gravity_9;
	// System.Single PlayerMotor::verticalVelocity
	float ___verticalVelocity_10;
	// System.Int32 PlayerMotor::desiredLane
	int32_t ___desiredLane_11;
	// System.Single PlayerMotor::originalSpeed
	float ___originalSpeed_12;
	// System.Single PlayerMotor::speed
	float ___speed_13;
	// System.Single PlayerMotor::lastSpeedIncreaseTime
	float ___lastSpeedIncreaseTime_14;
	// System.Single PlayerMotor::speedIncreaseTime
	float ___speedIncreaseTime_15;
	// System.Single PlayerMotor::speedIncreaseAmt
	float ___speedIncreaseAmt_16;
};

// Segment
struct Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Segment::<SegID>k__BackingField
	int32_t ___U3CSegIDU3Ek__BackingField_4;
	// System.Boolean Segment::transition
	bool ___transition_5;
	// System.Int32 Segment::length
	int32_t ___length_6;
	// System.Int32 Segment::beginY1
	int32_t ___beginY1_7;
	// System.Int32 Segment::beginY2
	int32_t ___beginY2_8;
	// System.Int32 Segment::beginY3
	int32_t ___beginY3_9;
	// System.Int32 Segment::endY1
	int32_t ___endY1_10;
	// System.Int32 Segment::endY2
	int32_t ___endY2_11;
	// System.Int32 Segment::endY3
	int32_t ___endY3_12;
	// PieceSpawner[] Segment::pieces
	PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* ___pieces_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
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
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
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
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
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
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
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
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
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
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
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
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
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
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
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
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* m_Items[1];

	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PieceSpawner[]
struct PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950  : public RuntimeArray
{
	ALIGN_FIELD (8) PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* m_Items[1];

	inline PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* List_1_FindAll_m87FB5AB35229967D01B9DF933BF70D470B32F0AF_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean CameraMotor::get_IsMoving()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraMotor_get_IsMoving_m2B463F9C901DEB4F59212A93C3DEC5DC3E348F7F_inline (CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// GameManager GameManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline (const RuntimeMethod* method) ;
// System.Void GameManager::GetCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GetCoin_m8673D26EEBB25E543892963098A781E4140A3443 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void CoinSpawner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSpawner_OnDisable_m5631BF15E51BF931D9ABE9723D8ADC280D73F92D (CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::set_IsDead(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_IsDead_m3B734400A0FA0BCBC9F0522504E1EECC11B549B0_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::set_Instance(GameManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void GameManager::UnlockAchievement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UnlockAchievement_mAD447DDA862AAB578156ABDD9C9598E7B3B1B1F1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, String_t* ___achievementID0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean GameManager::get_GameStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_GameStarted_mDFF998BEEE2BEF0FC60FBEA48917F082A24A9D4E_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean GameManager::get_IsDead()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_IsDead_m9F6E5E2B5F9F6EEAD6647D89B656374FC802EE0F_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GlacierSpawner>()
inline GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* Object_FindObjectOfType_TisGlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B_m98C19247A5F8C5D79D29A1F2AB90822867A4C826 (const RuntimeMethod* method)
{
	return ((  GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void GlacierSpawner::set_IsScrolling(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GlacierSpawner_set_IsScrolling_mA5E1CFF372212D96BA7C41F3A5A4ED5CDFCB7201_inline (GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<CameraMotor>()
inline CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* Object_FindObjectOfType_TisCameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B_mF575CEA92C5937277946FCCA911F92360B4C2932 (const RuntimeMethod* method)
{
	return ((  CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void CameraMotor::set_IsMoving(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraMotor_set_IsMoving_mB96AA82D623B948F6EBDFF2F06982F127D97AE5E_inline (CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___sourceText0, bool ___syncTextInputBox1, const RuntimeMethod* method) ;
// System.Void GameManager::ReportScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ReportScore_mE2C0E5FC57EFBDA74E5CF11D16DEE40F46212D1F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___score0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m2DD4FF5B07C196D209F4ED8EA8E86CD19207AABE (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_localUser_m7ED6D68F8CBFB7930562BE54601520AEED1D0CE4 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Social::ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ShowAchievementsUI_mEDAD5CD6256BAF4494D24A44243F00C918735B0A (const RuntimeMethod* method) ;
// System.Void UnityEngine.Social::ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ShowLeaderboardUI_m3C925568256ECA8A80A014F535453857DF8A1A8A (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Social::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ReportProgress_m3BA1C646169495DA260682E4C0ED8217C406A85E (String_t* ___achievementID0, double ___progress1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ReportScore_m00EA1D85C901167A6643A56FD090894649E4B4B6 (int64_t ___score0, String_t* ___board1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback2, const RuntimeMethod* method) ;
// System.Void GameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean GlacierSpawner::get_IsScrolling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GlacierSpawner_get_IsScrolling_m314A35ABA717651E25AC1607F60484D83E41787F_inline (GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* PlayGamesPlatform_Activate_mCEEFD9D718E345CAA8A2522C571FE44E78C5E18D (const RuntimeMethod* method) ;
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* PlayGamesPlatform_get_Instance_m4BF29E171708F7E38273294DB10F88D5A4A534EA (const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.ILocalUser GooglePlayGames.PlayGamesPlatform::get_localUser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_get_localUser_m4ED16ED7C1ABAA79D5E6CAD96C2DF563E5E79AA4_inline (PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* __this, const RuntimeMethod* method) ;
// System.Void GoogleUtility::OnConnectionResponse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleUtility_OnConnectionResponse_mCBFD6ADC1DDDE91426F625AE0C41B43A00B8ABF9 (GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7* __this, bool ___authenticated0, const RuntimeMethod* method) ;
// System.Void LevelManager::set_Instance(LevelManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LevelManager_set_Instance_m32465D1541AA5CA653E1CF33E9DF4BB91744B112_inline (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void LevelManager::SpawnTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SpawnTransition_mBB433B2FC823734D1406192CC8296676DCD44B7F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void LevelManager::GenerateSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_GenerateSegment_m538FAF99D8C2DBB281B6E5EBD449B2971DDCCABA (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void LevelManager::SpawnSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SpawnSegment_m87B063DD25BE1648527C10AEE4B1EB9ECA33B789 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Segment>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m200D4432D603B2EC4B1E746CD42F4143DF5DC97F (Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Segment>::FindAll(System.Predicate`1<T>)
inline List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* List_1_FindAll_mC30A265141BEE402B7C13944596D8628F3DB1528 (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* __this, Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B* ___match0, const RuntimeMethod* method)
{
	return ((  List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* (*) (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*, Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B*, const RuntimeMethod*))List_1_FindAll_m87FB5AB35229967D01B9DF933BF70D470B32F0AF_gshared)(__this, ___match0, method);
}
// System.Int32 System.Collections.Generic.List`1<Segment>::get_Count()
inline int32_t List_1_get_Count_m0C8419CCE02FC59792FDA71A6A3174B0D3D3F5E9_inline (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// Segment LevelManager::GetSegment(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* LevelManager_GetSegment_m5B2D544BFA0737B93C326C3D35C20876C2279C4D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ___id0, bool ___transition1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void Segment::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_Spawn_mC285322AF8DBEE591323298E9F0584AAE8B3E9A3 (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Segment>::get_Item(System.Int32)
inline Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* (*) (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Segment::DeSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_DeSpawn_m215BECFF973B6DAF17FED831B522F4E0D9AFDCE8 (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, const RuntimeMethod* method) ;
// System.Void LevelManager/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m66D1201FCC836D5DCC2F08857C1C7970F22F46BD (U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Segment>::Find(System.Predicate`1<T>)
inline Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* List_1_Find_mA915FF20B5DC1362FE2F6EB84DB62EB60FC89411 (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* __this, Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B* ___match0, const RuntimeMethod* method)
{
	return ((  Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* (*) (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*, Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<Segment>()
inline Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* GameObject_GetComponent_TisSegment_t7CA3839B9674B8E067BF27C840F7C019EE01118F_m5DA0F3EADE36E75F2B7D9240FEE3759DC30E7DF4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Segment::set_SegID(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Segment_set_SegID_m20F14EA6AFFE8F3543DD805314B9F8591E2B6C0D_inline (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Segment>::Insert(System.Int32,T)
inline void List_1_Insert_m04C351BB086CA8DCA6985A2CD605013A80C82354 (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* __this, int32_t ___index0, Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*, int32_t, Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean System.Collections.Generic.List`1<Segment>::Remove(T)
inline bool List_1_Remove_m98C966D0803B9E4F6A8D82E70D2A9F8E3531AE51 (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* __this, Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*, Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void LevelManager/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mB551059CB90D9548240CD8D755297EA003E5B5D9 (U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Piece>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mEDDFF9322DF9C54CDCE795CFDCD93D5E76EF2B0E (Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<Piece>::Find(System.Predicate`1<T>)
inline Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* List_1_Find_m7139FEF7EC0123D05C7653A6BCC1435BE5380DC0 (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* __this, Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5* ___match0, const RuntimeMethod* method)
{
	return ((  Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* (*) (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*, Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// T System.Collections.Generic.List`1<Piece>::get_Item(System.Int32)
inline Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323 (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* (*) (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<Piece>()
inline Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* GameObject_GetComponent_TisPiece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D_mB14B4C048761A123DF14D9544B1C89E1D202D772 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Piece>::Add(T)
inline void List_1_Add_mFDAAE4EBEAEBD968F7D8888FC81B9CA1B04BAFF0_inline (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* __this, Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*, Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Piece>::.ctor()
inline void List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Segment>::.ctor()
inline void List_1__ctor_m3970B19A0D9860D058B03FDE64D2B2EBB040DF52 (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 Segment::get_SegID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Segment_get_SegID_m96F95A2D0D3EF2EE2646959DB6A269D3F382A616_inline (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void MobileInput::set_SwipeUp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeUp_mC396440F0A77A108740D6BB19729914DFECD7E37_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MobileInput::set_SwipeDown(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeDown_m62372FD2B0FCEC705E33C21E336491566C642FEA_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MobileInput::set_SwipeRight(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeRight_mAD8F543E4AB71CDC2E63CB40CA4A6B4123587D0F_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MobileInput::set_SwipeLeft(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeLeft_m51EB21272FD0B699A96D6489CD51C4718C03C2D2_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MobileInput::set_Tap(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_Tap_mA613391B26889DB15038F1680FC3F8FFDFEB4BF5_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void MobileInput::set_SwipeDelta(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeDelta_mA6C72462A39FED08FF13B55872A0A2FB2C63E7EF_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 MobileInput::get_SwipeDelta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MobileInput_get_SwipeDelta_m3E237DC38A2CF21F671FA99B0F8D2ADD084B413A_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// LevelManager LevelManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* LevelManager_get_Instance_mBB4705A65BAF7611F34564F40E7163B7DB191855_inline (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Piece>::get_Count()
inline int32_t List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_inline (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// Piece LevelManager::GetPiece(PieceType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* LevelManager_GetPiece_m1C0FCD9E6589A77B1469FFE0772380A321D99DC3 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ___pieceType0, int32_t ___visualIndex1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void GameManager::UpdateModifier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateModifier_m9E11E7D6FA58D1F3B94937D179CC0BFA5024DED9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ___v0, const RuntimeMethod* method) ;
// MobileInput MobileInput::get_Singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* MobileInput_get_Singleton_mD065FEE12B9D8952F80EAF43B4F46E84B344A4DA_inline (const RuntimeMethod* method) ;
// System.Boolean MobileInput::get_SwipeLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeLeft_m2D97698752340D19FFF1918B437E67A26BC9C300_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) ;
// System.Void PlayerMotor::MoveLane(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_MoveLane_mA34AE1429C20CA44612F0FCE0C8AE8CE5CC03F98 (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, bool ___goingRight0, const RuntimeMethod* method) ;
// System.Boolean MobileInput::get_SwipeRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeRight_mDB48350A19AA82262E5A28098271641B2AE1C3AF_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerMotor::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMotor_IsGrounded_m4843E5E8153342B21998D39243474C75BE4881A2 (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean MobileInput::get_SwipeUp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeUp_mA33211E96AB0EB82DEB7CEB6225ABB8C0E50930F_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) ;
// System.Boolean MobileInput::get_SwipeDown()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeDown_m9EA2A5288B1CE614025A2DCDB08B90DC8C5BE6E7_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterController::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController_set_center_mF22160684B1FB453417D5457B14FEF437B5646EB (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.CharacterController::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterController::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController_set_height_m7F8FCAFE75439842BAC1FFA1E302EFD812D170FB (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m7A0FEA813B93A82713C06D8466F0A21325743488 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___maxDistance1, const RuntimeMethod* method) ;
// System.Void GameManager::set_GameStarted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_GameStarted_m20F9999F190DD9759B319992094A4FD2A851EA3A_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.ControllerColliderHit::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ControllerColliderHit_get_gameObject_m206F4915101DD080BF0EF53F3F2BE79404C5936F (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void PlayerMotor::Crash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Crash_mE388E44D9862BEF7CA17D3AAA5718CAAB99E7D3F (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, const RuntimeMethod* method) ;
// System.Void GameManager::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDeath_m3A37534F24D21A9A1101C992F674588A443DB1FF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<PieceSpawner>()
inline PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* GameObject_GetComponentsInChildren_TisPieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16_mA29C60F62599FF7A6816F0229E7F40C6A13AF84F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.MeshRenderer>()
inline MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void PieceSpawner::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceSpawner_Spawn_mD1E4BAA22CEE4B5379B00B3211D2FF6C24058CD3 (PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Boolean CameraMotor::get_IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMotor_get_IsMoving_m2B463F9C901DEB4F59212A93C3DEC5DC3E348F7F (CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* __this, const RuntimeMethod* method) 
{
	{
		// get; set;
		bool L_0 = __this->___U3CIsMovingU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void CameraMotor::set_IsMoving(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotor_set_IsMoving_mB96AA82D623B948F6EBDFF2F06982F127D97AE5E (CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// get; set;
		bool L_0 = ___value0;
		__this->___U3CIsMovingU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void CameraMotor::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotor_LateUpdate_mE5D8680F334CE89C61C5FA5EA317D57C01FB49CE (CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsMoving)
		bool L_0;
		L_0 = CameraMotor_get_IsMoving_m2B463F9C901DEB4F59212A93C3DEC5DC3E348F7F_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var cameraTargetPosition = lookAt.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___lookAt_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// cameraTargetPosition.x = 0f;
		(&V_0)->___x_2 = (0.0f);
		// transform.SetPositionAndRotation(
		//     Vector3.Lerp(transform.position, cameraTargetPosition, smoothness),
		//     Quaternion.Lerp(transform.rotation, Quaternion.Euler(rotation), .2f)
		// );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = __this->___smoothness_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_7, L_8, L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___rotation_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_12, L_14, (0.200000003f), NULL);
		NullCheck(L_5);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_5, L_10, L_15, NULL);
		// }
		return;
	}
}
// System.Void CameraMotor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotor__ctor_mDF1583DC215DB568204BBA2BABED2427B3D345FA (CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 offset = new(0.0f, 4.0f, -10.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (4.0f), (-10.0f), /*hidden argument*/NULL);
		__this->___offset_5 = L_0;
		// float smoothness = 2.0f;
		__this->___smoothness_6 = (2.0f);
		// public Vector3 rotation = new(35.0f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (35.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotation_7 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Coin::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin_Awake_m79B16C1579A2BAEA60D785D56C06868CAABB7CB9 (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Coin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin_OnEnable_m3CC5150591C851CAC62DB8FA6758405492651998 (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("Rotate");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_4;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B, NULL);
		// }
		return;
	}
}
// System.Void Coin::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin_OnTriggerEnter_m55737C4721183D93694F6189BA97E7D4E894C3A8 (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA17474CA0C600D38D899463D436DB6E0973F01A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// GameManager.Instance.GetCoin();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2;
		L_2 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline(NULL);
		NullCheck(L_2);
		GameManager_GetCoin_m8673D26EEBB25E543892963098A781E4140A3443(L_2, NULL);
		// GetComponent<Animator>().SetTrigger("Collect");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, _stringLiteralA17474CA0C600D38D899463D436DB6E0973F01A2, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Coin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin__ctor_mFEAAC42C1DAABB5CCCF4B39FCDBC5D0B0B8A183D (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CoinSpawner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSpawner_Awake_mC1EA07156917E1BC9AF4FB1A5D36851AD95BE8F2 (CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// coins = new GameObject[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___coins_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coins_7), (void*)L_2);
		// for (int i = 0; i < transform.childCount; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		// coins[i] = transform.GetChild(i).gameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___coins_7;
		int32_t L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, L_6, NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_8);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_8);
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_11, NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		// OnDisable();
		CoinSpawner_OnDisable_m5631BF15E51BF931D9ABE9723D8ADC280D73F92D(__this, NULL);
		// }
		return;
	}
}
// System.Void CoinSpawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSpawner_OnEnable_m6409289C9455FF06CADF975C2D89A22A7405C4C4 (CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (Random.Range(0.0f, 1.0f) > chanceToSpawn)
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		float L_1 = __this->___chanceToSpawn_5;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// if (forceSpawnAll)
		bool L_2 = __this->___forceSpawnAll_6;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// for (int i = 0; i < maxCoins; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_0024:
	{
		// coins[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___coins_7;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// for (int i = 0; i < maxCoins; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < maxCoins; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___maxCoins_4;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0040:
	{
		// int r = Random.Range(0, maxCoins);
		int32_t L_10 = __this->___maxCoins_4;
		int32_t L_11;
		L_11 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_10, NULL);
		V_1 = L_11;
		// for (int i = 0; i < r; i++)
		V_2 = 0;
		goto IL_0063;
	}

IL_0051:
	{
		// coins[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___coins_7;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// for (int i = 0; i < r; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0063:
	{
		// for (int i = 0; i < r; i++)
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0051;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CoinSpawner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSpawner_OnDisable_m5631BF15E51BF931D9ABE9723D8ADC280D73F92D (CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var go in coins)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___coins_7;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var go in coins)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// go.SetActive(false);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (var go in coins)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CoinSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSpawner__ctor_m39F93A345A61936CC765CA55CE65D9FAD6E28E70 (CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FollowPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_Start_m138697E0740DB2570074B2DB69AE32AF46A994F9 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerPosition = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___playerPosition_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerPosition_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void FollowPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_Update_m6CCD681461C8062489A435B45285AEE84F3B3DB6 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Vector3.forward * playerPosition.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___playerPosition_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_4, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer__ctor_mFEF642F6D296A2FBA30A01B637B6BD8DD2446114 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void GameManager::set_Instance(GameManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ___value0;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Boolean GameManager::get_GameStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_get_GameStarted_mDFF998BEEE2BEF0FC60FBEA48917F082A24A9D4E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get; internal set;
		bool L_0 = __this->___U3CGameStartedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void GameManager::set_GameStarted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_GameStarted_m20F9999F190DD9759B319992094A4FD2A851EA3A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// get; internal set;
		bool L_0 = ___value0;
		__this->___U3CGameStartedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean GameManager::get_IsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_get_IsDead_m9F6E5E2B5F9F6EEAD6647D89B656374FC802EE0F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get; internal set;
		bool L_0 = __this->___U3CIsDeadU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void GameManager::set_IsDead(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_IsDead_m3B734400A0FA0BCBC9F0522504E1EECC11B549B0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// get; internal set;
		bool L_0 = ___value0;
		__this->___U3CIsDeadU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4092F3E355F4C91924AA3F56E8F8CEF3C314E8EF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// IsDead = false;
		GameManager_set_IsDead_m3B734400A0FA0BCBC9F0522504E1EECC11B549B0_inline(__this, (bool)0, NULL);
		// Instance = this;
		GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF_inline(__this, NULL);
		// modifier = 1;
		__this->___modifier_20 = (1.0f);
		// highScoreText.text = PlayerPrefs.GetInt("HiScore").ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___highScoreText_14;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral4092F3E355F4C91924AA3F56E8F8CEF3C314E8EF, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void GameManager::GetCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GetCoin_m8673D26EEBB25E543892963098A781E4140A3443 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28E8C35CC1DB613EA8CE3AB5A9007B6FB3DD7F5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BC63B107D4833D467C4780F5A9CBB0519FE5FCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral735E167E84756C49442B09965132F1EC53776D9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE876F33DFA87362AD7ADC75E42CC5BD4C8508B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7696BC6563F761A22FAC1ADEB13FA4F4B9404DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// gameMenu.SetTrigger("Pick_Coin");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___gameMenu_16;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral4BC63B107D4833D467C4780F5A9CBB0519FE5FCB, NULL);
		// coins++;
		int32_t L_1 = __this->___coins_19;
		__this->___coins_19 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// switch (coins)
		int32_t L_2 = __this->___coins_19;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)50))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)100))))
		{
			goto IL_0055;
		}
	}
	{
		goto IL_007a;
	}

IL_0036:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)150))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)200))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_007a;
	}

IL_0048:
	{
		// UnlockAchievement(GPGSPenguRunSDIds.achievement_collect_50_coins);
		GameManager_UnlockAchievement_mAD447DDA862AAB578156ABDD9C9598E7B3B1B1F1(__this, _stringLiteral9CE876F33DFA87362AD7ADC75E42CC5BD4C8508B, NULL);
		// break;
		goto IL_007a;
	}

IL_0055:
	{
		// UnlockAchievement(GPGSPenguRunSDIds.achievement_collect_100_coins);
		GameManager_UnlockAchievement_mAD447DDA862AAB578156ABDD9C9598E7B3B1B1F1(__this, _stringLiteral735E167E84756C49442B09965132F1EC53776D9A, NULL);
		// break;
		goto IL_007a;
	}

IL_0062:
	{
		// UnlockAchievement(GPGSPenguRunSDIds.achievement_collect_150_coins);
		GameManager_UnlockAchievement_mAD447DDA862AAB578156ABDD9C9598E7B3B1B1F1(__this, _stringLiteralE7696BC6563F761A22FAC1ADEB13FA4F4B9404DF, NULL);
		// break;
		goto IL_007a;
	}

IL_006f:
	{
		// UnlockAchievement(GPGSPenguRunSDIds.achievement_collect_200_coins);
		GameManager_UnlockAchievement_mAD447DDA862AAB578156ABDD9C9598E7B3B1B1F1(__this, _stringLiteral28E8C35CC1DB613EA8CE3AB5A9007B6FB3DD7F5C, NULL);
	}

IL_007a:
	{
		// coinsText.text = coins.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___coinsText_13;
		int32_t* L_9 = (&__this->___coins_19);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// score += COIN_SCORE_VALUE;
		float L_11 = __this->___score_18;
		int32_t L_12 = __this->___COIN_SCORE_VALUE_4;
		__this->___score_18 = ((float)il2cpp_codegen_add(L_11, ((float)L_12)));
		// scoreText.text = score.ToString("0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___scoreText_12;
		float* L_14 = (&__this->___score_18);
		String_t* L_15;
		L_15 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_14, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
		// }
		return;
	}
}
// System.Void GameManager::UpdateModifier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateModifier_m9E11E7D6FA58D1F3B94937D179CC0BFA5024DED9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		s_Il2CppMethodInitialized = true;
	}
	{
		// modifier = 1.0f + v;
		float L_0 = ___v0;
		__this->___modifier_20 = ((float)il2cpp_codegen_add((1.0f), L_0));
		// modifierText.text = "x" + modifier.ToString("0.0"); // modifying the string to have only 1 decimal place.
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___modifierText_15;
		float* L_2 = (&__this->___modifier_20);
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_2, _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B_mF575CEA92C5937277946FCCA911F92360B4C2932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B_m98C19247A5F8C5D79D29A1F2AB90822867A4C826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA5EF003C43724A30EBD3751479853EC15EA99A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameStarted && !IsDead)
		bool L_0;
		L_0 = GameManager_get_GameStarted_mDFF998BEEE2BEF0FC60FBEA48917F082A24A9D4E_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		bool L_1;
		L_1 = GameManager_get_IsDead_m9F6E5E2B5F9F6EEAD6647D89B656374FC802EE0F_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0086;
		}
	}
	{
		// MenuPanel.SetTrigger("Hide");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___MenuPanel_17;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteralCA5EF003C43724A30EBD3751479853EC15EA99A5, NULL);
		// FindObjectOfType<GlacierSpawner>().IsScrolling = true;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* L_3;
		L_3 = Object_FindObjectOfType_TisGlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B_m98C19247A5F8C5D79D29A1F2AB90822867A4C826(Object_FindObjectOfType_TisGlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B_m98C19247A5F8C5D79D29A1F2AB90822867A4C826_RuntimeMethod_var);
		NullCheck(L_3);
		GlacierSpawner_set_IsScrolling_mA5E1CFF372212D96BA7C41F3A5A4ED5CDFCB7201_inline(L_3, (bool)1, NULL);
		// FindObjectOfType<CameraMotor>().IsMoving = true;
		CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* L_4;
		L_4 = Object_FindObjectOfType_TisCameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B_mF575CEA92C5937277946FCCA911F92360B4C2932(Object_FindObjectOfType_TisCameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B_mF575CEA92C5937277946FCCA911F92360B4C2932_RuntimeMethod_var);
		NullCheck(L_4);
		CameraMotor_set_IsMoving_mB96AA82D623B948F6EBDFF2F06982F127D97AE5E_inline(L_4, (bool)1, NULL);
		// score += Time.deltaTime * modifier;
		float L_5 = __this->___score_18;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_7 = __this->___modifier_20;
		__this->___score_18 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_6, L_7))));
		// if (lastScore != (int) score)
		int32_t L_8 = __this->___lastScore_21;
		float L_9 = __this->___score_18;
		if ((((int32_t)L_8) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9))))
		{
			goto IL_0086;
		}
	}
	{
		// lastScore = (int) score;
		float L_10 = __this->___score_18;
		__this->___lastScore_21 = il2cpp_codegen_cast_double_to_int<int32_t>(L_10);
		// scoreText.text = score.ToString("0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___scoreText_12;
		float* L_12 = (&__this->___score_18);
		String_t* L_13;
		L_13 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_12, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void GameManager::OnPlayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayButton_m90FD6247B7DF461542CA0985A90B6456AE7D7AB3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.SceneManagement.SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDeath_m3A37534F24D21A9A1101C992F674588A443DB1FF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B_m98C19247A5F8C5D79D29A1F2AB90822867A4C826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4092F3E355F4C91924AA3F56E8F8CEF3C314E8EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* G_B2_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B1_1 = NULL;
	{
		// IsDead = true;
		GameManager_set_IsDead_m3B734400A0FA0BCBC9F0522504E1EECC11B549B0_inline(__this, (bool)1, NULL);
		// FindObjectOfType<GlacierSpawner>().IsScrolling = false;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* L_0;
		L_0 = Object_FindObjectOfType_TisGlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B_m98C19247A5F8C5D79D29A1F2AB90822867A4C826(Object_FindObjectOfType_TisGlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B_m98C19247A5F8C5D79D29A1F2AB90822867A4C826_RuntimeMethod_var);
		NullCheck(L_0);
		GlacierSpawner_set_IsScrolling_mA5E1CFF372212D96BA7C41F3A5A4ED5CDFCB7201_inline(L_0, (bool)0, NULL);
		// deadAnimPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___deadAnimPanel_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// deadScoreText.SetText(score.ToString("0"));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___deadScoreText_10;
		float* L_3 = (&__this->___score_18);
		String_t* L_4;
		L_4 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_3, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		NullCheck(L_2);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_2, L_4, (bool)1, NULL);
		// deadCoinText.SetText(coins + "");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___deadCoinText_11;
		int32_t* L_6 = (&__this->___coins_19);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		String_t* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_5;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_5;
			goto IL_0054;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0054:
	{
		NullCheck(G_B2_1);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(G_B2_1, G_B2_0, (bool)1, NULL);
		// if (score > PlayerPrefs.GetInt("HiScore"))
		float L_9 = __this->___score_18;
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral4092F3E355F4C91924AA3F56E8F8CEF3C314E8EF, NULL);
		if ((!(((float)L_9) > ((float)((float)L_10)))))
		{
			goto IL_00a7;
		}
	}
	{
		// ReportScore((int) score);
		float L_11 = __this->___score_18;
		GameManager_ReportScore_mE2C0E5FC57EFBDA74E5CF11D16DEE40F46212D1F(__this, il2cpp_codegen_cast_double_to_int<int32_t>(L_11), NULL);
		// float s = score;
		float L_12 = __this->___score_18;
		V_0 = L_12;
		// if (s % 1 == 0)
		float L_13 = V_0;
		if ((!(((float)(fmodf(L_13, (1.0f)))) == ((float)(0.0f)))))
		{
			goto IL_0097;
		}
	}
	{
		// s += 1;
		float L_14 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_14, (1.0f)));
	}

IL_0097:
	{
		// PlayerPrefs.SetInt("HiScore", System.Convert.ToInt32(s));
		float L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = Convert_ToInt32_m2DD4FF5B07C196D209F4ED8EA8E86CD19207AABE(L_15, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral4092F3E355F4C91924AA3F56E8F8CEF3C314E8EF, L_16, NULL);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void GameManager::OnAchievementClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnAchievementClick_m042D2C2DF07F615A8EC51369620077CCABE9943A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Social.localUser.authenticated)
		RuntimeObject* L_0;
		L_0 = Social_get_localUser_m7ED6D68F8CBFB7930562BE54601520AEED1D0CE4(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// Social.ShowAchievementsUI();
		Social_ShowAchievementsUI_mEDAD5CD6256BAF4494D24A44243F00C918735B0A(NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameManager::OnLeaderboardClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnLeaderboardClick_m9F9E35055CD441ED772861D9D89B2613BF6686C1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Social.localUser.authenticated)
		RuntimeObject* L_0;
		L_0 = Social_get_localUser_m7ED6D68F8CBFB7930562BE54601520AEED1D0CE4(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// Social.ShowLeaderboardUI();
		Social_ShowLeaderboardUI_m3C925568256ECA8A80A014F535453857DF8A1A8A(NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameManager::UnlockAchievement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UnlockAchievement_mAD447DDA862AAB578156ABDD9C9598E7B3B1B1F1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, String_t* ___achievementID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUnlockAchievementU3Eb__35_0_m1574CF5EF7023943B155153043A6D1463B364C66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	double G_B2_1 = 0.0;
	String_t* G_B2_2 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	double G_B1_1 = 0.0;
	String_t* G_B1_2 = NULL;
	{
		// Social.ReportProgress(achievementID, 100.0f, (bool success) =>
		// {
		//     Debug.Log("Achievement Unlocked");
		// });
		String_t* L_0 = ___achievementID0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__35_0_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = (100.0);
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = (100.0);
			G_B2_2 = L_0;
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_3 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CUnlockAchievementU3Eb__35_0_m1574CF5EF7023943B155153043A6D1463B364C66_RuntimeMethod_var), NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = L_4;
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__35_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__35_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0029:
	{
		Social_ReportProgress_m3BA1C646169495DA260682E4C0ED8217C406A85E(G_B2_2, G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ReportScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ReportScore_mE2C0E5FC57EFBDA74E5CF11D16DEE40F46212D1F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CReportScoreU3Eb__36_0_mCF52128863636D6219765B755F9C408F2DE82DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8226A327309729FFBE322F20EEC90EF602EDCD2);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	int64_t G_B2_2 = 0;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	int64_t G_B1_2 = 0;
	{
		// Social.ReportScore(score, GPGSPenguRunSDIds.leaderboard_pengurunsd_leaderboard,
		//     (bool success) =>
		//     {
		//         Debug.Log("Reported score to leaderboard" + success);
		//     });
		int32_t L_0 = ___score0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__36_0_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteralC8226A327309729FFBE322F20EEC90EF602EDCD2;
		G_B1_2 = ((int64_t)L_0);
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteralC8226A327309729FFBE322F20EEC90EF602EDCD2;
			G_B2_2 = ((int64_t)L_0);
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_3 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CReportScoreU3Eb__36_0_mCF52128863636D6219765B755F9C408F2DE82DCC_RuntimeMethod_var), NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = L_4;
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__36_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__36_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		Social_ReportScore_m00EA1D85C901167A6643A56FD090894649E4B4B6(G_B2_2, G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// private readonly int COIN_SCORE_VALUE = 5;
		__this->___COIN_SCORE_VALUE_4 = 5;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9E093D331C270DADD1A4C76D46C227AF4B4AA4D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_0 = (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5*)il2cpp_codegen_object_new(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7(L_0, NULL);
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GameManager/<>c::<UnlockAchievement>b__35_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUnlockAchievementU3Eb__35_0_m1574CF5EF7023943B155153043A6D1463B364C66 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, bool ___success0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B8986E15C0F7C222FF9FCD6B48A64E3899A31B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Achievement Unlocked");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7B8986E15C0F7C222FF9FCD6B48A64E3899A31B0, NULL);
		// });
		return;
	}
}
// System.Void GameManager/<>c::<ReportScore>b__36_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CReportScoreU3Eb__36_0_mCF52128863636D6219765B755F9C408F2DE82DCC (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, bool ___success0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43B922C95DCE7193C57AC8EE6A66B8303FFD2141);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Reported score to leaderboard" + success);
		String_t* L_0;
		L_0 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___success0), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral43B922C95DCE7193C57AC8EE6A66B8303FFD2141, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
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
// System.Void GlacierSpawner::set_IsScrolling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlacierSpawner_set_IsScrolling_mA5E1CFF372212D96BA7C41F3A5A4ED5CDFCB7201 (GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set; get;
		bool L_0 = ___value0;
		__this->___U3CIsScrollingU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean GlacierSpawner::get_IsScrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlacierSpawner_get_IsScrolling_m314A35ABA717651E25AC1607F60484D83E41787F (GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* __this, const RuntimeMethod* method) 
{
	{
		// set; get;
		bool L_0 = __this->___U3CIsScrollingU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void GlacierSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlacierSpawner_Start_m929B6F61D17B5514134CDAE53E245B4B36F99BF3 (GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerTransform = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___playerTransform_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerTransform_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void GlacierSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlacierSpawner_Update_m3B739017C4A3DC52ADB2AD79760E488AA827FF1D (GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (IsScrolling)
		bool L_0;
		L_0 = GlacierSpawner_get_IsScrolling_m314A35ABA717651E25AC1607F60484D83E41787F_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0118;
		}
	}
	{
		// scrollLocation += scrollSpeed * Time.deltaTime;
		float L_1 = __this->___scrollLocation_9;
		float L_2 = __this->___scrollSpeed_5;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___scrollLocation_9 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// Vector3 newLocation = (playerTransform.position.z + scrollLocation) * Vector3.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playerTransform_8;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___z_4;
		float L_7 = __this->___scrollLocation_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_add(L_6, L_7)), L_8, NULL);
		V_0 = L_9;
		// transform.position = newLocation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// if (transform.GetChild(0).transform.position.z < playerTransform.position.z - DISTANCE_TO_RESPAWN)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_12, 0, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___z_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___playerTransform_8;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___z_4;
		if ((!(((float)L_16) < ((float)((float)il2cpp_codegen_subtract(L_19, (10.0f)))))))
		{
			goto IL_0118;
		}
	}
	{
		// transform.GetChild(0).localPosition += Vector3.forward * totalLength;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_20, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_25 = __this->___totalLength_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_26, NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_27, NULL);
		// transform.GetChild(0).SetSiblingIndex(transform.childCount);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_28, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_30, NULL);
		NullCheck(L_29);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_29, L_31, NULL);
		// transform.GetChild(0).localPosition += Vector3.forward * totalLength;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_32, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = L_33;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_37 = __this->___totalLength_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_35, L_38, NULL);
		NullCheck(L_34);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_34, L_39, NULL);
		// transform.GetChild(0).SetSiblingIndex(transform.childCount);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_40, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_42, NULL);
		NullCheck(L_41);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_41, L_43, NULL);
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void GlacierSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlacierSpawner__ctor_mA5447812A0BEE80AADC04E4FC7E440F89463C4E9 (GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* __this, const RuntimeMethod* method) 
{
	{
		// public float scrollSpeed = -6.0f;
		__this->___scrollSpeed_5 = (-6.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GoogleUtility::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleUtility_Awake_mB2C1C272540F1ED115870CDF8052A1000A44E83A (GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7* L_0 = ((GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7_StaticFields*)il2cpp_codegen_static_fields_for(GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// instance = this;
		((GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7_StaticFields*)il2cpp_codegen_static_fields_for(GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7_il2cpp_TypeInfo_var))->___instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7_StaticFields*)il2cpp_codegen_static_fields_for(GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7_il2cpp_TypeInfo_var))->___instance_6), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		goto IL_002b;
	}

IL_0020:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002b:
	{
		// PlayGamesPlatform.Activate();
		PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* L_4;
		L_4 = PlayGamesPlatform_Activate_mCEEFD9D718E345CAA8A2522C571FE44E78C5E18D(NULL);
		// OnConnectionResponse(PlayGamesPlatform.Instance.localUser.authenticated);
		PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* L_5;
		L_5 = PlayGamesPlatform_get_Instance_m4BF29E171708F7E38273294DB10F88D5A4A534EA(NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = PlayGamesPlatform_get_localUser_m4ED16ED7C1ABAA79D5E6CAD96C2DF563E5E79AA4_inline(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var, L_6);
		GoogleUtility_OnConnectionResponse_mCBFD6ADC1DDDE91426F625AE0C41B43A00B8ABF9(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void GoogleUtility::OnConnectClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleUtility_OnConnectClick_m707915F539BEDCA81EF55E2DEF725784C9AA8269 (GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleUtility_U3COnConnectClickU3Eb__4_0_m8CB571582FBCEEA23619E54B410708964F3181C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Social.localUser.Authenticate((bool success) =>
		// {
		//     OnConnectionResponse(success);
		// });
		RuntimeObject* L_0;
		L_0 = Social_get_localUser_m7ED6D68F8CBFB7930562BE54601520AEED1D0CE4(NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_1, __this, (intptr_t)((void*)GoogleUtility_U3COnConnectClickU3Eb__4_0_m8CB571582FBCEEA23619E54B410708964F3181C7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void GoogleUtility::OnConnectionResponse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleUtility_OnConnectionResponse_mCBFD6ADC1DDDE91426F625AE0C41B43A00B8ABF9 (GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7* __this, bool ___authenticated0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE000FC52E4D241E3BAE704F479D74DE5B08D4353);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (authenticated)
		bool L_0 = ___authenticated0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// GameManager.Instance.UnlockAchievement(GPGSPenguRunSDIds.achievement_log_in);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline(NULL);
		NullCheck(L_1);
		GameManager_UnlockAchievement_mAD447DDA862AAB578156ABDD9C9598E7B3B1B1F1(L_1, _stringLiteralE000FC52E4D241E3BAE704F479D74DE5B08D4353, NULL);
		// disconnectedUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___disconnectedUI_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// connectedUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___connectedUI_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		return;
	}

IL_002b:
	{
		// disconnectedUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___disconnectedUI_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// connectedUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___connectedUI_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GoogleUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleUtility__ctor_m1C09E43B5E016E5E46CF499F75C008AEFC844BF1 (GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GoogleUtility::<OnConnectClick>b__4_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleUtility_U3COnConnectClickU3Eb__4_0_m8CB571582FBCEEA23619E54B410708964F3181C7 (GoogleUtility_tF0FCB10DA59CE1E764E1C65D2DE0CCE6AA5BD4B7* __this, bool ___success0, const RuntimeMethod* method) 
{
	{
		// OnConnectionResponse(success);
		bool L_0 = ___success0;
		GoogleUtility_OnConnectionResponse_mCBFD6ADC1DDDE91426F625AE0C41B43A00B8ABF9(__this, L_0, NULL);
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
// LevelManager LevelManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* LevelManager_get_Instance_mBB4705A65BAF7611F34564F40E7163B7DB191855 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void LevelManager::set_Instance(LevelManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_set_Instance_m32465D1541AA5CA653E1CF33E9DF4BB91744B112 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = ___value0;
		((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void LevelManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Awake_m5DEB1CF05B334C6E29A91D604623C1B8401AE09C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// Instance = this;
		LevelManager_set_Instance_m32465D1541AA5CA653E1CF33E9DF4BB91744B112_inline(__this, NULL);
		// cameraContainer = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___cameraContainer_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraContainer_10), (void*)L_1);
		// currentSpawnZ = 0;
		__this->___currentSpawnZ_13 = 0;
		// }
		return;
	}
}
// System.Void LevelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Start_mA7A45D9D0CBA8784B87F70B204C19A2AAC234D42 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < INITIAL_SEGMENTS; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// if (i < INITIAL_TRANSITION_SEGMETS)
		int32_t L_0 = V_0;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		// SpawnTransition();
		LevelManager_SpawnTransition_mBB433B2FC823734D1406192CC8296676DCD44B7F(__this, NULL);
		goto IL_0016;
	}

IL_0010:
	{
		// GenerateSegment();
		LevelManager_GenerateSegment_m538FAF99D8C2DBB281B6E5EBD449B2971DDCCABA(__this, NULL);
	}

IL_0016:
	{
		// for (int i = 0; i < INITIAL_SEGMENTS; i++)
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < INITIAL_SEGMENTS; i++)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelManager::GenerateSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_GenerateSegment_m538FAF99D8C2DBB281B6E5EBD449B2971DDCCABA (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// SpawnSegment();
		LevelManager_SpawnSegment_m87B063DD25BE1648527C10AEE4B1EB9ECA33B789(__this, NULL);
		// if (Random.Range(0f, 1f) < continuousSegments * 0.25f)
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		int32_t L_1 = __this->___continuousSegments_12;
		if ((!(((float)L_0) < ((float)((float)il2cpp_codegen_multiply(((float)L_1), (0.25f)))))))
		{
			goto IL_0032;
		}
	}
	{
		// continuousSegments = 0;
		__this->___continuousSegments_12 = 0;
		// SpawnTransition();
		LevelManager_SpawnTransition_mBB433B2FC823734D1406192CC8296676DCD44B7F(__this, NULL);
		return;
	}

IL_0032:
	{
		// continuousSegments++;
		int32_t L_2 = __this->___continuousSegments_12;
		__this->___continuousSegments_12 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// }
		return;
	}
}
// System.Void LevelManager::SpawnTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SpawnTransition_mBB433B2FC823734D1406192CC8296676DCD44B7F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_U3CSpawnTransitionU3Eb__27_0_mE5C3D878060AD865B57EC0736134813FED479223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindAll_mC30A265141BEE402B7C13944596D8628F3DB1528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0C8419CCE02FC59792FDA71A6A3174B0D3D3F5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* V_0 = NULL;
	int32_t V_1 = 0;
	Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* V_2 = NULL;
	{
		// var possibleTransition = availableTransitions.FindAll(x => x.beginY1 == y1 || x.beginY2 == y2 || x.beginY3 == y3);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_0 = __this->___availableTransitions_23;
		Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B* L_1 = (Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B*)il2cpp_codegen_object_new(Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Predicate_1__ctor_m200D4432D603B2EC4B1E746CD42F4143DF5DC97F(L_1, __this, (intptr_t)((void*)LevelManager_U3CSpawnTransitionU3Eb__27_0_mE5C3D878060AD865B57EC0736134813FED479223_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_2;
		L_2 = List_1_FindAll_mC30A265141BEE402B7C13944596D8628F3DB1528(L_0, L_1, List_1_FindAll_mC30A265141BEE402B7C13944596D8628F3DB1528_RuntimeMethod_var);
		V_0 = L_2;
		// int id = Random.Range(0, possibleTransition.Count);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m0C8419CCE02FC59792FDA71A6A3174B0D3D3F5E9_inline(L_3, List_1_get_Count_m0C8419CCE02FC59792FDA71A6A3174B0D3D3F5E9_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_4, NULL);
		V_1 = L_5;
		// var s = GetSegment(id, true);
		int32_t L_6 = V_1;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_7;
		L_7 = LevelManager_GetSegment_m5B2D544BFA0737B93C326C3D35C20876C2279C4D(__this, L_6, (bool)1, NULL);
		V_2 = L_7;
		// y1 = s.endY1;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = L_8->___endY1_10;
		__this->___y1_14 = L_9;
		// y2 = s.endY2;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___endY2_11;
		__this->___y2_15 = L_11;
		// y3 = s.endY3;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___endY3_12;
		__this->___y3_16 = L_13;
		// s.transform.SetParent(transform);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_14 = V_2;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_15, L_16, NULL);
		// s.transform.localPosition = Vector3.forward * currentSpawnZ;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_17 = V_2;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		int32_t L_20 = __this->___currentSpawnZ_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, ((float)L_20), NULL);
		NullCheck(L_18);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_21, NULL);
		// currentSpawnZ += s.length;
		int32_t L_22 = __this->___currentSpawnZ_13;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = L_23->___length_6;
		__this->___currentSpawnZ_13 = ((int32_t)il2cpp_codegen_add(L_22, L_24));
		// amountOfACtiveSegments++;
		int32_t L_25 = __this->___amountOfACtiveSegments_11;
		__this->___amountOfACtiveSegments_11 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		// s.Spawn();
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_26 = V_2;
		NullCheck(L_26);
		Segment_Spawn_mC285322AF8DBEE591323298E9F0584AAE8B3E9A3(L_26, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::SpawnSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SpawnSegment_m87B063DD25BE1648527C10AEE4B1EB9ECA33B789 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_U3CSpawnSegmentU3Eb__28_0_m5ECAEE3148BE3915DEA717E5F018FE83CBCD940F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindAll_mC30A265141BEE402B7C13944596D8628F3DB1528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0C8419CCE02FC59792FDA71A6A3174B0D3D3F5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* V_0 = NULL;
	int32_t V_1 = 0;
	Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* V_2 = NULL;
	{
		// var possibleSeg = availableSegments.FindAll(x => x.beginY1 == y1 || x.beginY2 == y2 || x.beginY3 == y3);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_0 = __this->___availableSegments_22;
		Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B* L_1 = (Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B*)il2cpp_codegen_object_new(Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Predicate_1__ctor_m200D4432D603B2EC4B1E746CD42F4143DF5DC97F(L_1, __this, (intptr_t)((void*)LevelManager_U3CSpawnSegmentU3Eb__28_0_m5ECAEE3148BE3915DEA717E5F018FE83CBCD940F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_2;
		L_2 = List_1_FindAll_mC30A265141BEE402B7C13944596D8628F3DB1528(L_0, L_1, List_1_FindAll_mC30A265141BEE402B7C13944596D8628F3DB1528_RuntimeMethod_var);
		V_0 = L_2;
		// int id = Random.Range(0, possibleSeg.Count);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m0C8419CCE02FC59792FDA71A6A3174B0D3D3F5E9_inline(L_3, List_1_get_Count_m0C8419CCE02FC59792FDA71A6A3174B0D3D3F5E9_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_4, NULL);
		V_1 = L_5;
		// var s = GetSegment(id, false);
		int32_t L_6 = V_1;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_7;
		L_7 = LevelManager_GetSegment_m5B2D544BFA0737B93C326C3D35C20876C2279C4D(__this, L_6, (bool)0, NULL);
		V_2 = L_7;
		// y1 = s.endY1;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = L_8->___endY1_10;
		__this->___y1_14 = L_9;
		// y2 = s.endY2;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___endY2_11;
		__this->___y2_15 = L_11;
		// y3 = s.endY3;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___endY3_12;
		__this->___y3_16 = L_13;
		// s.transform.SetParent(transform);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_14 = V_2;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_15, L_16, NULL);
		// s.transform.localPosition = Vector3.forward * currentSpawnZ;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_17 = V_2;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		int32_t L_20 = __this->___currentSpawnZ_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, ((float)L_20), NULL);
		NullCheck(L_18);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_21, NULL);
		// currentSpawnZ += s.length;
		int32_t L_22 = __this->___currentSpawnZ_13;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = L_23->___length_6;
		__this->___currentSpawnZ_13 = ((int32_t)il2cpp_codegen_add(L_22, L_24));
		// amountOfACtiveSegments++;
		int32_t L_25 = __this->___amountOfACtiveSegments_11;
		__this->___amountOfACtiveSegments_11 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		// s.Spawn();
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_26 = V_2;
		NullCheck(L_26);
		Segment_Spawn_mC285322AF8DBEE591323298E9F0584AAE8B3E9A3(L_26, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Update_mD2004B9E4119DF7C3EE3D3F147754CCBC7FFD61D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentSpawnZ - cameraContainer.position.z < DISTANCE_BEFORE_SPAWN)
		int32_t L_0 = __this->___currentSpawnZ_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___cameraContainer_10;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___z_4;
		if ((!(((float)((float)il2cpp_codegen_subtract(((float)L_0), L_3))) < ((float)(100.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// GenerateSegment();
		LevelManager_GenerateSegment_m538FAF99D8C2DBB281B6E5EBD449B2971DDCCABA(__this, NULL);
	}

IL_0025:
	{
		// if (amountOfACtiveSegments >= MAX_SEGMENTS_ON_SCREEN)
		int32_t L_4 = __this->___amountOfACtiveSegments_11;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)15))))
		{
			goto IL_0055;
		}
	}
	{
		// _activeSegments[amountOfACtiveSegments - 1].DeSpawn();
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_5 = __this->____activeSegments_24;
		int32_t L_6 = __this->___amountOfACtiveSegments_11;
		NullCheck(L_5);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_7;
		L_7 = List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE_RuntimeMethod_var);
		NullCheck(L_7);
		Segment_DeSpawn_m215BECFF973B6DAF17FED831B522F4E0D9AFDCE8(L_7, NULL);
		// amountOfACtiveSegments--;
		int32_t L_8 = __this->___amountOfACtiveSegments_11;
		__this->___amountOfACtiveSegments_11 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0055:
	{
		// }
		return;
	}
}
// Segment LevelManager::GetSegment(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* LevelManager_GetSegment_m5B2D544BFA0737B93C326C3D35C20876C2279C4D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ___id0, bool ___transition1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSegment_t7CA3839B9674B8E067BF27C840F7C019EE01118F_m5DA0F3EADE36E75F2B7D9240FEE3759DC30E7DF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mA915FF20B5DC1362FE2F6EB84DB62EB60FC89411_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m04C351BB086CA8DCA6985A2CD605013A80C82354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m98C966D0803B9E4F6A8D82E70D2A9F8E3531AE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass30_0_U3CGetSegmentU3Eb__0_m01FB36ECC8B9A0AD1054A8E0C6043D5625BE62B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* V_0 = NULL;
	Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	{
		U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* L_0 = (U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass30_0__ctor_m66D1201FCC836D5DCC2F08857C1C7970F22F46BD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* L_1 = V_0;
		int32_t L_2 = ___id0;
		NullCheck(L_1);
		L_1->___id_0 = L_2;
		U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* L_3 = V_0;
		bool L_4 = ___transition1;
		NullCheck(L_3);
		L_3->___transition_1 = L_4;
		// var s = _activeSegments.Find(x => x.SegID == id && x.transition == transition && !x.gameObject.activeSelf);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_5 = __this->____activeSegments_24;
		U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* L_6 = V_0;
		Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B* L_7 = (Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B*)il2cpp_codegen_object_new(Predicate_1_t03DB7E91D12D89AB9A9D4CFAAA540B5C526EA42B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Predicate_1__ctor_m200D4432D603B2EC4B1E746CD42F4143DF5DC97F(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass30_0_U3CGetSegmentU3Eb__0_m01FB36ECC8B9A0AD1054A8E0C6043D5625BE62B8_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_8;
		L_8 = List_1_Find_mA915FF20B5DC1362FE2F6EB84DB62EB60FC89411(L_5, L_7, List_1_Find_mA915FF20B5DC1362FE2F6EB84DB62EB60FC89411_RuntimeMethod_var);
		V_1 = L_8;
		// if (s == null)
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_009d;
		}
	}
	{
		// GameObject go = Instantiate((transition) ? availableTransitions[id].gameObject : availableSegments[id].gameObject);
		U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___transition_1;
		if (L_12)
		{
			goto IL_0055;
		}
	}
	{
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_13 = __this->___availableSegments_22;
		U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___id_0;
		NullCheck(L_13);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_16;
		L_16 = List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE(L_13, L_15, List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE_RuntimeMethod_var);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		G_B4_0 = L_17;
		goto IL_006b;
	}

IL_0055:
	{
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_18 = __this->___availableTransitions_23;
		U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___id_0;
		NullCheck(L_18);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_21;
		L_21 = List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE(L_18, L_20, List_1_get_Item_mFE73582794D264610CC30E7B03DDD07B2AFF59BE_RuntimeMethod_var);
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		G_B4_0 = L_22;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(G_B4_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// s = go.GetComponent<Segment>();
		NullCheck(L_23);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_24;
		L_24 = GameObject_GetComponent_TisSegment_t7CA3839B9674B8E067BF27C840F7C019EE01118F_m5DA0F3EADE36E75F2B7D9240FEE3759DC30E7DF4(L_23, GameObject_GetComponent_TisSegment_t7CA3839B9674B8E067BF27C840F7C019EE01118F_m5DA0F3EADE36E75F2B7D9240FEE3759DC30E7DF4_RuntimeMethod_var);
		V_1 = L_24;
		// s.SegID = id;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_25 = V_1;
		U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___id_0;
		NullCheck(L_25);
		Segment_set_SegID_m20F14EA6AFFE8F3543DD805314B9F8591E2B6C0D_inline(L_25, L_27, NULL);
		// s.transition = transition;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_28 = V_1;
		U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* L_29 = V_0;
		NullCheck(L_29);
		bool L_30 = L_29->___transition_1;
		NullCheck(L_28);
		L_28->___transition_5 = L_30;
		// _activeSegments.Insert(0, s);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_31 = __this->____activeSegments_24;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_32 = V_1;
		NullCheck(L_31);
		List_1_Insert_m04C351BB086CA8DCA6985A2CD605013A80C82354(L_31, 0, L_32, List_1_Insert_m04C351BB086CA8DCA6985A2CD605013A80C82354_RuntimeMethod_var);
		goto IL_00b7;
	}

IL_009d:
	{
		// _activeSegments.Remove(s);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_33 = __this->____activeSegments_24;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_34 = V_1;
		NullCheck(L_33);
		bool L_35;
		L_35 = List_1_Remove_m98C966D0803B9E4F6A8D82E70D2A9F8E3531AE51(L_33, L_34, List_1_Remove_m98C966D0803B9E4F6A8D82E70D2A9F8E3531AE51_RuntimeMethod_var);
		// _activeSegments.Insert(0, s);
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_36 = __this->____activeSegments_24;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_37 = V_1;
		NullCheck(L_36);
		List_1_Insert_m04C351BB086CA8DCA6985A2CD605013A80C82354(L_36, 0, L_37, List_1_Insert_m04C351BB086CA8DCA6985A2CD605013A80C82354_RuntimeMethod_var);
	}

IL_00b7:
	{
		// return s;
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_38 = V_1;
		return L_38;
	}
}
// Piece LevelManager::GetPiece(PieceType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* LevelManager_GetPiece_m1C0FCD9E6589A77B1469FFE0772380A321D99DC3 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ___pieceType0, int32_t ___visualIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPiece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D_mB14B4C048761A123DF14D9544B1C89E1D202D772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFDAAE4EBEAEBD968F7D8888FC81B9CA1B04BAFF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m7139FEF7EC0123D05C7653A6BCC1435BE5380DC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CGetPieceU3Eb__0_mE0E0A97CAA4716ED27BAD47E633C578E9AC5E114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* V_0 = NULL;
	Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_0 = (U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass31_0__ctor_mB551059CB90D9548240CD8D755297EA003E5B5D9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_1 = V_0;
		int32_t L_2 = ___pieceType0;
		NullCheck(L_1);
		L_1->___pieceType_0 = L_2;
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_3 = V_0;
		int32_t L_4 = ___visualIndex1;
		NullCheck(L_3);
		L_3->___visualIndex_1 = L_4;
		// var piece = pieces.Find(x => x.type == pieceType &&
		// x.visualIndex == visualIndex && !x.gameObject.activeSelf);
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_5 = __this->___pieces_21;
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_6 = V_0;
		Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5* L_7 = (Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5*)il2cpp_codegen_object_new(Predicate_1_t87D7D05EB88768A622008FBD0E695EF937CC99E5_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Predicate_1__ctor_mEDDFF9322DF9C54CDCE795CFDCD93D5E76EF2B0E(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CGetPieceU3Eb__0_mE0E0A97CAA4716ED27BAD47E633C578E9AC5E114_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_8;
		L_8 = List_1_Find_m7139FEF7EC0123D05C7653A6BCC1435BE5380DC0(L_5, L_7, List_1_Find_m7139FEF7EC0123D05C7653A6BCC1435BE5380DC0_RuntimeMethod_var);
		V_1 = L_8;
		// if (piece == null)
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00d9;
		}
	}
	{
		// GameObject obj = null;
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// if (pieceType == PieceType.ramp)
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___pieceType_0;
		if (L_12)
		{
			goto IL_005b;
		}
	}
	{
		// obj = ramps[visualIndex].gameObject;
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_13 = __this->___ramps_19;
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___visualIndex_1;
		NullCheck(L_13);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_16;
		L_16 = List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323(L_13, L_15, List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323_RuntimeMethod_var);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		V_2 = L_17;
		goto IL_00bf;
	}

IL_005b:
	{
		// else if (pieceType == PieceType.longblock)
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___pieceType_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_007d;
		}
	}
	{
		// obj = longblocks[visualIndex].gameObject;
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_20 = __this->___longblocks_17;
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___visualIndex_1;
		NullCheck(L_20);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_23;
		L_23 = List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323(L_20, L_22, List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323_RuntimeMethod_var);
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		V_2 = L_24;
		goto IL_00bf;
	}

IL_007d:
	{
		// else if (pieceType == PieceType.jump)
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___pieceType_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_009f;
		}
	}
	{
		// obj = jumps[visualIndex].gameObject;
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_27 = __this->___jumps_20;
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___visualIndex_1;
		NullCheck(L_27);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_30;
		L_30 = List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323(L_27, L_29, List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323_RuntimeMethod_var);
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		V_2 = L_31;
		goto IL_00bf;
	}

IL_009f:
	{
		// else if (pieceType == PieceType.slide)
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___pieceType_0;
		if ((!(((uint32_t)L_33) == ((uint32_t)3))))
		{
			goto IL_00bf;
		}
	}
	{
		// obj = slides[visualIndex].gameObject;
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_34 = __this->___slides_18;
		U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = L_35->___visualIndex_1;
		NullCheck(L_34);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_37;
		L_37 = List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323(L_34, L_36, List_1_get_Item_m5DCA07081C472BBDEC3D1842FCE2575A4BD6B323_RuntimeMethod_var);
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		V_2 = L_38;
	}

IL_00bf:
	{
		// obj = Instantiate(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_39, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_2 = L_40;
		// piece = obj.GetComponent<Piece>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_2;
		NullCheck(L_41);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_42;
		L_42 = GameObject_GetComponent_TisPiece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D_mB14B4C048761A123DF14D9544B1C89E1D202D772(L_41, GameObject_GetComponent_TisPiece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D_mB14B4C048761A123DF14D9544B1C89E1D202D772_RuntimeMethod_var);
		V_1 = L_42;
		// pieces.Add(piece);
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_43 = __this->___pieces_21;
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_44 = V_1;
		NullCheck(L_43);
		List_1_Add_mFDAAE4EBEAEBD968F7D8888FC81B9CA1B04BAFF0_inline(L_43, L_44, List_1_Add_mFDAAE4EBEAEBD968F7D8888FC81B9CA1B04BAFF0_RuntimeMethod_var);
	}

IL_00d9:
	{
		// return piece;
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_45 = V_1;
		return L_45;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_m97F35AC08C296B73BD7D85FFB593A7BEA61B3F92 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3970B19A0D9860D058B03FDE64D2B2EBB040DF52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool SHOW_COLLIDER = true;
		__this->___SHOW_COLLIDER_5 = (bool)1;
		// public List<Piece> longblocks = new(), slides = new(), ramps = new(), jumps = new();
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_0 = (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*)il2cpp_codegen_object_new(List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A(L_0, List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A_RuntimeMethod_var);
		__this->___longblocks_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longblocks_17), (void*)L_0);
		// public List<Piece> longblocks = new(), slides = new(), ramps = new(), jumps = new();
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_1 = (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*)il2cpp_codegen_object_new(List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A(L_1, List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A_RuntimeMethod_var);
		__this->___slides_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slides_18), (void*)L_1);
		// public List<Piece> longblocks = new(), slides = new(), ramps = new(), jumps = new();
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_2 = (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*)il2cpp_codegen_object_new(List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A(L_2, List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A_RuntimeMethod_var);
		__this->___ramps_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ramps_19), (void*)L_2);
		// public List<Piece> longblocks = new(), slides = new(), ramps = new(), jumps = new();
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_3 = (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*)il2cpp_codegen_object_new(List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A(L_3, List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A_RuntimeMethod_var);
		__this->___jumps_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumps_20), (void*)L_3);
		// public List<Piece> pieces = new();
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_4 = (List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5*)il2cpp_codegen_object_new(List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A(L_4, List_1__ctor_m6D9D4E54EF4BF82CA03DCABD2C9CB86B3CA3C88A_RuntimeMethod_var);
		__this->___pieces_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pieces_21), (void*)L_4);
		// public List<Segment> availableSegments = new();
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_5 = (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*)il2cpp_codegen_object_new(List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m3970B19A0D9860D058B03FDE64D2B2EBB040DF52(L_5, List_1__ctor_m3970B19A0D9860D058B03FDE64D2B2EBB040DF52_RuntimeMethod_var);
		__this->___availableSegments_22 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___availableSegments_22), (void*)L_5);
		// public List<Segment> availableTransitions = new();
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_6 = (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*)il2cpp_codegen_object_new(List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m3970B19A0D9860D058B03FDE64D2B2EBB040DF52(L_6, List_1__ctor_m3970B19A0D9860D058B03FDE64D2B2EBB040DF52_RuntimeMethod_var);
		__this->___availableTransitions_23 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___availableTransitions_23), (void*)L_6);
		// public List<Segment> _activeSegments = new();
		List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E* L_7 = (List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E*)il2cpp_codegen_object_new(List_1_tD2F825F2C3CDEF275FA5DB20CE6585E7DDDF203E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m3970B19A0D9860D058B03FDE64D2B2EBB040DF52(L_7, List_1__ctor_m3970B19A0D9860D058B03FDE64D2B2EBB040DF52_RuntimeMethod_var);
		__this->____activeSegments_24 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeSegments_24), (void*)L_7);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean LevelManager::<SpawnTransition>b__27_0(Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LevelManager_U3CSpawnTransitionU3Eb__27_0_mE5C3D878060AD865B57EC0736134813FED479223 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* ___x0, const RuntimeMethod* method) 
{
	{
		// var possibleTransition = availableTransitions.FindAll(x => x.beginY1 == y1 || x.beginY2 == y2 || x.beginY3 == y3);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___beginY1_7;
		int32_t L_2 = __this->___y1_14;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_002b;
		}
	}
	{
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_3 = ___x0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___beginY2_8;
		int32_t L_5 = __this->___y2_15;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_6 = ___x0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___beginY3_9;
		int32_t L_8 = __this->___y3_16;
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)1;
	}
}
// System.Boolean LevelManager::<SpawnSegment>b__28_0(Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LevelManager_U3CSpawnSegmentU3Eb__28_0_m5ECAEE3148BE3915DEA717E5F018FE83CBCD940F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* ___x0, const RuntimeMethod* method) 
{
	{
		// var possibleSeg = availableSegments.FindAll(x => x.beginY1 == y1 || x.beginY2 == y2 || x.beginY3 == y3);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___beginY1_7;
		int32_t L_2 = __this->___y1_14;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_002b;
		}
	}
	{
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_3 = ___x0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___beginY2_8;
		int32_t L_5 = __this->___y2_15;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_6 = ___x0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___beginY3_9;
		int32_t L_8 = __this->___y3_16;
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)1;
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
// System.Void LevelManager/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m66D1201FCC836D5DCC2F08857C1C7970F22F46BD (U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean LevelManager/<>c__DisplayClass30_0::<GetSegment>b__0(Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass30_0_U3CGetSegmentU3Eb__0_m01FB36ECC8B9A0AD1054A8E0C6043D5625BE62B8 (U3CU3Ec__DisplayClass30_0_tBA8271FDCE593F62BC177667372B9967BF6D1DC8* __this, Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* ___x0, const RuntimeMethod* method) 
{
	{
		// var s = _activeSegments.Find(x => x.SegID == id && x.transition == transition && !x.gameObject.activeSelf);
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Segment_get_SegID_m96F95A2D0D3EF2EE2646959DB6A269D3F382A616_inline(L_0, NULL);
		int32_t L_2 = __this->___id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_3 = ___x0;
		NullCheck(L_3);
		bool L_4 = L_3->___transition_5;
		bool L_5 = __this->___transition_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* L_6 = ___x0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
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
// System.Void LevelManager/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mB551059CB90D9548240CD8D755297EA003E5B5D9 (U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean LevelManager/<>c__DisplayClass31_0::<GetPiece>b__0(Piece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3CGetPieceU3Eb__0_mE0E0A97CAA4716ED27BAD47E633C578E9AC5E114 (U3CU3Ec__DisplayClass31_0_t6E4F7F2B37C138AB6B43DAFC04B04C81C1C3CA71* __this, Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* ___x0, const RuntimeMethod* method) 
{
	{
		// var piece = pieces.Find(x => x.type == pieceType &&
		// x.visualIndex == visualIndex && !x.gameObject.activeSelf);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_4;
		int32_t L_2 = __this->___pieceType_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_3 = ___x0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___visualIndex_5;
		int32_t L_5 = __this->___visualIndex_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_6 = ___x0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
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
// MobileInput MobileInput::get_Singleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* MobileInput_get_Singleton_mD065FEE12B9D8952F80EAF43B4F46E84B344A4DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MobileInput Singleton { get { return instance; } }
		MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* L_0 = ((MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_StaticFields*)il2cpp_codegen_static_fields_for(MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_il2cpp_TypeInfo_var))->___instance_5;
		return L_0;
	}
}
// System.Boolean MobileInput::get_Tap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_get_Tap_mB400087F750BD50A34137C3470D761D0CCE456A1 (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool Tap { get; private set; }
		bool L_0 = __this->___U3CTapU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void MobileInput::set_Tap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_set_Tap_mA613391B26889DB15038F1680FC3F8FFDFEB4BF5 (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Tap { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CTapU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean MobileInput::get_SwipeLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeLeft_m2D97698752340D19FFF1918B437E67A26BC9C300 (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SwipeLeft { get; private set; }
		bool L_0 = __this->___U3CSwipeLeftU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void MobileInput::set_SwipeLeft(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_set_SwipeLeft_m51EB21272FD0B699A96D6489CD51C4718C03C2D2 (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SwipeLeft { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSwipeLeftU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Boolean MobileInput::get_SwipeRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeRight_mDB48350A19AA82262E5A28098271641B2AE1C3AF (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SwipeRight { get; private set; }
		bool L_0 = __this->___U3CSwipeRightU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void MobileInput::set_SwipeRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_set_SwipeRight_mAD8F543E4AB71CDC2E63CB40CA4A6B4123587D0F (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SwipeRight { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSwipeRightU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean MobileInput::get_SwipeDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeDown_m9EA2A5288B1CE614025A2DCDB08B90DC8C5BE6E7 (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SwipeDown { get; private set; }
		bool L_0 = __this->___U3CSwipeDownU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void MobileInput::set_SwipeDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_set_SwipeDown_m62372FD2B0FCEC705E33C21E336491566C642FEA (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SwipeDown { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSwipeDownU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Boolean MobileInput::get_SwipeUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeUp_mA33211E96AB0EB82DEB7CEB6225ABB8C0E50930F (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SwipeUp { get; private set; }
		bool L_0 = __this->___U3CSwipeUpU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void MobileInput::set_SwipeUp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_set_SwipeUp_mC396440F0A77A108740D6BB19729914DFECD7E37 (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SwipeUp { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSwipeUpU3Ek__BackingField_11 = L_0;
		return;
	}
}
// UnityEngine.Vector2 MobileInput::get_SwipeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MobileInput_get_SwipeDelta_m3E237DC38A2CF21F671FA99B0F8D2ADD084B413A (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 SwipeDelta { get; private set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CSwipeDeltaU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void MobileInput::set_SwipeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_set_SwipeDelta_mA6C72462A39FED08FF13B55872A0A2FB2C63E7EF (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 SwipeDelta { get; private set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CSwipeDeltaU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void MobileInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_Start_m38F19B5F12ED0F361B0D54B7BE73D242A1FB4CA1 (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_StaticFields*)il2cpp_codegen_static_fields_for(MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_il2cpp_TypeInfo_var))->___instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_StaticFields*)il2cpp_codegen_static_fields_for(MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_il2cpp_TypeInfo_var))->___instance_5), (void*)__this);
		// }
		return;
	}
}
// System.Void MobileInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_Update_m302CD35F62DFA67DA1F100186A7702AECAA78D83 (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// Tap = SwipeLeft = SwipeRight = SwipeDown = SwipeUp = false;
		int32_t L_0 = 0;
		V_3 = (bool)L_0;
		MobileInput_set_SwipeUp_mC396440F0A77A108740D6BB19729914DFECD7E37_inline(__this, (bool)L_0, NULL);
		bool L_1 = V_3;
		bool L_2 = L_1;
		V_2 = L_2;
		MobileInput_set_SwipeDown_m62372FD2B0FCEC705E33C21E336491566C642FEA_inline(__this, L_2, NULL);
		bool L_3 = V_2;
		bool L_4 = L_3;
		V_1 = L_4;
		MobileInput_set_SwipeRight_mAD8F543E4AB71CDC2E63CB40CA4A6B4123587D0F_inline(__this, L_4, NULL);
		bool L_5 = V_1;
		bool L_6 = L_5;
		V_0 = L_6;
		MobileInput_set_SwipeLeft_m51EB21272FD0B699A96D6489CD51C4718C03C2D2_inline(__this, L_6, NULL);
		bool L_7 = V_0;
		MobileInput_set_Tap_mA613391B26889DB15038F1680FC3F8FFDFEB4BF5_inline(__this, L_7, NULL);
		// if (Input.touches.Length != 0) // if we had atleast one touch
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_8;
		L_8 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_8);
		if (!(((RuntimeArray*)L_8)->max_length))
		{
			goto IL_00a0;
		}
	}
	{
		// if (Input.touches[0].phase == TouchPhase.Began)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_9;
		L_9 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		// Tap = true;
		MobileInput_set_Tap_mA613391B26889DB15038F1680FC3F8FFDFEB4BF5_inline(__this, (bool)1, NULL);
		// startTouch = Input.touches[0].position;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_11;
		L_11 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		__this->___startTouch_6 = L_12;
		goto IL_00a0;
	}

IL_0064:
	{
		// else if (Input.touches[0].phase == TouchPhase.Ended || Input.touches[0].phase == TouchPhase.Canceled) // canceled can occur when during touching, you received a phone call
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_13;
		L_13 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if ((((int32_t)L_14) == ((int32_t)3)))
		{
			goto IL_008a;
		}
	}
	{
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_15;
		L_15 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)4))))
		{
			goto IL_00a0;
		}
	}

IL_008a:
	{
		// startTouch = SwipeDelta = Vector2.zero; // vector2 remember because we can only slide on a 2d screen left/right and up/down (no forward/backward).
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = L_17;
		V_4 = L_18;
		MobileInput_set_SwipeDelta_mA6C72462A39FED08FF13B55872A0A2FB2C63E7EF_inline(__this, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_4;
		__this->___startTouch_6 = L_19;
	}

IL_00a0:
	{
		// SwipeDelta = Vector2.zero; // initialize.
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		MobileInput_set_SwipeDelta_mA6C72462A39FED08FF13B55872A0A2FB2C63E7EF_inline(__this, L_20, NULL);
		// if (startTouch != Vector2.zero)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___startTouch_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_23;
		L_23 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_010b;
		}
	}
	{
		// if (Input.touches.Length != 0)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_24;
		L_24 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_24);
		if (!(((RuntimeArray*)L_24)->max_length))
		{
			goto IL_00e8;
		}
	}
	{
		// SwipeDelta = Input.touches[0].position - startTouch;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_25;
		L_25 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___startTouch_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_26, L_27, NULL);
		MobileInput_set_SwipeDelta_mA6C72462A39FED08FF13B55872A0A2FB2C63E7EF_inline(__this, L_28, NULL);
		goto IL_010b;
	}

IL_00e8:
	{
		// else if (Input.GetMouseButton(0)) // we can't use down because we are doing a drag, we need to register all instances of the mousebutton at this time.
		bool L_29;
		L_29 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_29)
		{
			goto IL_010b;
		}
	}
	{
		// SwipeDelta = (Vector2)Input.mousePosition - startTouch;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = __this->___startTouch_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_31, L_32, NULL);
		MobileInput_set_SwipeDelta_mA6C72462A39FED08FF13B55872A0A2FB2C63E7EF_inline(__this, L_33, NULL);
	}

IL_010b:
	{
		// if (SwipeDelta.magnitude > DEADZONE)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = MobileInput_get_SwipeDelta_m3E237DC38A2CF21F671FA99B0F8D2ADD084B413A_inline(__this, NULL);
		V_4 = L_34;
		float L_35;
		L_35 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_4), NULL);
		if ((!(((float)L_35) > ((float)(100.0f)))))
		{
			goto IL_0195;
		}
	}
	{
		// float x = SwipeDelta.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = MobileInput_get_SwipeDelta_m3E237DC38A2CF21F671FA99B0F8D2ADD084B413A_inline(__this, NULL);
		float L_37 = L_36.___x_0;
		V_5 = L_37;
		// float y = SwipeDelta.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = MobileInput_get_SwipeDelta_m3E237DC38A2CF21F671FA99B0F8D2ADD084B413A_inline(__this, NULL);
		float L_39 = L_38.___y_1;
		V_6 = L_39;
		// if (Mathf.Abs(x) > Mathf.Abs(y))
		float L_40 = V_5;
		float L_41;
		L_41 = fabsf(L_40);
		float L_42 = V_6;
		float L_43;
		L_43 = fabsf(L_42);
		if ((!(((float)L_41) > ((float)L_43))))
		{
			goto IL_0166;
		}
	}
	{
		// if (x < 0)
		float L_44 = V_5;
		if ((!(((float)L_44) < ((float)(0.0f)))))
		{
			goto IL_015d;
		}
	}
	{
		// SwipeLeft = true;
		MobileInput_set_SwipeLeft_m51EB21272FD0B699A96D6489CD51C4718C03C2D2_inline(__this, (bool)1, NULL);
		goto IL_017f;
	}

IL_015d:
	{
		// SwipeRight = true;
		MobileInput_set_SwipeRight_mAD8F543E4AB71CDC2E63CB40CA4A6B4123587D0F_inline(__this, (bool)1, NULL);
		goto IL_017f;
	}

IL_0166:
	{
		// if (y < 0)
		float L_45 = V_6;
		if ((!(((float)L_45) < ((float)(0.0f)))))
		{
			goto IL_0178;
		}
	}
	{
		// SwipeDown = true;
		MobileInput_set_SwipeDown_m62372FD2B0FCEC705E33C21E336491566C642FEA_inline(__this, (bool)1, NULL);
		goto IL_017f;
	}

IL_0178:
	{
		// SwipeUp = true;
		MobileInput_set_SwipeUp_mC396440F0A77A108740D6BB19729914DFECD7E37_inline(__this, (bool)1, NULL);
	}

IL_017f:
	{
		// startTouch = SwipeDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = L_46;
		V_4 = L_47;
		MobileInput_set_SwipeDelta_mA6C72462A39FED08FF13B55872A0A2FB2C63E7EF_inline(__this, L_47, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_4;
		__this->___startTouch_6 = L_48;
	}

IL_0195:
	{
		// }
		return;
	}
}
// System.Void MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_mA144EF5D984E083DDC413F19018C6354BD47C02C (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Piece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece__ctor_m83E0C5E4C1E88F8CF54CB835295A176B85D88A43 (Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PieceSpawner::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceSpawner_Spawn_mD1E4BAA22CEE4B5379B00B3211D2FF6C24058CD3 (PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int amtObj = 0;
		V_0 = 0;
		// switch (type)
		int32_t L_0 = __this->___type_4;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_0067;
	}

IL_0021:
	{
		// amtObj = LevelManager.Instance.ramps.Count;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_2;
		L_2 = LevelManager_get_Instance_mBB4705A65BAF7611F34564F40E7163B7DB191855_inline(NULL);
		NullCheck(L_2);
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_3 = L_2->___ramps_19;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_inline(L_3, List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_RuntimeMethod_var);
		V_0 = L_4;
		// break;
		goto IL_0067;
	}

IL_0033:
	{
		// amtObj = LevelManager.Instance.longblocks.Count;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_5;
		L_5 = LevelManager_get_Instance_mBB4705A65BAF7611F34564F40E7163B7DB191855_inline(NULL);
		NullCheck(L_5);
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_6 = L_5->___longblocks_17;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_inline(L_6, List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_RuntimeMethod_var);
		V_0 = L_7;
		// break;
		goto IL_0067;
	}

IL_0045:
	{
		// amtObj = LevelManager.Instance.jumps.Count;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_8;
		L_8 = LevelManager_get_Instance_mBB4705A65BAF7611F34564F40E7163B7DB191855_inline(NULL);
		NullCheck(L_8);
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_9 = L_8->___jumps_20;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_inline(L_9, List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_RuntimeMethod_var);
		V_0 = L_10;
		// break;
		goto IL_0067;
	}

IL_0057:
	{
		// amtObj = LevelManager.Instance.slides.Count;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_11;
		L_11 = LevelManager_get_Instance_mBB4705A65BAF7611F34564F40E7163B7DB191855_inline(NULL);
		NullCheck(L_11);
		List_1_t4D073A8D39BEDC825CE33EB2A2553A071C462DA5* L_12 = L_11->___slides_18;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_inline(L_12, List_1_get_Count_m50B5E0F0A4B1AEEA82FD32417D9B5274B122FF64_RuntimeMethod_var);
		V_0 = L_13;
	}

IL_0067:
	{
		// currentPiece = LevelManager.Instance.GetPiece(type, Random.Range(0, amtObj -1));
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_14;
		L_14 = LevelManager_get_Instance_mBB4705A65BAF7611F34564F40E7163B7DB191855_inline(NULL);
		int32_t L_15 = __this->___type_4;
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		NullCheck(L_14);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_18;
		L_18 = LevelManager_GetPiece_m1C0FCD9E6589A77B1469FFE0772380A321D99DC3(L_14, L_15, L_17, NULL);
		__this->___currentPiece_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPiece_5), (void*)L_18);
		// currentPiece.gameObject.SetActive(true);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_19 = __this->___currentPiece_5;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// currentPiece.transform.SetParent(transform, false); // respect the parent's transform for the newchild or not?
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_21 = __this->___currentPiece_5;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_22, L_23, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PieceSpawner::Despawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceSpawner_Despawn_m1B946353682923B8D0EE77F8C5732344FBD51162 (PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* __this, const RuntimeMethod* method) 
{
	{
		// currentPiece.gameObject.SetActive(false);
		Piece_t90EC9E697A7DC982765575D76BC34BD61B5DCA0D* L_0 = __this->___currentPiece_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PieceSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceSpawner__ctor_m870EC047832E5A9F2DFBA537CBB22910E51AD535 (PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerMotor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Start_mA6DF31B1FF8BF414A3350315F2C8338B453CD319 (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// speed = originalSpeed;
		float L_0 = __this->___originalSpeed_12;
		__this->___speed_13 = L_0;
		// _characterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_1;
		L_1 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->____characterController_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____characterController_6), (void*)L_1);
		// _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlayerMotor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Update_m5AEDEF91113E4D888ABE3F50C22F29082481A578 (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B15101EE2154B1B5947F613D8D6FE052BE0CE91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CADF05E1679B3182803A8EDB860A2CC2F7DDF4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA96601D79B410E78ED885E29D7A25794A833FD2);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!GameManager.Instance.GameStarted)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameManager_get_GameStarted_mDFF998BEEE2BEF0FC60FBEA48917F082A24A9D4E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// if (Time.time - lastSpeedIncreaseTime > speedIncreaseTime)
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___lastSpeedIncreaseTime_14;
		float L_4 = __this->___speedIncreaseTime_15;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_2, L_3))) > ((float)L_4))))
		{
			goto IL_0056;
		}
	}
	{
		// lastSpeedIncreaseTime = Time.time; // reset our last speed increase time.
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastSpeedIncreaseTime_14 = L_5;
		// speed += speedIncreaseAmt; // increase the speed by the amount we specified.
		float L_6 = __this->___speed_13;
		float L_7 = __this->___speedIncreaseAmt_16;
		__this->___speed_13 = ((float)il2cpp_codegen_add(L_6, L_7));
		// GameManager.Instance.UpdateModifier(speed - originalSpeed);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8;
		L_8 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline(NULL);
		float L_9 = __this->___speed_13;
		float L_10 = __this->___originalSpeed_12;
		NullCheck(L_8);
		GameManager_UpdateModifier_m9E11E7D6FA58D1F3B94937D179CC0BFA5024DED9(L_8, ((float)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0056:
	{
		// if (MobileInput.Singleton.SwipeLeft)
		MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* L_11;
		L_11 = MobileInput_get_Singleton_mD065FEE12B9D8952F80EAF43B4F46E84B344A4DA_inline(NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = MobileInput_get_SwipeLeft_m2D97698752340D19FFF1918B437E67A26BC9C300_inline(L_11, NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// MoveLane(false);
		PlayerMotor_MoveLane_mA34AE1429C20CA44612F0FCE0C8AE8CE5CC03F98(__this, (bool)0, NULL);
	}

IL_0069:
	{
		// if (MobileInput.Singleton.SwipeRight)
		MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* L_13;
		L_13 = MobileInput_get_Singleton_mD065FEE12B9D8952F80EAF43B4F46E84B344A4DA_inline(NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = MobileInput_get_SwipeRight_mDB48350A19AA82262E5A28098271641B2AE1C3AF_inline(L_13, NULL);
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		// MoveLane(true);
		PlayerMotor_MoveLane_mA34AE1429C20CA44612F0FCE0C8AE8CE5CC03F98(__this, (bool)1, NULL);
	}

IL_007c:
	{
		// Vector3 _targetPosition = transform.position.z * Vector3.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_17, L_18, NULL);
		V_0 = L_19;
		// if (desiredLane == 0)
		int32_t L_20 = __this->___desiredLane_11;
		if (L_20)
		{
			goto IL_00b7;
		}
	}
	{
		// _targetPosition += Vector3.left * LANE_DISTANCE;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, (2.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_23, NULL);
		V_0 = L_24;
		goto IL_00d6;
	}

IL_00b7:
	{
		// else if (desiredLane == 2)
		int32_t L_25 = __this->___desiredLane_11;
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_00d6;
		}
	}
	{
		// _targetPosition += Vector3.right * LANE_DISTANCE;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, (2.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_28, NULL);
		V_0 = L_29;
	}

IL_00d6:
	{
		// Vector3 moveVector = Vector3.zero; // re-initialize.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_30;
		// moveVector.x = (_targetPosition - transform.position).normalized.x * speed; // normalize the x direction.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_33, NULL);
		V_4 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_36 = L_35.___x_2;
		float L_37 = __this->___speed_13;
		(&V_1)->___x_2 = ((float)il2cpp_codegen_multiply(L_36, L_37));
		// bool _isGrounded = IsGrounded();
		bool L_38;
		L_38 = PlayerMotor_IsGrounded_m4843E5E8153342B21998D39243474C75BE4881A2(__this, NULL);
		V_2 = L_38;
		// _animator.SetBool("IsGrounded", _isGrounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_39 = __this->____animator_7;
		bool L_40 = V_2;
		NullCheck(L_39);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_39, _stringLiteralEA96601D79B410E78ED885E29D7A25794A833FD2, L_40, NULL);
		// if (_isGrounded)
		bool L_41 = V_2;
		if (!L_41)
		{
			goto IL_01ed;
		}
	}
	{
		// verticalVelocity = -0.1f; // make sure we always remain grounded
		__this->___verticalVelocity_10 = (-0.100000001f);
		// if (MobileInput.Singleton.SwipeUp)
		MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* L_42;
		L_42 = MobileInput_get_Singleton_mD065FEE12B9D8952F80EAF43B4F46E84B344A4DA_inline(NULL);
		NullCheck(L_42);
		bool L_43;
		L_43 = MobileInput_get_SwipeUp_mA33211E96AB0EB82DEB7CEB6225ABB8C0E50930F_inline(L_42, NULL);
		if (!L_43)
		{
			goto IL_015f;
		}
	}
	{
		// _animator.SetTrigger("Jump");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_44 = __this->____animator_7;
		NullCheck(L_44);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_44, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		// verticalVelocity = jumpForce;
		float L_45 = __this->___jumpForce_8;
		__this->___verticalVelocity_10 = L_45;
		goto IL_021f;
	}

IL_015f:
	{
		// else if (MobileInput.Singleton.SwipeDown)
		MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* L_46;
		L_46 = MobileInput_get_Singleton_mD065FEE12B9D8952F80EAF43B4F46E84B344A4DA_inline(NULL);
		NullCheck(L_46);
		bool L_47;
		L_47 = MobileInput_get_SwipeDown_m9EA2A5288B1CE614025A2DCDB08B90DC8C5BE6E7_inline(L_46, NULL);
		if (!L_47)
		{
			goto IL_021f;
		}
	}
	{
		// _animator.SetTrigger("Slide");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_48 = __this->____animator_7;
		NullCheck(L_48);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_48, _stringLiteral9CADF05E1679B3182803A8EDB860A2CC2F7DDF4D, NULL);
		// _characterController.center = new Vector3(_characterController.center.x,
		//     _characterController.center.y / 2,
		//     _characterController.center.z); // modify the collider for slide.
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_49 = __this->____characterController_6;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_50 = __this->____characterController_6;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_50, NULL);
		float L_52 = L_51.___x_2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_53 = __this->____characterController_6;
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_53, NULL);
		float L_55 = L_54.___y_3;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_56 = __this->____characterController_6;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_56, NULL);
		float L_58 = L_57.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), L_52, ((float)(L_55/(2.0f))), L_58, /*hidden argument*/NULL);
		NullCheck(L_49);
		CharacterController_set_center_mF22160684B1FB453417D5457B14FEF437B5646EB(L_49, L_59, NULL);
		// _characterController.height /= 2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_60 = __this->____characterController_6;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_61 = L_60;
		NullCheck(L_61);
		float L_62;
		L_62 = CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF(L_61, NULL);
		NullCheck(L_61);
		CharacterController_set_height_m7F8FCAFE75439842BAC1FFA1E302EFD812D170FB(L_61, ((float)(L_62/(2.0f))), NULL);
		// Invoke(nameof(StopSliding), 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral2B15101EE2154B1B5947F613D8D6FE052BE0CE91, (0.5f), NULL);
		goto IL_021f;
	}

IL_01ed:
	{
		// verticalVelocity -= gravity * Time.deltaTime; // drop using our gravity per frame.
		float L_63 = __this->___verticalVelocity_10;
		float L_64 = __this->___gravity_9;
		float L_65;
		L_65 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___verticalVelocity_10 = ((float)il2cpp_codegen_subtract(L_63, ((float)il2cpp_codegen_multiply(L_64, L_65))));
		// if (MobileInput.Singleton.SwipeDown)
		MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* L_66;
		L_66 = MobileInput_get_Singleton_mD065FEE12B9D8952F80EAF43B4F46E84B344A4DA_inline(NULL);
		NullCheck(L_66);
		bool L_67;
		L_67 = MobileInput_get_SwipeDown_m9EA2A5288B1CE614025A2DCDB08B90DC8C5BE6E7_inline(L_66, NULL);
		if (!L_67)
		{
			goto IL_021f;
		}
	}
	{
		// verticalVelocity = -jumpForce;
		float L_68 = __this->___jumpForce_8;
		__this->___verticalVelocity_10 = ((-L_68));
	}

IL_021f:
	{
		// moveVector.y = verticalVelocity;
		float L_69 = __this->___verticalVelocity_10;
		(&V_1)->___y_3 = L_69;
		// moveVector.z = speed; // since we want to always move forward regardless of if we are switching lanes, sliding or jumping
		float L_70 = __this->___speed_13;
		(&V_1)->___z_4 = L_70;
		// _characterController.Move(moveVector * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_71 = __this->____characterController_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_1;
		float L_73;
		L_73 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_72, L_73, NULL);
		NullCheck(L_71);
		int32_t L_75;
		L_75 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_71, L_74, NULL);
		// Vector3 dir = _characterController.velocity;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_76 = __this->____characterController_6;
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_76, NULL);
		V_3 = L_77;
		// dir.y = 0;
		(&V_3)->___y_3 = (0.0f);
		// transform.forward = Vector3.Lerp(transform.forward, dir, TURN_SPEED);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_79, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_80, L_81, (0.300000012f), NULL);
		NullCheck(L_78);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_78, L_82, NULL);
		// }
		return;
	}
}
// System.Void PlayerMotor::StopSliding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_StopSliding_mCFA27DE9159CFAEBF8A68E908FB6CB4585D10CD4 (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1BAB0B18C7A55EB65D6F964C2DADEB0863418B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetTrigger("Running");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_7;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral4E1BAB0B18C7A55EB65D6F964C2DADEB0863418B, NULL);
		// _characterController.center = new Vector3(_characterController.center.x, _characterController.center.y * 2, _characterController.center.z);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_1 = __this->____characterController_6;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_2 = __this->____characterController_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_2, NULL);
		float L_4 = L_3.___x_2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_5 = __this->____characterController_6;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_5, NULL);
		float L_7 = L_6.___y_3;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->____characterController_6;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_4, ((float)il2cpp_codegen_multiply(L_7, (2.0f))), L_10, /*hidden argument*/NULL);
		NullCheck(L_1);
		CharacterController_set_center_mF22160684B1FB453417D5457B14FEF437B5646EB(L_1, L_11, NULL);
		// _characterController.height *= 2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_12 = __this->____characterController_6;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_13 = L_12;
		NullCheck(L_13);
		float L_14;
		L_14 = CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF(L_13, NULL);
		NullCheck(L_13);
		CharacterController_set_height_m7F8FCAFE75439842BAC1FFA1E302EFD812D170FB(L_13, ((float)il2cpp_codegen_multiply(L_14, (2.0f))), NULL);
		// }
		return;
	}
}
// System.Void PlayerMotor::MoveLane(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_MoveLane_mA34AE1429C20CA44612F0FCE0C8AE8CE5CC03F98 (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, bool ___goingRight0, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* G_B3_2 = NULL;
	{
		// desiredLane += (goingRight) ? 1 : -1;
		int32_t L_0 = __this->___desiredLane_11;
		bool L_1 = ___goingRight0;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000e:
	{
		NullCheck(G_B3_2);
		G_B3_2->___desiredLane_11 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		// desiredLane = Mathf.Clamp(desiredLane, 0, 2); // clamp lane movement within the 3 lanes.
		int32_t L_2 = __this->___desiredLane_11;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_2, 0, 2, NULL);
		__this->___desiredLane_11 = L_3;
		// }
		return;
	}
}
// System.Boolean PlayerMotor::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMotor_IsGrounded_m4843E5E8153342B21998D39243474C75BE4881A2 (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Ray groundRay = new Ray(new Vector3(
		//     _characterController.bounds.center.x,
		//     (_characterController.bounds.center.y - _characterController.bounds.extents.y) +
		//     0.2f, _characterController.bounds.center.z),
		//     Vector3.down); // ray needs an origin and a direction. The code above is just calculating these 2 parameters.
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->____characterController_6;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_0, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_3 = L_2.___x_2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_4 = __this->____characterController_6;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5;
		L_5 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_7 = L_6.___y_3;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->____characterController_6;
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		V_1 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_1), NULL);
		float L_11 = L_10.___y_3;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_12 = __this->____characterController_6;
		NullCheck(L_12);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13;
		L_13 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_12, NULL);
		V_1 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_3, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_7, L_11)), (0.200000003f))), L_15, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_0), L_16, L_17, NULL);
		// Debug.DrawRay(groundRay.origin, groundRay.direction, Color.magenta, 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_18, L_19, L_20, (1.0f), NULL);
		// return Physics.Raycast(groundRay, 0.2f + 0.1f);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_21 = V_0;
		bool L_22;
		L_22 = Physics_Raycast_m7A0FEA813B93A82713C06D8466F0A21325743488(L_21, (0.300000012f), NULL);
		return L_22;
	}
}
// System.Void PlayerMotor::StartRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_StartRunning_m401449A4CB2836B8531A16970DAF7A023C1B63DB (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1BAB0B18C7A55EB65D6F964C2DADEB0863418B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetTrigger("Running");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_7;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral4E1BAB0B18C7A55EB65D6F964C2DADEB0863418B, NULL);
		// GameManager.Instance.gameMenu.SetTrigger("Show");
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline(NULL);
		NullCheck(L_1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = L_1->___gameMenu_16;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B, NULL);
		// GameManager.Instance.GameStarted = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3;
		L_3 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline(NULL);
		NullCheck(L_3);
		GameManager_set_GameStarted_m20F9999F190DD9759B319992094A4FD2A851EA3A_inline(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerMotor::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_OnControllerColliderHit_m2E282DA01C4E7DE51F39FB0F952B3BED8E71F68A (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (hit.gameObject.tag)
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___hit0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ControllerColliderHit_get_gameObject_m206F4915101DD080BF0EF53F3F2BE79404C5936F(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// Crash();
		PlayerMotor_Crash_mE388E44D9862BEF7CA17D3AAA5718CAAB99E7D3F(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PlayerMotor::Crash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Crash_mE388E44D9862BEF7CA17D3AAA5718CAAB99E7D3F (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Instance.OnDeath();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline(NULL);
		NullCheck(L_0);
		GameManager_OnDeath_m3A37534F24D21A9A1101C992F674588A443DB1FF(L_0, NULL);
		// GameManager.Instance.GameStarted = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline(NULL);
		NullCheck(L_1);
		GameManager_set_GameStarted_m20F9999F190DD9759B319992094A4FD2A851EA3A_inline(L_1, (bool)0, NULL);
		// _animator.SetTrigger("Death");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->____animator_7;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, NULL);
		// }
		return;
	}
}
// System.Void PlayerMotor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor__ctor_mA7A70A20085FD5C6BA8F474F83F51BCE17AECC40 (PlayerMotor_tCE9D5BABC4BD2BE4EC8762BB5D4E4930CDAFB04E* __this, const RuntimeMethod* method) 
{
	{
		// private float jumpForce = 5f;
		__this->___jumpForce_8 = (5.0f);
		// private float gravity = 12f;
		__this->___gravity_9 = (12.0f);
		// private int desiredLane = 1; // 0 for Left, 1 for Middle and 2 for Right.
		__this->___desiredLane_11 = 1;
		// private float originalSpeed = 7.0f;
		__this->___originalSpeed_12 = (7.0f);
		// private float speedIncreaseTime = 2.5f;
		__this->___speedIncreaseTime_15 = (2.5f);
		// private float speedIncreaseAmt = 0.1f;
		__this->___speedIncreaseAmt_16 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 Segment::get_SegID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_SegID_m96F95A2D0D3EF2EE2646959DB6A269D3F382A616 (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, const RuntimeMethod* method) 
{
	{
		// public int SegID { get; set; }
		int32_t L_0 = __this->___U3CSegIDU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Segment::set_SegID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_set_SegID_m20F14EA6AFFE8F3543DD805314B9F8591E2B6C0D (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int SegID { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSegIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Segment::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_Awake_mFBBDBF0077A36EA4BE1036AF9E8C6C17BBA07CC6 (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisPieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16_mA29C60F62599FF7A6816F0229E7F40C6A13AF84F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// pieces = gameObject.GetComponentsInChildren<PieceSpawner>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisPieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16_mA29C60F62599FF7A6816F0229E7F40C6A13AF84F(L_0, GameObject_GetComponentsInChildren_TisPieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16_mA29C60F62599FF7A6816F0229E7F40C6A13AF84F_RuntimeMethod_var);
		__this->___pieces_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pieces_13), (void*)L_1);
		// for (int i = 0; i <  pieces.Length; i++)
		V_0 = 0;
		goto IL_0047;
	}

IL_0015:
	{
		// foreach (var mr in pieces[i].GetComponentsInChildren<MeshRenderer>())
		PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* L_2 = __this->___pieces_13;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_6;
		L_6 = Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243(L_5, Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		V_1 = L_6;
		V_2 = 0;
		goto IL_003d;
	}

IL_0027:
	{
		// foreach (var mr in pieces[i].GetComponentsInChildren<MeshRenderer>())
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// mr.enabled = LevelManager.Instance.SHOW_COLLIDER;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_11;
		L_11 = LevelManager_get_Instance_mBB4705A65BAF7611F34564F40E7163B7DB191855_inline(NULL);
		NullCheck(L_11);
		bool L_12 = L_11->___SHOW_COLLIDER_5;
		NullCheck(L_10);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_10, L_12, NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		// foreach (var mr in pieces[i].GetComponentsInChildren<MeshRenderer>())
		int32_t L_14 = V_2;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		// for (int i = 0; i <  pieces.Length; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0047:
	{
		// for (int i = 0; i <  pieces.Length; i++)
		int32_t L_17 = V_0;
		PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* L_18 = __this->___pieces_13;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Segment::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_Spawn_mC285322AF8DBEE591323298E9F0584AAE8B3E9A3 (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// for (int i = 0; i < pieces.Length; i++)
		V_0 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		// pieces[i].Spawn();
		PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* L_1 = __this->___pieces_13;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		PieceSpawner_Spawn_mD1E4BAA22CEE4B5379B00B3211D2FF6C24058CD3(L_4, NULL);
		// for (int i = 0; i < pieces.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < pieces.Length; i++)
		int32_t L_6 = V_0;
		PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* L_7 = __this->___pieces_13;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Segment::DeSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_DeSpawn_m215BECFF973B6DAF17FED831B522F4E0D9AFDCE8 (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// for (int i = 0; i < pieces.Length; i++)
		V_0 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		// pieces[i].Spawn();
		PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* L_1 = __this->___pieces_13;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		PieceSpawner_tD771759C269A7DDE74CE50C81EAD2E5C37D31E16* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		PieceSpawner_Spawn_mD1E4BAA22CEE4B5379B00B3211D2FF6C24058CD3(L_4, NULL);
		// for (int i = 0; i < pieces.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < pieces.Length; i++)
		int32_t L_6 = V_0;
		PieceSpawnerU5BU5D_t2BB1B8BC2EBC0DD87A086B0CDCA79CC8BEB29950* L_7 = __this->___pieces_13;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Segment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_m16DCCD6EC8AAFFB93C4FCDC7CFD9BC03AA771AA9 (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraMotor_get_IsMoving_m2B463F9C901DEB4F59212A93C3DEC5DC3E348F7F_inline (CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* __this, const RuntimeMethod* method) 
{
	{
		// get; set;
		bool L_0 = __this->___U3CIsMovingU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_IsDead_m3B734400A0FA0BCBC9F0522504E1EECC11B549B0_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// get; internal set;
		bool L_0 = ___value0;
		__this->___U3CIsDeadU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ___value0;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_GameStarted_mDFF998BEEE2BEF0FC60FBEA48917F082A24A9D4E_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get; internal set;
		bool L_0 = __this->___U3CGameStartedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_IsDead_m9F6E5E2B5F9F6EEAD6647D89B656374FC802EE0F_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get; internal set;
		bool L_0 = __this->___U3CIsDeadU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GlacierSpawner_set_IsScrolling_mA5E1CFF372212D96BA7C41F3A5A4ED5CDFCB7201_inline (GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set; get;
		bool L_0 = ___value0;
		__this->___U3CIsScrollingU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraMotor_set_IsMoving_mB96AA82D623B948F6EBDFF2F06982F127D97AE5E_inline (CameraMotor_tD167B6DCABFEA4A4D4BE1E85A325BEBEF26C0A0B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// get; set;
		bool L_0 = ___value0;
		__this->___U3CIsMovingU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GlacierSpawner_get_IsScrolling_m314A35ABA717651E25AC1607F60484D83E41787F_inline (GlacierSpawner_t78F13CAE80B6AB9949BD5DEFB80B8FE040AB696B* __this, const RuntimeMethod* method) 
{
	{
		// set; get;
		bool L_0 = __this->___U3CIsScrollingU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_get_localUser_m4ED16ED7C1ABAA79D5E6CAD96C2DF563E5E79AA4_inline (PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalUser; }
		PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* L_0 = __this->___mLocalUser_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LevelManager_set_Instance_m32465D1541AA5CA653E1CF33E9DF4BB91744B112_inline (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = ___value0;
		((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Segment_set_SegID_m20F14EA6AFFE8F3543DD805314B9F8591E2B6C0D_inline (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int SegID { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSegIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Segment_get_SegID_m96F95A2D0D3EF2EE2646959DB6A269D3F382A616_inline (Segment_t7CA3839B9674B8E067BF27C840F7C019EE01118F* __this, const RuntimeMethod* method) 
{
	{
		// public int SegID { get; set; }
		int32_t L_0 = __this->___U3CSegIDU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeUp_mC396440F0A77A108740D6BB19729914DFECD7E37_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SwipeUp { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSwipeUpU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeDown_m62372FD2B0FCEC705E33C21E336491566C642FEA_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SwipeDown { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSwipeDownU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeRight_mAD8F543E4AB71CDC2E63CB40CA4A6B4123587D0F_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SwipeRight { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSwipeRightU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeLeft_m51EB21272FD0B699A96D6489CD51C4718C03C2D2_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SwipeLeft { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSwipeLeftU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_Tap_mA613391B26889DB15038F1680FC3F8FFDFEB4BF5_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Tap { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CTapU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobileInput_set_SwipeDelta_mA6C72462A39FED08FF13B55872A0A2FB2C63E7EF_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 SwipeDelta { get; private set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CSwipeDeltaU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MobileInput_get_SwipeDelta_m3E237DC38A2CF21F671FA99B0F8D2ADD084B413A_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 SwipeDelta { get; private set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CSwipeDeltaU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* LevelManager_get_Instance_mBB4705A65BAF7611F34564F40E7163B7DB191855_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* MobileInput_get_Singleton_mD065FEE12B9D8952F80EAF43B4F46E84B344A4DA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MobileInput Singleton { get { return instance; } }
		MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* L_0 = ((MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_StaticFields*)il2cpp_codegen_static_fields_for(MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8_il2cpp_TypeInfo_var))->___instance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeLeft_m2D97698752340D19FFF1918B437E67A26BC9C300_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SwipeLeft { get; private set; }
		bool L_0 = __this->___U3CSwipeLeftU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeRight_mDB48350A19AA82262E5A28098271641B2AE1C3AF_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SwipeRight { get; private set; }
		bool L_0 = __this->___U3CSwipeRightU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeUp_mA33211E96AB0EB82DEB7CEB6225ABB8C0E50930F_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SwipeUp { get; private set; }
		bool L_0 = __this->___U3CSwipeUpU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileInput_get_SwipeDown_m9EA2A5288B1CE614025A2DCDB08B90DC8C5BE6E7_inline (MobileInput_t37839E14851F84A1C5C3138E59492A03066589E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SwipeDown { get; private set; }
		bool L_0 = __this->___U3CSwipeDownU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_GameStarted_m20F9999F190DD9759B319992094A4FD2A851EA3A_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// get; internal set;
		bool L_0 = ___value0;
		__this->___U3CGameStartedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
