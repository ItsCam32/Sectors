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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// ClaimReward
struct ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HouseBoundary
struct HouseBoundary_t4952B9BBD8E2E821E1398AE613EAE383961EB2B9;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneChange
struct SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Shop
struct Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
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
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818;
// Training
struct Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418;
// TrainingGrenade
struct TrainingGrenade_t309DD781F0FCEF69B9519981BF4F9753E33F31D3;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Training/<CallInRoutine>d__99
struct U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE;
// Training/<DropRoutine>d__100
struct U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A;
// Training/<EndingRoutine>d__106
struct U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86;
// Training/<ExtractionRoutine>d__105
struct U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6;
// Training/<GrenadeRoutine>d__103
struct U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B;
// Training/<GrenadeTimer>d__104
struct U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1;
// Training/<IntroRoutine>d__97
struct U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349;
// Training/<MovementRoutine>d__98
struct U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12;
// Training/<ReloadRoutine>d__102
struct U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0;
// Training/<ShootingRoutine>d__101
struct U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB3105D1705C78EBC02C2DA0C3FD28BC6CD048E;
IL2CPP_EXTERN_C String_t* _stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5;
IL2CPP_EXTERN_C String_t* _stringLiteral26C41FCCE1256081FEFB088816B3B42D6B55390C;
IL2CPP_EXTERN_C String_t* _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3276B6EABA4BB4E3366F0EB502A5F578BE657F;
IL2CPP_EXTERN_C String_t* _stringLiteral2DC4978D085176B82ACB588D08CB7E76E05D3576;
IL2CPP_EXTERN_C String_t* _stringLiteral33F59A59AE377A18BAECA149DF9039D50AEB2227;
IL2CPP_EXTERN_C String_t* _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24;
IL2CPP_EXTERN_C String_t* _stringLiteral3C5872E7D31C9D24FD56E059C1FFE9AA153AA764;
IL2CPP_EXTERN_C String_t* _stringLiteral3F00BAB69311DE927A67D430CF4A263F50EF7243;
IL2CPP_EXTERN_C String_t* _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763;
IL2CPP_EXTERN_C String_t* _stringLiteral5132A54A4FE3F7F525AE1C3E1B1BB6DF91BDED12;
IL2CPP_EXTERN_C String_t* _stringLiteral570059DAA6BA36583F759B87A49DCE91093D6090;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9DC06EF14C99246995562D21643C104E77CE62;
IL2CPP_EXTERN_C String_t* _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7;
IL2CPP_EXTERN_C String_t* _stringLiteral63710DE9E820AB694ADD1A58D031498EFABEBB8F;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4;
IL2CPP_EXTERN_C String_t* _stringLiteral98F9959D7E54733A6A0ADE8516C1AB5F627CBEEF;
IL2CPP_EXTERN_C String_t* _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8;
IL2CPP_EXTERN_C String_t* _stringLiteralB5039E9A5DFD546127BAB2150BA0A09DAC5B2561;
IL2CPP_EXTERN_C String_t* _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC;
IL2CPP_EXTERN_C String_t* _stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15;
IL2CPP_EXTERN_C String_t* _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540;
IL2CPP_EXTERN_C String_t* _stringLiteralC73E37BE554293C44E2A4E367137D91FC016C4D7;
IL2CPP_EXTERN_C String_t* _stringLiteralC85CED4FA3BF4FAFA2854F821A7498848B323CD4;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD1D4A4041ADF9CB1AF2588B2FDD2FA25A7638349;
IL2CPP_EXTERN_C String_t* _stringLiteralD32C39A7455E7028376FC9C8571E4301E6BF0CD9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96;
IL2CPP_EXTERN_C String_t* _stringLiteralDF90B52C4A4630C5BB3EE4EDEFF05907ECB5B813;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70;
IL2CPP_EXTERN_C String_t* _stringLiteralE9F9CDE8B6582FDCFCE0C325AEBCE08D31ACA6AF;
IL2CPP_EXTERN_C String_t* _stringLiteralEE666F21E0039F2BF222FB2B168055BD20FD930D;
IL2CPP_EXTERN_C String_t* _stringLiteralFACFE4D40C4F0587E78F4B30DF6A9060E6C16D50;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_m27BF8338133BED73CDC063283B79B5D0D9C5BA08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m76C9DAB3ED69C763F576850B4F2E8EA11A0743AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCallInRoutineU3Ed__99_System_Collections_IEnumerator_Reset_m451CED90B56FC4CD51B628D8024A4B4C4B24BD57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDropRoutineU3Ed__100_System_Collections_IEnumerator_Reset_mB2BEFE8C01168B8DF3D50CCED56C655C5CFB9083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndingRoutineU3Ed__106_System_Collections_IEnumerator_Reset_m764ECCADDF4ACB2A5602E21CC6EFB7960F5D124A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExtractionRoutineU3Ed__105_System_Collections_IEnumerator_Reset_mE864E129A5FA9FDF1E1CE8D2E8F18048B8C50A18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGrenadeRoutineU3Ed__103_System_Collections_IEnumerator_Reset_m83D149CCEFEC0B8DC75BAF73305206A0868618A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGrenadeTimerU3Ed__104_System_Collections_IEnumerator_Reset_m2E2E524D2DC0DC4E73EAC254A2B1D14F6937DA36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIntroRoutineU3Ed__97_System_Collections_IEnumerator_Reset_mE0AADFA5FC6A1799F5B7E21013A6B1DDED133190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMovementRoutineU3Ed__98_System_Collections_IEnumerator_Reset_m6466C735A2B69CC485F6FBAB6C08D01AB7D9DEB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReloadRoutineU3Ed__102_System_Collections_IEnumerator_Reset_m5943D5346E019D199D3E907ABF0507770C27C338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShootingRoutineU3Ed__101_System_Collections_IEnumerator_Reset_m48A6ADE5B59AFA90E646F1283353466376BA00F2_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// Shop
struct Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3  : public RuntimeObject
{
	// System.Boolean Shop::slotOnePurchased
	bool ___slotOnePurchased_0;
	// System.Boolean Shop::slotTwoPurchased
	bool ___slotTwoPurchased_1;
	// System.Boolean Shop::slotThreePurchased
	bool ___slotThreePurchased_2;
	// System.Boolean Shop::slotFourPurchased
	bool ___slotFourPurchased_3;
	// System.Boolean Shop::slotFivePurchased
	bool ___slotFivePurchased_4;
	// System.Boolean Shop::slotSixPurchased
	bool ___slotSixPurchased_5;
	// System.Boolean Shop::slotSevenPurchased
	bool ___slotSevenPurchased_6;
	// System.Boolean Shop::slotEightPurchased
	bool ___slotEightPurchased_7;
	// System.Boolean Shop::slotNinePurchased
	bool ___slotNinePurchased_8;
	// System.Boolean Shop::slotTenPurchased
	bool ___slotTenPurchased_9;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Training/<CallInRoutine>d__99
struct U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE  : public RuntimeObject
{
	// System.Int32 Training/<CallInRoutine>d__99::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<CallInRoutine>d__99::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<CallInRoutine>d__99::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
};

// Training/<DropRoutine>d__100
struct U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A  : public RuntimeObject
{
	// System.Int32 Training/<DropRoutine>d__100::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<DropRoutine>d__100::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<DropRoutine>d__100::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
};

// Training/<EndingRoutine>d__106
struct U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86  : public RuntimeObject
{
	// System.Int32 Training/<EndingRoutine>d__106::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<EndingRoutine>d__106::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<EndingRoutine>d__106::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
};

// Training/<ExtractionRoutine>d__105
struct U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6  : public RuntimeObject
{
	// System.Int32 Training/<ExtractionRoutine>d__105::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<ExtractionRoutine>d__105::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<ExtractionRoutine>d__105::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
};

// Training/<GrenadeRoutine>d__103
struct U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B  : public RuntimeObject
{
	// System.Int32 Training/<GrenadeRoutine>d__103::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<GrenadeRoutine>d__103::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<GrenadeRoutine>d__103::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
};

// Training/<GrenadeTimer>d__104
struct U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1  : public RuntimeObject
{
	// System.Int32 Training/<GrenadeTimer>d__104::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<GrenadeTimer>d__104::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<GrenadeTimer>d__104::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
};

// Training/<IntroRoutine>d__97
struct U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349  : public RuntimeObject
{
	// System.Int32 Training/<IntroRoutine>d__97::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<IntroRoutine>d__97::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<IntroRoutine>d__97::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
};

// Training/<MovementRoutine>d__98
struct U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12  : public RuntimeObject
{
	// System.Int32 Training/<MovementRoutine>d__98::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<MovementRoutine>d__98::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<MovementRoutine>d__98::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
};

// Training/<ReloadRoutine>d__102
struct U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0  : public RuntimeObject
{
	// System.Int32 Training/<ReloadRoutine>d__102::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<ReloadRoutine>d__102::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<ReloadRoutine>d__102::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
};

// Training/<ShootingRoutine>d__101
struct U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D  : public RuntimeObject
{
	// System.Int32 Training/<ShootingRoutine>d__101::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Training/<ShootingRoutine>d__101::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Training Training/<ShootingRoutine>d__101::<>4__this
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* ___U3CU3E4__this_2;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
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
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
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

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct CursorLockMode_tB70C7D1B9208B821C1C8A614BE904500B92C47D2 
{
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;
};

// UnityEngine.DepthTextureMode
struct DepthTextureMode_t64422B6053A3474607EEBAB848B2049ECE39472D 
{
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// UnityEngine.FilterMode
struct FilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34 
{
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// UnityEngine.HideFlags
struct HideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A 
{
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_t3E17ADA25A3C4F14ECF6026741219437DA054963 
{
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F 
{
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;
};

// UnityEngine.RigidbodyConstraints
struct RigidbodyConstraints_tE93C9173FB4F24EF4D38166A288214D28D8E85C8 
{
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___2;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// UnityEngine.TextureFormat
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// UnityEngine.TextureWrapMode
struct TextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD 
{
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;
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

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
struct AdaptiveTexSize_tA189481A74B2E61A5CC4C7B8BAD059A60858DDB1 
{
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize::value__
	int32_t ___value___2;
};

// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
struct TonemapperType_t025AF8E0889352F785DBE72D40E757781F5B4035 
{
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType::value__
	int32_t ___value___2;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
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

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ClaimReward
struct ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ClaimReward::rewardButtonText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___rewardButtonText_4;
	// UnityEngine.GameObject ClaimReward::rewardButtonBG
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rewardButtonBG_5;
	// UnityEngine.UI.Button ClaimReward::rewardButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___rewardButton_6;
	// Shop ClaimReward::shopObject
	Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* ___shopObject_8;
	// System.String ClaimReward::path
	String_t* ___path_9;
};

struct ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70_StaticFields
{
	// System.Boolean ClaimReward::rewardItemOwned
	bool ___rewardItemOwned_7;
};

// Crosshair
struct Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture2D Crosshair::crosshairImage
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___crosshairImage_4;
};

struct Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_StaticFields
{
	// System.Boolean Crosshair::crosshairEnabled
	bool ___crosshairEnabled_5;
};

// HouseBoundary
struct HouseBoundary_t4952B9BBD8E2E821E1398AE613EAE383961EB2B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean HouseBoundary::inHouse
	bool ___inHouse_4;
	// UnityEngine.AudioSource HouseBoundary::ambientSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ambientSound_5;
};

// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera MouseLook::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// UnityEngine.Transform MouseLook::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_5;
	// System.String MouseLook::path
	String_t* ___path_7;
	// System.Single MouseLook::xRotation
	float ___xRotation_9;
};

struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_StaticFields
{
	// System.Single MouseLook::mouseSensitivity
	float ___mouseSensitivity_6;
	// System.Boolean MouseLook::playerCanLook
	bool ___playerCanLook_8;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseMenu::pauseMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenu_4;
};

struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields
{
	// System.Boolean PauseMenu::menuOpen
	bool ___menuOpen_5;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController PlayerMovement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_4;
	// UnityEngine.AudioSource PlayerMovement::outsideWalkingSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___outsideWalkingSound_5;
	// UnityEngine.AudioSource[] PlayerMovement::insideWalkingSounds
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___insideWalkingSounds_6;
	// UnityEngine.Transform PlayerMovement::groundCheck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheck_7;
	// UnityEngine.Transform PlayerMovement::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_8;
	// UnityEngine.LayerMask PlayerMovement::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_9;
	// System.Single PlayerMovement::stepRate
	float ___stepRate_12;
	// System.Single PlayerMovement::nextStep
	float ___nextStep_13;
	// System.Single PlayerMovement::speed
	float ___speed_14;
	// System.Single PlayerMovement::camYPos
	float ___camYPos_15;
	// System.Single PlayerMovement::jumpHeight
	float ___jumpHeight_16;
	// System.Single PlayerMovement::jumpRate
	float ___jumpRate_17;
	// System.Single PlayerMovement::nextJump
	float ___nextJump_18;
	// UnityEngine.Vector3 PlayerMovement::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_19;
	// System.Single PlayerMovement::gravity
	float ___gravity_20;
	// System.Single PlayerMovement::groundDistance
	float ___groundDistance_21;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_22;
};

struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_StaticFields
{
	// System.Boolean PlayerMovement::playerCanMove
	bool ___playerCanMove_10;
	// System.Boolean PlayerMovement::insideHouse
	bool ___insideHouse_11;
};

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;
};

// SceneChange
struct SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Training
struct Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController Training::charController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___charController_4;
	// UnityEngine.Transform Training::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_5;
	// UnityEngine.Transform Training::grenadePos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___grenadePos_6;
	// UnityEngine.Transform Training::casingPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___casingPos_7;
	// UnityEngine.ParticleSystem Training::gunShot
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___gunShot_8;
	// UnityEngine.ParticleSystem Training::explosion1
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___explosion1_9;
	// UnityEngine.ParticleSystem Training::explosion2
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___explosion2_10;
	// UnityEngine.ParticleSystem Training::explosion3
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___explosion3_11;
	// UnityEngine.Animator Training::welcomeTextsAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___welcomeTextsAnimator_12;
	// UnityEngine.Animator Training::bgAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___bgAnimator_13;
	// UnityEngine.Animator Training::deagleAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___deagleAnimator_14;
	// UnityEngine.Animator Training::camDeagleRecoilAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___camDeagleRecoilAnimator_15;
	// UnityEngine.AudioSource Training::parachutePulledSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___parachutePulledSound_16;
	// UnityEngine.AudioSource Training::parachuteDropSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___parachuteDropSound_17;
	// UnityEngine.AudioSource Training::deagleShotSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___deagleShotSound_18;
	// UnityEngine.AudioSource Training::grenadeSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___grenadeSound_19;
	// UnityEngine.AudioSource Training::trainingCompleteSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___trainingCompleteSound_20;
	// UnityEngine.AudioSource Training::emptyShotSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___emptyShotSound_21;
	// UnityEngine.AudioSource Training::reloadSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___reloadSound_22;
	// UnityEngine.AudioSource[] Training::impactSounds
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___impactSounds_23;
	// UnityEngine.Rigidbody Training::grenade
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___grenade_24;
	// UnityEngine.UI.Button Training::claimButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___claimButton_25;
	// UnityEngine.Rigidbody Training::casingPrefab
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___casingPrefab_26;
	// UnityEngine.GameObject Training::task1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___task1_27;
	// UnityEngine.GameObject Training::task1PT2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___task1PT2_28;
	// UnityEngine.GameObject Training::task2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___task2_29;
	// UnityEngine.GameObject Training::task3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___task3_30;
	// UnityEngine.GameObject Training::task4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___task4_31;
	// UnityEngine.GameObject Training::task5
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___task5_32;
	// UnityEngine.GameObject Training::task6
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___task6_33;
	// UnityEngine.GameObject Training::bg
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bg_34;
	// UnityEngine.GameObject Training::parachute
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parachute_35;
	// UnityEngine.GameObject Training::smoke
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___smoke_36;
	// UnityEngine.GameObject Training::drop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drop_37;
	// UnityEngine.GameObject Training::pickupUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pickupUI_38;
	// UnityEngine.GameObject Training::barrier1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___barrier1_39;
	// UnityEngine.GameObject Training::barrier2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___barrier2_40;
	// UnityEngine.GameObject Training::gun
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gun_41;
	// UnityEngine.GameObject Training::gunUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gunUI_42;
	// UnityEngine.GameObject Training::debris
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debris_43;
	// UnityEngine.GameObject Training::explodedDebris
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explodedDebris_44;
	// UnityEngine.GameObject Training::marker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___marker_45;
	// UnityEngine.GameObject Training::endUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___endUI_46;
	// UnityEngine.GameObject Training::rewardUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rewardUI_47;
	// UnityEngine.GameObject Training::noRewardText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___noRewardText_48;
	// UnityEngine.GameObject Training::rewardBG
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rewardBG_49;
	// UnityEngine.GameObject Training::grenadeClip
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grenadeClip_50;
	// UnityEngine.GameObject Training::grenadePin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grenadePin_51;
	// TMPro.TextMeshProUGUI Training::task1Title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task1Title_52;
	// TMPro.TextMeshProUGUI Training::wText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___wText_53;
	// TMPro.TextMeshProUGUI Training::aText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___aText_54;
	// TMPro.TextMeshProUGUI Training::sText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___sText_55;
	// TMPro.TextMeshProUGUI Training::dText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___dText_56;
	// TMPro.TextMeshProUGUI Training::task1PT2Title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task1PT2Title_57;
	// TMPro.TextMeshProUGUI Training::jumpText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___jumpText_58;
	// TMPro.TextMeshProUGUI Training::crouchText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___crouchText_59;
	// TMPro.TextMeshProUGUI Training::sprintText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___sprintText_60;
	// TMPro.TextMeshProUGUI Training::task2Title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task2Title_61;
	// TMPro.TextMeshProUGUI Training::task2Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task2Text_62;
	// TMPro.TextMeshProUGUI Training::task3Title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task3Title_63;
	// TMPro.TextMeshProUGUI Training::task3Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task3Text_64;
	// TMPro.TextMeshProUGUI Training::task4Title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task4Title_65;
	// TMPro.TextMeshProUGUI Training::task4Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task4Text_66;
	// TMPro.TextMeshProUGUI Training::task4Counter
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task4Counter_67;
	// TMPro.TextMeshProUGUI Training::clipAmmoText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___clipAmmoText_68;
	// TMPro.TextMeshProUGUI Training::reserveAmmoText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___reserveAmmoText_69;
	// TMPro.TextMeshProUGUI Training::reloadingText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___reloadingText_70;
	// TMPro.TextMeshProUGUI Training::oneText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___oneText_71;
	// TMPro.TextMeshProUGUI Training::task5Title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task5Title_72;
	// TMPro.TextMeshProUGUI Training::task5Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task5Text_73;
	// TMPro.TextMeshProUGUI Training::task6Title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task6Title_74;
	// TMPro.TextMeshProUGUI Training::task6Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___task6Text_75;
	// TMPro.TextMeshProUGUI Training::timeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___timeText_76;
	// TMPro.TextMeshProUGUI Training::claimText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___claimText_77;
	// UnityEngine.Color Training::greenColour
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___greenColour_78;
	// UnityEngine.Color Training::redColour
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___redColour_79;
	// System.Boolean Training::checkingForMovement
	bool ___checkingForMovement_80;
	// System.Boolean Training::checkingForSecondaryMovement
	bool ___checkingForSecondaryMovement_81;
	// System.Boolean Training::checkingForCallIn
	bool ___checkingForCallIn_82;
	// System.Boolean Training::checkingForPickup
	bool ___checkingForPickup_83;
	// System.Boolean Training::checkingForShooting
	bool ___checkingForShooting_84;
	// System.Boolean Training::checkingForGrenadeThrow
	bool ___checkingForGrenadeThrow_85;
	// System.Boolean Training::waitingForExplosion
	bool ___waitingForExplosion_87;
	// System.Boolean Training::checkingForExtraction
	bool ___checkingForExtraction_88;
	// System.Boolean Training::extracted
	bool ___extracted_89;
	// System.Int32 Training::targetsDestroyed
	int32_t ___targetsDestroyed_90;
	// System.Int32 Training::clipAmmoMax
	int32_t ___clipAmmoMax_91;
	// System.Int32 Training::clipAmmo
	int32_t ___clipAmmo_92;
	// System.Int32 Training::reserveAmmo
	int32_t ___reserveAmmo_93;
	// System.Single Training::fireRate
	float ___fireRate_94;
	// System.Single Training::nextFire
	float ___nextFire_95;
	// System.Boolean Training::reloading
	bool ___reloading_96;
	// System.Single Training::trainingTime
	float ___trainingTime_98;
};

struct Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_StaticFields
{
	// System.Boolean Training::grenadeSuccessful
	bool ___grenadeSuccessful_86;
	// System.Boolean Training::counting
	bool ___counting_97;
};

// TrainingGrenade
struct TrainingGrenade_t309DD781F0FCEF69B9519981BF4F9753E33F31D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_7;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_8;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___remapCurve_9;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___curveTex_10;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_12;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_13;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___tonemapper_15;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tonemapMaterial_17;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt_18;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* m_Items[1];

	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void ClaimReward::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClaimReward_LoadData_m6D3916E146921E3AFFF72381993596633AD08B25 (ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Shop>(System.String)
inline Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* JsonUtility_FromJson_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_m27BF8338133BED73CDC063283B79B5D0D9C5BA08 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m7C83908E2616C22FA632EF67E36E137932E534D7 (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ClaimReward::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClaimReward_SaveData_mFB080A6CBF19C95C08023EC57A5EFF546D619D9F (ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70* __this, const RuntimeMethod* method) ;
// System.Void Shop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop__ctor_m7BDEDC38368666EB9081CB3C46CE0BDB7380566E (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::IntroRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_IntroRoutine_m96BB9B286D708C9E72ADD684E2ED69C7D73CD506 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Training::CheckForMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForMovement_m4255629B35343324CFCCF0DC5EDADBA545C4FE28 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Void Training::CheckForSecondaryMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForSecondaryMovement_m36CB08D7E04668CC2966DF22D473E5ABE81805C1 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Void Training::CheckForCallIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForCallIn_m3D29802F368DC56F249ABFD425DEAFCD1A3451E5 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Void Training::CheckForPickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForPickup_m8C7B9F16290BD70BB0E6152FD7606A28A2F9E01E (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Void Training::CheckForShooting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForShooting_mC649CB839641D9DEDC3471647F230836C5C75632 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Void Training::CheckForGrenadeThrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForGrenadeThrow_m95EE0E3D30515E9BC9D486F3723BB47EE7EF51FD (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Void Training::CheckForExtraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForExtraction_m0B1C2D35399C1D3555D511709E47FAD6BBCB22D6 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Void Training/<IntroRoutine>d__97::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntroRoutineU3Ed__97__ctor_m0E5CC52DDF898685BDBE1BDB263DDDA354EFC30C (U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Training/<MovementRoutine>d__98::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovementRoutineU3Ed__98__ctor_m8FF26B634F6F3FD02717C9A264409B07221E84C5 (U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Training/<CallInRoutine>d__99::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallInRoutineU3Ed__99__ctor_m17665E091DACABB8A7F63A864AEA8C9073C88B01 (U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Training/<DropRoutine>d__100::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDropRoutineU3Ed__100__ctor_m03A16040322C1E3170ACE8A7C2AF0BED7F8E8708 (U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Training/<ShootingRoutine>d__101::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootingRoutineU3Ed__101__ctor_mBDE6597CB1E59CC20BB733F32A9F37803FB7489D (U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Training/<ReloadRoutine>d__102::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadRoutineU3Ed__102__ctor_mF62B8EC9898A01FA7494678951C15B7957158742 (U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Training/<GrenadeRoutine>d__103::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrenadeRoutineU3Ed__103__ctor_m8998178C08D53F39279FC326EB22DCEFC590BF80 (U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Training/<GrenadeTimer>d__104::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrenadeTimerU3Ed__104__ctor_m9E0F2DDBD80E519C418A8ECD12E6A662520486AE (U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Training/<ExtractionRoutine>d__105::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtractionRoutineU3Ed__105__ctor_mBB27B8F757C6767663C92C817B8DFB3B027B55C5 (U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Training/<EndingRoutine>d__106::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndingRoutineU3Ed__106__ctor_mC0B442780C936B2445D372F576C7B2D80B3E8BCF (U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::MovementRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_MovementRoutine_mF9D7042836039E444FED3D3602227612F2856B0E (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::CallInRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_CallInRoutine_m5B70B2C51B881E5FDCFB5C31F0EA1DD72E3CA85C (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::DropRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_DropRoutine_m5E1D1616DDAF587BC210B51FE0C4885E3CE77204 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::ShootingRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_ShootingRoutine_m60015F3835C743EEC7CB9718A6651901F7A28A86 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::ReloadRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_ReloadRoutine_m301FDAB2EB11C5F893BD7A71DDC1677EBEC12F02 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Random::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Random_get_rotation_mA99782158591D300375B107CA2C31D99E4FC7482 (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Rigidbody>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m76C9DAB3ED69C763F576850B4F2E8EA11A0743AA (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreCollision_mF7E61FFD4832E6EBEFD6A15D986AC9A01762036F (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider10, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider21, bool ___ignore2, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::GrenadeRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_GrenadeRoutine_m245AAEFF7F69D8252E44D0D6414C45868F795244 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::GrenadeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_GrenadeTimer_mEF188971EC8A9EBC88B91CF567FD7BAE1B686F78 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::EndingRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_EndingRoutine_m70C9C81017EEE1973BC079396660C57A62D83AD0 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Training::ExtractionRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_ExtractionRoutine_m04CEF143823C799CCD16484589ADCB0930204136 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___needDepth0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763 (int32_t ___format0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsShaderLevel_mA9BA383B643FD022F8AFAF445B63B6554D88D27C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsComputeShaders_m66B7AF4AEC69D4819C794DDF8D2D800DAB946F3C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_m42EC2773D0A8757B5D0F12080F999807F778668A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsRenderTextures_m983E8742098E758FEDB979B7B18AED581176A836 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadOrtho()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadOrtho_m0690AE9736A807C9D662FDB9D9A58CC5D6ECA510 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___pass0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m484E517466FBE5D4AE78DAC608E403159A57BD10 (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m804EE4091F69FC2F6B764371D327CFCB28884550 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_passCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531 (const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mA7398DAA19FD5AC947119F26E3509974EAFC1664 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___needDepth0, bool ___needHdr1, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m2Create1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tonemapping_UpdateCurve_mADC42B4344BD7C6BF315CA7419DCE55A51B13156 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tonemapping_CreateInternalRenderTexture_mEA7D2798E23F5144C84D708B3CD71A3093B36E34 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline (float ___f0, float ___p1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m00DE509EBC0F78461570ED4F104B3010EB203FD1 (double ___a0, double ___newBase1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneChange::LoadNewScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_LoadNewScene_mE017645793223F5E0522A012C81EAD7D467C0997 (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
		String_t* L_0 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void SceneChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange__ctor_m4BEE4E939472EAB59441D14F2324EEE353793A1B (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, const RuntimeMethod* method) 
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
// System.Void ClaimReward::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClaimReward_Start_m0137CD1E70A7918C14F905D1B0CC0DD9DDE2D105 (ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD32C39A7455E7028376FC9C8571E4301E6BF0CD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// path = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "ShopData.json";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_1, _stringLiteralD32C39A7455E7028376FC9C8571E4301E6BF0CD9, NULL);
		__this->___path_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_9), (void*)L_2);
		// if (File.Exists(path))
		String_t* L_3 = __this->___path_9;
		bool L_4;
		L_4 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_3, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// LoadData();
		ClaimReward_LoadData_m6D3916E146921E3AFFF72381993596633AD08B25(__this, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void ClaimReward::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClaimReward_LoadData_m6D3916E146921E3AFFF72381993596633AD08B25 (ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_m27BF8338133BED73CDC063283B79B5D0D9C5BA08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_0 = NULL;
	{
		// using StreamReader reader = new StreamReader(path);
		String_t* L_0 = __this->___path_9;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_1 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_3 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// string json = reader.ReadToEnd();
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = V_0;
			String_t* L_5;
			L_5 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_4);
			// Shop shopItems = JsonUtility.FromJson<Shop>(json);
			Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_6;
			L_6 = JsonUtility_FromJson_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_m27BF8338133BED73CDC063283B79B5D0D9C5BA08(L_5, JsonUtility_FromJson_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_m27BF8338133BED73CDC063283B79B5D0D9C5BA08_RuntimeMethod_var);
			// rewardItemOwned = shopItems.slotSixPurchased;
			bool L_7 = L_6->___slotSixPurchased_5;
			((ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70_StaticFields*)il2cpp_codegen_static_fields_for(ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70_il2cpp_TypeInfo_var))->___rewardItemOwned_7 = L_7;
			// }
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void ClaimReward::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClaimReward_SaveData_mFB080A6CBF19C95C08023EC57A5EFF546D619D9F (ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_1 = NULL;
	{
		// string json = JsonUtility.ToJson(shopObject);
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_0 = __this->___shopObject_8;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		V_0 = L_1;
		// using StreamWriter writer = new StreamWriter(path);
		String_t* L_2 = __this->___path_9;
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_3 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m7C83908E2616C22FA632EF67E36E137932E534D7(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_5 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// writer.Write(json);
			StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_6 = V_1;
			String_t* L_7 = V_0;
			VirtualActionInvoker1< String_t* >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_7);
			// }
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void ClaimReward::ClaimRewardClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClaimReward_ClaimRewardClicked_m4C72A7EAB232D11300045768961C8D4E32CE909E (ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5872E7D31C9D24FD56E059C1FFE9AA153AA764);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardButtonText.text = "CLAIMED";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___rewardButtonText_4;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral3C5872E7D31C9D24FD56E059C1FFE9AA153AA764);
		// rewardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___rewardButton_6;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// rewardButtonBG.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___rewardButtonBG_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// shopObject.slotSixPurchased = true;
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_3 = __this->___shopObject_8;
		L_3->___slotSixPurchased_5 = (bool)1;
		// SaveData();
		ClaimReward_SaveData_mFB080A6CBF19C95C08023EC57A5EFF546D619D9F(__this, NULL);
		// }
		return;
	}
}
// System.Void ClaimReward::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClaimReward__ctor_m0A95395AFF518DF0BE8F4F25FFC2332B2D6997A1 (ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shop shopObject = new Shop();
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_0 = (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3*)il2cpp_codegen_object_new(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var);
		Shop__ctor_m7BDEDC38368666EB9081CB3C46CE0BDB7380566E(L_0, NULL);
		__this->___shopObject_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shopObject_8), (void*)L_0);
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
// System.Void HouseBoundary::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HouseBoundary_OnTriggerEnter_m710DB913C05C4833E43D7B3FBB44D4368BCC0EBC (HouseBoundary_t4952B9BBD8E2E821E1398AE613EAE383961EB2B9* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		// inHouse = !inHouse;
		bool L_4 = __this->___inHouse_4;
		__this->___inHouse_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		// if (inHouse == true)
		bool L_5 = __this->___inHouse_4;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// ambientSound.volume = 0.0225f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___ambientSound_5;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_6, (0.0225000009f), NULL);
		// PlayerMovement.insideHouse = true;
		il2cpp_codegen_runtime_class_init_inline(PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var);
		((PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var))->___insideHouse_11 = (bool)1;
		return;
	}

IL_0045:
	{
		// ambientSound.volume = 0.055f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___ambientSound_5;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_7, (0.0549999997f), NULL);
		// PlayerMovement.insideHouse = false;
		il2cpp_codegen_runtime_class_init_inline(PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var);
		((PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var))->___insideHouse_11 = (bool)0;
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void HouseBoundary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HouseBoundary__ctor_m7FA8D22292C8F7ADAC52B53EF6C2AFDF1E1E3F00 (HouseBoundary_t4952B9BBD8E2E821E1398AE613EAE383961EB2B9* __this, const RuntimeMethod* method) 
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
// System.Void Training::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_Start_m790EBC8D0332D27B915C0BABEEE39AAC5A84DF45 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseMenu.menuOpen = false;
		((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___menuOpen_5 = (bool)0;
		// MouseLook.playerCanLook = true;
		il2cpp_codegen_runtime_class_init_inline(MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_il2cpp_TypeInfo_var);
		((MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_StaticFields*)il2cpp_codegen_static_fields_for(MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_il2cpp_TypeInfo_var))->___playerCanLook_8 = (bool)1;
		// PlayerMovement.playerCanMove = true;
		il2cpp_codegen_runtime_class_init_inline(PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var);
		((PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var))->___playerCanMove_10 = (bool)1;
		// Crosshair.crosshairEnabled = true;
		il2cpp_codegen_runtime_class_init_inline(Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_il2cpp_TypeInfo_var);
		((Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_StaticFields*)il2cpp_codegen_static_fields_for(Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_il2cpp_TypeInfo_var))->___crosshairEnabled_5 = (bool)1;
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// StartCoroutine(IntroRoutine());
		RuntimeObject* L_0;
		L_0 = Training_IntroRoutine_m96BB9B286D708C9E72ADD684E2ED69C7D73CD506(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Training::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_Update_mF3C96655AC2FE3B979A0C68B8812301741C1B4F5 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (counting == true)
		il2cpp_codegen_runtime_class_init_inline(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		bool L_0 = ((Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_StaticFields*)il2cpp_codegen_static_fields_for(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var))->___counting_97;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// trainingTime += Time.deltaTime;
		float L_1 = __this->___trainingTime_98;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___trainingTime_98 = ((float)il2cpp_codegen_add(L_1, L_2));
	}

IL_0019:
	{
		// if (gunUI.activeSelf == true)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___gunUI_42;
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_3, NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		// clipAmmoText.text = clipAmmo.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___clipAmmoText_68;
		int32_t* L_6 = (&__this->___clipAmmo_92);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_7);
		// reserveAmmoText.text = reserveAmmo.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___reserveAmmoText_69;
		int32_t* L_9 = (&__this->___reserveAmmo_93);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
	}

IL_0052:
	{
		// if (checkingForMovement == true)
		bool L_11 = __this->___checkingForMovement_80;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// CheckForMovement();
		Training_CheckForMovement_m4255629B35343324CFCCF0DC5EDADBA545C4FE28(__this, NULL);
	}

IL_0060:
	{
		// if (checkingForSecondaryMovement == true)
		bool L_12 = __this->___checkingForSecondaryMovement_81;
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		// CheckForSecondaryMovement();
		Training_CheckForSecondaryMovement_m36CB08D7E04668CC2966DF22D473E5ABE81805C1(__this, NULL);
	}

IL_006e:
	{
		// if (checkingForCallIn == true)
		bool L_13 = __this->___checkingForCallIn_82;
		if (!L_13)
		{
			goto IL_007c;
		}
	}
	{
		// CheckForCallIn();
		Training_CheckForCallIn_m3D29802F368DC56F249ABFD425DEAFCD1A3451E5(__this, NULL);
	}

IL_007c:
	{
		// if (checkingForPickup == true)
		bool L_14 = __this->___checkingForPickup_83;
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		// CheckForPickup();
		Training_CheckForPickup_m8C7B9F16290BD70BB0E6152FD7606A28A2F9E01E(__this, NULL);
	}

IL_008a:
	{
		// if (checkingForShooting == true)
		bool L_15 = __this->___checkingForShooting_84;
		if (!L_15)
		{
			goto IL_0098;
		}
	}
	{
		// CheckForShooting();
		Training_CheckForShooting_mC649CB839641D9DEDC3471647F230836C5C75632(__this, NULL);
	}

IL_0098:
	{
		// if (checkingForGrenadeThrow == true)
		bool L_16 = __this->___checkingForGrenadeThrow_85;
		if (!L_16)
		{
			goto IL_00a6;
		}
	}
	{
		// CheckForGrenadeThrow();
		Training_CheckForGrenadeThrow_m95EE0E3D30515E9BC9D486F3723BB47EE7EF51FD(__this, NULL);
	}

IL_00a6:
	{
		// if (checkingForExtraction == true)
		bool L_17 = __this->___checkingForExtraction_88;
		if (!L_17)
		{
			goto IL_00b4;
		}
	}
	{
		// CheckForExtraction();
		Training_CheckForExtraction_m0B1C2D35399C1D3555D511709E47FAD6BBCB22D6(__this, NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Training::IntroRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_IntroRoutine_m96BB9B286D708C9E72ADD684E2ED69C7D73CD506 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349* L_0 = (U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349*)il2cpp_codegen_object_new(U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349_il2cpp_TypeInfo_var);
		U3CIntroRoutineU3Ed__97__ctor_m0E5CC52DDF898685BDBE1BDB263DDDA354EFC30C(L_0, 0, NULL);
		U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Training::MovementRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_MovementRoutine_mF9D7042836039E444FED3D3602227612F2856B0E (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12* L_0 = (U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12*)il2cpp_codegen_object_new(U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12_il2cpp_TypeInfo_var);
		U3CMovementRoutineU3Ed__98__ctor_m8FF26B634F6F3FD02717C9A264409B07221E84C5(L_0, 0, NULL);
		U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Training::CallInRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_CallInRoutine_m5B70B2C51B881E5FDCFB5C31F0EA1DD72E3CA85C (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE* L_0 = (U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE*)il2cpp_codegen_object_new(U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE_il2cpp_TypeInfo_var);
		U3CCallInRoutineU3Ed__99__ctor_m17665E091DACABB8A7F63A864AEA8C9073C88B01(L_0, 0, NULL);
		U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Training::DropRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_DropRoutine_m5E1D1616DDAF587BC210B51FE0C4885E3CE77204 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A* L_0 = (U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A*)il2cpp_codegen_object_new(U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A_il2cpp_TypeInfo_var);
		U3CDropRoutineU3Ed__100__ctor_m03A16040322C1E3170ACE8A7C2AF0BED7F8E8708(L_0, 0, NULL);
		U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Training::ShootingRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_ShootingRoutine_m60015F3835C743EEC7CB9718A6651901F7A28A86 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D* L_0 = (U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D*)il2cpp_codegen_object_new(U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D_il2cpp_TypeInfo_var);
		U3CShootingRoutineU3Ed__101__ctor_mBDE6597CB1E59CC20BB733F32A9F37803FB7489D(L_0, 0, NULL);
		U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Training::ReloadRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_ReloadRoutine_m301FDAB2EB11C5F893BD7A71DDC1677EBEC12F02 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0* L_0 = (U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0*)il2cpp_codegen_object_new(U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0_il2cpp_TypeInfo_var);
		U3CReloadRoutineU3Ed__102__ctor_mF62B8EC9898A01FA7494678951C15B7957158742(L_0, 0, NULL);
		U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Training::GrenadeRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_GrenadeRoutine_m245AAEFF7F69D8252E44D0D6414C45868F795244 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B* L_0 = (U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B*)il2cpp_codegen_object_new(U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B_il2cpp_TypeInfo_var);
		U3CGrenadeRoutineU3Ed__103__ctor_m8998178C08D53F39279FC326EB22DCEFC590BF80(L_0, 0, NULL);
		U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Training::GrenadeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_GrenadeTimer_mEF188971EC8A9EBC88B91CF567FD7BAE1B686F78 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1* L_0 = (U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1*)il2cpp_codegen_object_new(U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1_il2cpp_TypeInfo_var);
		U3CGrenadeTimerU3Ed__104__ctor_m9E0F2DDBD80E519C418A8ECD12E6A662520486AE(L_0, 0, NULL);
		U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Training::ExtractionRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_ExtractionRoutine_m04CEF143823C799CCD16484589ADCB0930204136 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6* L_0 = (U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6*)il2cpp_codegen_object_new(U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6_il2cpp_TypeInfo_var);
		U3CExtractionRoutineU3Ed__105__ctor_mBB27B8F757C6767663C92C817B8DFB3B027B55C5(L_0, 0, NULL);
		U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Training::EndingRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Training_EndingRoutine_m70C9C81017EEE1973BC079396660C57A62D83AD0 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86* L_0 = (U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86*)il2cpp_codegen_object_new(U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86_il2cpp_TypeInfo_var);
		U3CEndingRoutineU3Ed__106__ctor_mC0B442780C936B2445D372F576C7B2D80B3E8BCF(L_0, 0, NULL);
		U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Training::CheckForMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForMovement_m4255629B35343324CFCCF0DC5EDADBA545C4FE28 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	{
		// if (wText.color != greenColour || aText.color != greenColour || sText.color != greenColour || dText.color != greenColour)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___wText_53;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___greenColour_78;
		bool L_3;
		L_3 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0060;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___aText_54;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___greenColour_78;
		bool L_7;
		L_7 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___sText_55;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___greenColour_78;
		bool L_11;
		L_11 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = __this->___dText_56;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___greenColour_78;
		bool L_15;
		L_15 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_00cc;
		}
	}

IL_0060:
	{
		// if (Input.GetKeyDown(KeyCode.W))
		bool L_16;
		L_16 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)119), NULL);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		// wText.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___wText_53;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		return;
	}

IL_007b:
	{
		// else if (Input.GetKeyDown(KeyCode.A))
		bool L_19;
		L_19 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)97), NULL);
		if (!L_19)
		{
			goto IL_0096;
		}
	}
	{
		// aText.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = __this->___aText_54;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		return;
	}

IL_0096:
	{
		// else if (Input.GetKeyDown(KeyCode.S))
		bool L_22;
		L_22 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)115), NULL);
		if (!L_22)
		{
			goto IL_00b1;
		}
	}
	{
		// sText.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___sText_55;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		return;
	}

IL_00b1:
	{
		// else if (Input.GetKeyDown(KeyCode.D))
		bool L_25;
		L_25 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)100), NULL);
		if (!L_25)
		{
			goto IL_00fc;
		}
	}
	{
		// dText.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = __this->___dText_56;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_27);
		return;
	}

IL_00cc:
	{
		// task1Title.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_28 = __this->___task1Title_52;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_29);
		// checkingForMovement = false;
		__this->___checkingForMovement_80 = (bool)0;
		// trainingCompleteSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_30 = __this->___trainingCompleteSound_20;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_30, NULL);
		// StartCoroutine(MovementRoutine());
		RuntimeObject* L_31;
		L_31 = Training_MovementRoutine_mF9D7042836039E444FED3D3602227612F2856B0E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_32;
		L_32 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_31, NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void Training::CheckForSecondaryMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForSecondaryMovement_m36CB08D7E04668CC2966DF22D473E5ABE81805C1 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	{
		// if (jumpText.color != greenColour || crouchText.color != greenColour || sprintText.color != greenColour)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___jumpText_58;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___greenColour_78;
		bool L_3;
		L_3 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___crouchText_59;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___greenColour_78;
		bool L_7;
		L_7 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0048;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___sprintText_60;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___greenColour_78;
		bool L_11;
		L_11 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_009f;
		}
	}

IL_0048:
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_12;
		L_12 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		// jumpText.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___jumpText_58;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		return;
	}

IL_0063:
	{
		// else if (Input.GetKeyDown(KeyCode.LeftShift))
		bool L_15;
		L_15 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)304), NULL);
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		// crouchText.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = __this->___crouchText_59;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		return;
	}

IL_0081:
	{
		// else if (Input.GetKeyDown(KeyCode.LeftControl))
		bool L_18;
		L_18 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)306), NULL);
		if (!L_18)
		{
			goto IL_00cf;
		}
	}
	{
		// sprintText.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19 = __this->___sprintText_60;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		return;
	}

IL_009f:
	{
		// task1PT2Title.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___task1PT2Title_57;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// checkingForSecondaryMovement = false;
		__this->___checkingForSecondaryMovement_81 = (bool)0;
		// trainingCompleteSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->___trainingCompleteSound_20;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_23, NULL);
		// StartCoroutine(CallInRoutine());
		RuntimeObject* L_24;
		L_24 = Training_CallInRoutine_m5B70B2C51B881E5FDCFB5C31F0EA1DD72E3CA85C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_25;
		L_25 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_24, NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Training::CheckForCallIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForCallIn_m3D29802F368DC56F249ABFD425DEAFCD1A3451E5 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	{
		// if (task2Title.color != greenColour)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___task2Title_61;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___greenColour_78;
		bool L_3;
		L_3 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha5))
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)53), NULL);
		if (!L_4)
		{
			goto IL_0086;
		}
	}
	{
		// task2Title.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___task2Title_61;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// task2Text.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___task2Text_62;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// parachute.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___parachute_35;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// smoke.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___smoke_36;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// parachutePulledSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___parachutePulledSound_16;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		return;
	}

IL_0067:
	{
		// checkingForCallIn = false;
		__this->___checkingForCallIn_82 = (bool)0;
		// trainingCompleteSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___trainingCompleteSound_20;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// StartCoroutine(DropRoutine());
		RuntimeObject* L_13;
		L_13 = Training_DropRoutine_m5E1D1616DDAF587BC210B51FE0C4885E3CE77204(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void Training::CheckForPickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForPickup_m8C7B9F16290BD70BB0E6152FD7606A28A2F9E01E (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63710DE9E820AB694ADD1A58D031498EFABEBB8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1D4A4041ADF9CB1AF2588B2FDD2FA25A7638349);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (task3Title.color != greenColour)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___task3Title_63;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___greenColour_78;
		bool L_3;
		L_3 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_00f8;
		}
	}
	{
		// if (Physics.Raycast(cam.position, cam.forward, out hit, 3))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		bool L_8;
		L_8 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_5, L_7, (&V_0), (3.0f), NULL);
		if (!L_8)
		{
			goto IL_00eb;
		}
	}
	{
		// if (hit.collider.name == "Drop")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9;
		L_9 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralD1D4A4041ADF9CB1AF2588B2FDD2FA25A7638349, NULL);
		if (!L_11)
		{
			goto IL_00de;
		}
	}
	{
		// pickupUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pickupUI_38;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// if (Input.GetKeyDown(KeyCode.E))
		bool L_13;
		L_13 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)101), NULL);
		if (!L_13)
		{
			goto IL_0117;
		}
	}
	{
		// pickupUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___pickupUI_38;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// drop.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___drop_37;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// gun.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___gun_41;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// deagleAnimator.Play("DeagleEquip", -1, 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___deagleAnimator_14;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_17, _stringLiteral63710DE9E820AB694ADD1A58D031498EFABEBB8F, (-1), (0.0f), NULL);
		// gunUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___gunUI_42;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// task3Title.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19 = __this->___task3Title_63;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		// task3Text.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___task3Text_64;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		return;
	}

IL_00de:
	{
		// pickupUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___pickupUI_38;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		return;
	}

IL_00eb:
	{
		// pickupUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___pickupUI_38;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		return;
	}

IL_00f8:
	{
		// checkingForPickup = false;
		__this->___checkingForPickup_83 = (bool)0;
		// trainingCompleteSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25 = __this->___trainingCompleteSound_20;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_25, NULL);
		// StartCoroutine(ShootingRoutine());
		RuntimeObject* L_26;
		L_26 = Training_ShootingRoutine_m60015F3835C743EEC7CB9718A6651901F7A28A86(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_27;
		L_27 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_26, NULL);
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void Training::CheckForShooting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForShooting_mC649CB839641D9DEDC3471647F230836C5C75632 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m76C9DAB3ED69C763F576850B4F2E8EA11A0743AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC4978D085176B82ACB588D08CB7E76E05D3576);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33F59A59AE377A18BAECA149DF9039D50AEB2227);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F00BAB69311DE927A67D430CF4A263F50EF7243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5132A54A4FE3F7F525AE1C3E1B1BB6DF91BDED12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F9959D7E54733A6A0ADE8516C1AB5F627CBEEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF90B52C4A4630C5BB3EE4EDEFF05907ECB5B813);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (targetsDestroyed != 5)
		int32_t L_0 = __this->___targetsDestroyed_90;
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_02fb;
		}
	}
	{
		// if (clipAmmo < 5)
		int32_t L_1 = __this->___clipAmmo_92;
		if ((((int32_t)L_1) >= ((int32_t)5)))
		{
			goto IL_0028;
		}
	}
	{
		// clipAmmoText.color = redColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___clipAmmoText_68;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___redColour_79;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		goto IL_0039;
	}

IL_0028:
	{
		// clipAmmoText.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___clipAmmoText_68;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
	}

IL_0039:
	{
		// if (Input.GetKeyDown(KeyCode.R) && clipAmmo < clipAmmoMax && reserveAmmo > 0 && reloading == false)
		bool L_6;
		L_6 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)114), NULL);
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_7 = __this->___clipAmmo_92;
		int32_t L_8 = __this->___clipAmmoMax_91;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_9 = __this->___reserveAmmo_93;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		bool L_10 = __this->___reloading_96;
		if (L_10)
		{
			goto IL_006e;
		}
	}
	{
		// StartCoroutine(ReloadRoutine());
		RuntimeObject* L_11;
		L_11 = Training_ReloadRoutine_m301FDAB2EB11C5F893BD7A71DDC1677EBEC12F02(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
	}

IL_006e:
	{
		// if (Input.GetKeyDown(KeyCode.Mouse0) && clipAmmo == 0 && reserveAmmo == 0)
		bool L_13;
		L_13 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)323), NULL);
		if (!L_13)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_14 = __this->___clipAmmo_92;
		if (L_14)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_15 = __this->___reserveAmmo_93;
		if (L_15)
		{
			goto IL_0095;
		}
	}
	{
		// emptyShotSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->___emptyShotSound_21;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_16, NULL);
	}

IL_0095:
	{
		// if (Input.GetKeyDown(KeyCode.Mouse0) && Time.time > nextFire && clipAmmo > 0 && reloading == false)
		bool L_17;
		L_17 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)323), NULL);
		if (!L_17)
		{
			goto IL_0342;
		}
	}
	{
		float L_18;
		L_18 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_19 = __this->___nextFire_95;
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_0342;
		}
	}
	{
		int32_t L_20 = __this->___clipAmmo_92;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_0342;
		}
	}
	{
		bool L_21 = __this->___reloading_96;
		if (L_21)
		{
			goto IL_0342;
		}
	}
	{
		// nextFire = Time.time + fireRate;
		float L_22;
		L_22 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_23 = __this->___fireRate_94;
		__this->___nextFire_95 = ((float)il2cpp_codegen_add(L_22, L_23));
		// gunShot.gameObject.SetActive(true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_24 = __this->___gunShot_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
		// gunShot.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_26 = __this->___gunShot_8;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_26, NULL);
		// deagleShotSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_27 = __this->___deagleShotSound_18;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_27, NULL);
		// deagleAnimator.Play("DeagleRecoil", -1, 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = __this->___deagleAnimator_14;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_28, _stringLiteral2DC4978D085176B82ACB588D08CB7E76E05D3576, (-1), (0.0f), NULL);
		// camDeagleRecoilAnimator.Play("CamDeagleRecoil", -1, 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___camDeagleRecoilAnimator_15;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_29, _stringLiteralDF90B52C4A4630C5BB3EE4EDEFF05907ECB5B813, (-1), (0.0f), NULL);
		// Rigidbody casing = Instantiate(casingPrefab, casingPos.position, Random.rotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->___casingPrefab_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___casingPos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Random_get_rotation_mA99782158591D300375B107CA2C31D99E4FC7482(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34;
		L_34 = Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m76C9DAB3ED69C763F576850B4F2E8EA11A0743AA(L_30, L_32, L_33, Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m76C9DAB3ED69C763F576850B4F2E8EA11A0743AA_RuntimeMethod_var);
		V_0 = L_34;
		// casing.velocity = casingPos.transform.parent.right * 1.2f + new Vector3(0f, 1f, 0f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_35 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___casingPos_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_39, (1.20000005f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_40, L_41, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_35, L_42, NULL);
		// Destroy(casing.gameObject, 3);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_43 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_44, (3.0f), NULL);
		// Physics.IgnoreCollision(charController, casing.GetComponent<Collider>(), true);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_45 = __this->___charController_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = V_0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_47;
		L_47 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(L_46, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		Physics_IgnoreCollision_mF7E61FFD4832E6EBEFD6A15D986AC9A01762036F(L_45, L_47, (bool)1, NULL);
		// clipAmmo--;
		int32_t L_48 = __this->___clipAmmo_92;
		__this->___clipAmmo_92 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
		// if (clipAmmo == 0 && reloading == false && reserveAmmo > 0)
		int32_t L_49 = __this->___clipAmmo_92;
		if (L_49)
		{
			goto IL_01e0;
		}
	}
	{
		bool L_50 = __this->___reloading_96;
		if (L_50)
		{
			goto IL_01e0;
		}
	}
	{
		int32_t L_51 = __this->___reserveAmmo_93;
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_01e0;
		}
	}
	{
		// StartCoroutine(ReloadRoutine());
		RuntimeObject* L_52;
		L_52 = Training_ReloadRoutine_m301FDAB2EB11C5F893BD7A71DDC1677EBEC12F02(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_53;
		L_53 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_52, NULL);
	}

IL_01e0:
	{
		// if (Physics.Raycast(cam.position, cam.forward, out hit, Mathf.Infinity))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = __this->___cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = __this->___cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_56, NULL);
		bool L_58;
		L_58 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_55, L_57, (&V_1), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_58)
		{
			goto IL_0342;
		}
	}
	{
		// if (hit.collider.tag == "TrainingTarget")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_59;
		L_59 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		String_t* L_60;
		L_60 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_59, NULL);
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral3F00BAB69311DE927A67D430CF4A263F50EF7243, NULL);
		if (!L_61)
		{
			goto IL_0342;
		}
	}
	{
		// AudioSource impact = impactSounds[Random.Range(0, impactSounds.Length)];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_62 = __this->___impactSounds_23;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_63 = __this->___impactSounds_23;
		int32_t L_64;
		L_64 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_63)->max_length)), NULL);
		int32_t L_65 = L_64;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_66 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		// impact.Play();
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_66, NULL);
		// GameObject target = hit.collider.gameObject.transform.Find("HPText").gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_67;
		L_67 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_67, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_68, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_69, _stringLiteral5132A54A4FE3F7F525AE1C3E1B1BB6DF91BDED12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71;
		L_71 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_70, NULL);
		V_2 = L_71;
		// int newHp = int.Parse(target.GetComponent<TextMeshProUGUI>().text) - Random.Range(32, 38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = V_2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_73;
		L_73 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_72, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_73);
		int32_t L_75;
		L_75 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_74, NULL);
		int32_t L_76;
		L_76 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)32), ((int32_t)38), NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_75, L_76));
		// if (newHp > 0)
		int32_t L_77 = V_3;
		if ((((int32_t)L_77) <= ((int32_t)0)))
		{
			goto IL_028f;
		}
	}
	{
		// target.GetComponent<TextMeshProUGUI>().text = newHp.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = V_2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_79;
		L_79 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_78, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		String_t* L_80;
		L_80 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_79, L_80);
		return;
	}

IL_028f:
	{
		// else if (newHp <= 0)
		int32_t L_81 = V_3;
		if ((((int32_t)L_81) > ((int32_t)0)))
		{
			goto IL_0342;
		}
	}
	{
		// target.GetComponent<TextMeshProUGUI>().text = "DEAD";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = V_2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_83;
		L_83 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_82, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_83, _stringLiteral33F59A59AE377A18BAECA149DF9039D50AEB2227);
		// target.GetComponent<TextMeshProUGUI>().color = redColour;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = V_2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_85;
		L_85 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_84, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_86 = __this->___redColour_79;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_85, L_86);
		// target.transform.parent.tag = "Untagged";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_87, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_88, NULL);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_89, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, NULL);
		// targetsDestroyed++;
		int32_t L_90 = __this->___targetsDestroyed_90;
		__this->___targetsDestroyed_90 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		// task4Counter.text = $"[{targetsDestroyed} / 5]";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_91 = __this->___task4Counter_67;
		int32_t L_92 = __this->___targetsDestroyed_90;
		int32_t L_93 = L_92;
		RuntimeObject* L_94 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_93);
		String_t* L_95;
		L_95 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral98F9959D7E54733A6A0ADE8516C1AB5F627CBEEF, L_94, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_91, L_95);
		return;
	}

IL_02fb:
	{
		// checkingForShooting = false;
		__this->___checkingForShooting_84 = (bool)0;
		// task4Title.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_96 = __this->___task4Title_65;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_97 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_96, L_97);
		// task4Text.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_98 = __this->___task4Text_66;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_99 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_98, L_99);
		// task4Counter.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_100 = __this->___task4Counter_67;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_101 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_100, L_101);
		// StartCoroutine(GrenadeRoutine());
		RuntimeObject* L_102;
		L_102 = Training_GrenadeRoutine_m245AAEFF7F69D8252E44D0D6414C45868F795244(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_103;
		L_103 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_102, NULL);
	}

IL_0342:
	{
		// }
		return;
	}
}
// System.Void Training::CheckForGrenadeThrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForGrenadeThrow_m95EE0E3D30515E9BC9D486F3723BB47EE7EF51FD (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (grenadeSuccessful == false)
		il2cpp_codegen_runtime_class_init_inline(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		bool L_0 = ((Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_StaticFields*)il2cpp_codegen_static_fields_for(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var))->___grenadeSuccessful_86;
		if (L_0)
		{
			goto IL_00ce;
		}
	}
	{
		// if (Input.GetKeyUp(KeyCode.Mouse0))
		bool L_1;
		L_1 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)323), NULL);
		if (!L_1)
		{
			goto IL_00ce;
		}
	}
	{
		// grenade.gameObject.layer = 0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___grenade_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_3, 0, NULL);
		// grenadeClip.layer = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___grenadeClip_50;
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_4, 0, NULL);
		// grenadePin.layer = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___grenadePin_51;
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_5, 0, NULL);
		// grenade.transform.parent = null;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___grenade_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// grenade.freezeRotation = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___grenade_24;
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_8, (bool)0, NULL);
		// grenade.constraints = RigidbodyConstraints.None;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___grenade_24;
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_9, 0, NULL);
		// grenade.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___grenade_24;
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_10, (bool)1, NULL);
		// Vector3 throwForce = new Vector3(cam.forward.x, 0.2f, cam.forward.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		float L_13 = L_12.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		float L_16 = L_15.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_13, (0.200000003f), L_16, NULL);
		// grenade.AddForce(throwForce * 800);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___grenade_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, (800.0f), NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_17, L_19, NULL);
		// if (waitingForExplosion == false)
		bool L_20 = __this->___waitingForExplosion_87;
		if (L_20)
		{
			goto IL_00ce;
		}
	}
	{
		// StartCoroutine(GrenadeTimer());
		RuntimeObject* L_21;
		L_21 = Training_GrenadeTimer_mEF188971EC8A9EBC88B91CF567FD7BAE1B686F78(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_21, NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void Training::CheckForExtraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training_CheckForExtraction_m0B1C2D35399C1D3555D511709E47FAD6BBCB22D6 (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	{
		// if (extracted == false)
		bool L_0 = __this->___extracted_89;
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (cam.position.z < -123f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___z_4;
		if ((!(((float)L_3) < ((float)(-123.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// extracted = true;
		__this->___extracted_89 = (bool)1;
		return;
	}

IL_0027:
	{
		// checkingForExtraction = false;
		__this->___checkingForExtraction_88 = (bool)0;
		// task6Title.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___task6Title_74;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// task6Text.color = greenColour;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___task6Text_75;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// StartCoroutine(EndingRoutine());
		RuntimeObject* L_8;
		L_8 = Training_EndingRoutine_m70C9C81017EEE1973BC079396660C57A62D83AD0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Training::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training__ctor_m5053EC091046EAB00E8466C6B7302102B80E006B (Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* __this, const RuntimeMethod* method) 
{
	{
		// int clipAmmoMax = 7;
		__this->___clipAmmoMax_91 = 7;
		// int clipAmmo = 7;
		__this->___clipAmmo_92 = 7;
		// int reserveAmmo = 70;
		__this->___reserveAmmo_93 = ((int32_t)70);
		// float fireRate = 0.25f;
		__this->___fireRate_94 = (0.25f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Training::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Training__cctor_mCD42FEE0C699D9FCA03F7F7DD5AED04691740281 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool grenadeSuccessful = false;
		((Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_StaticFields*)il2cpp_codegen_static_fields_for(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var))->___grenadeSuccessful_86 = (bool)0;
		// public static bool counting = true;
		((Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_StaticFields*)il2cpp_codegen_static_fields_for(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var))->___counting_97 = (bool)1;
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
// System.Void Training/<IntroRoutine>d__97::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntroRoutineU3Ed__97__ctor_m0E5CC52DDF898685BDBE1BDB263DDDA354EFC30C (U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<IntroRoutine>d__97::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntroRoutineU3Ed__97_System_IDisposable_Dispose_m391ECFFAC6BD6A1FE2435924D92E4962F5CB5FC4 (U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<IntroRoutine>d__97::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIntroRoutineU3Ed__97_MoveNext_m4D0BD48DAE53F5AFBCEFAA53E1143B74B8B010F6 (U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5039E9A5DFD546127BAB2150BA0A09DAC5B2561);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_00d0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// welcomeTextsAnimator.Play("WelcomeTexts");
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_4 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___welcomeTextsAnimator_12;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralB5039E9A5DFD546127BAB2150BA0A09DAC5B2561, NULL);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0076:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bg.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_7 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___bg_34;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// bgAnimator.Play("BGFlash", -1, 0);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_9 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = L_9->___bgAnimator_13;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_10, _stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5, (-1), (0.0f), NULL);
		// task1.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_11 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___task1_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// task1.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___task1_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00d0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// checkingForMovement = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_16 = V_1;
		L_16->___checkingForMovement_80 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Training/<IntroRoutine>d__97::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntroRoutineU3Ed__97_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m48DD254153663A6E3D61C2FBF1F43498447E5E6F (U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<IntroRoutine>d__97::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntroRoutineU3Ed__97_System_Collections_IEnumerator_Reset_mE0AADFA5FC6A1799F5B7E21013A6B1DDED133190 (U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIntroRoutineU3Ed__97_System_Collections_IEnumerator_Reset_mE0AADFA5FC6A1799F5B7E21013A6B1DDED133190_RuntimeMethod_var)));
	}
}
// System.Object Training/<IntroRoutine>d__97::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntroRoutineU3Ed__97_System_Collections_IEnumerator_get_Current_m3175DBF9F438055E522C90EAA42FB22082EB81A0 (U3CIntroRoutineU3Ed__97_tAD06D3DB8EFE8FD8AD8197B064445393B41D0349* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Training/<MovementRoutine>d__98::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovementRoutineU3Ed__98__ctor_m8FF26B634F6F3FD02717C9A264409B07221E84C5 (U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<MovementRoutine>d__98::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovementRoutineU3Ed__98_System_IDisposable_Dispose_mC8E7D6FDE192B583CF06362CBDE76E8B22ECB9E9 (U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<MovementRoutine>d__98::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMovementRoutineU3Ed__98_MoveNext_mC0E6EA94D91F0527302BE36B11C7C6B09E55C6A1 (U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0090;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// task1.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___task1_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// bgAnimator.Play("BGFlash", -1, 0);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_6 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = L_6->___bgAnimator_13;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_7, _stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5, (-1), (0.0f), NULL);
		// task1PT2.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___task1PT2_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0090:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// checkingForSecondaryMovement = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_11 = V_1;
		L_11->___checkingForSecondaryMovement_81 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Training/<MovementRoutine>d__98::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMovementRoutineU3Ed__98_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m034429793FD7316DE0F51CA2BBEB8E9FE4E6A3A3 (U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<MovementRoutine>d__98::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovementRoutineU3Ed__98_System_Collections_IEnumerator_Reset_m6466C735A2B69CC485F6FBAB6C08D01AB7D9DEB5 (U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMovementRoutineU3Ed__98_System_Collections_IEnumerator_Reset_m6466C735A2B69CC485F6FBAB6C08D01AB7D9DEB5_RuntimeMethod_var)));
	}
}
// System.Object Training/<MovementRoutine>d__98::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMovementRoutineU3Ed__98_System_Collections_IEnumerator_get_Current_m2E724FEF34530074E7C7F643FD2E98C686683C91 (U3CMovementRoutineU3Ed__98_t11A82F21581D1F0E2827324314C64B60E8538F12* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Training/<CallInRoutine>d__99::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallInRoutineU3Ed__99__ctor_m17665E091DACABB8A7F63A864AEA8C9073C88B01 (U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<CallInRoutine>d__99::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallInRoutineU3Ed__99_System_IDisposable_Dispose_mF32FBE3B45F253F08DB2473D364D4532446EA9F4 (U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<CallInRoutine>d__99::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCallInRoutineU3Ed__99_MoveNext_m0AB100310F02D41124F3167AEFB142CD5AE1FA0F (U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0090;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// task1PT2.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___task1PT2_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// bgAnimator.Play("BGFlash", -1, 0);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_6 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = L_6->___bgAnimator_13;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_7, _stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5, (-1), (0.0f), NULL);
		// task2.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___task2_29;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0090:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// checkingForCallIn = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_11 = V_1;
		L_11->___checkingForCallIn_82 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Training/<CallInRoutine>d__99::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallInRoutineU3Ed__99_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD7D4D077C1568750B9CD620F2A12EC9774D9C6DE (U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<CallInRoutine>d__99::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallInRoutineU3Ed__99_System_Collections_IEnumerator_Reset_m451CED90B56FC4CD51B628D8024A4B4C4B24BD57 (U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCallInRoutineU3Ed__99_System_Collections_IEnumerator_Reset_m451CED90B56FC4CD51B628D8024A4B4C4B24BD57_RuntimeMethod_var)));
	}
}
// System.Object Training/<CallInRoutine>d__99::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallInRoutineU3Ed__99_System_Collections_IEnumerator_get_Current_m51F0C970D2B5C0BF955F1163ADCD56D740D452F3 (U3CCallInRoutineU3Ed__99_t6D90E506802A1B223CBCB49E6285DFF8864C81AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Training/<DropRoutine>d__100::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDropRoutineU3Ed__100__ctor_m03A16040322C1E3170ACE8A7C2AF0BED7F8E8708 (U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<DropRoutine>d__100::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDropRoutineU3Ed__100_System_IDisposable_Dispose_m95877FDD44C1DC0D645898CF1179BAAC85A2499C (U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<DropRoutine>d__100::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDropRoutineU3Ed__100_MoveNext_mC7541F4872595891F97CE6E5B664C7FCB8879870 (U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_008a;
			}
			case 3:
			{
				goto IL_00e3;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(8);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (8.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// smoke.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___smoke_36;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// parachute.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_6 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___parachute_35;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// drop.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___drop_37;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_008a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// parachuteDropSound.Play();
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_11 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = L_11->___parachuteDropSound_17;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// task2.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___task2_29;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// bgAnimator.Play("BGFlash", -1, 0);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_15 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = L_15->___bgAnimator_13;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_16, _stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5, (-1), (0.0f), NULL);
		// task3.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_17 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___task3_30;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_19 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_19, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00e3:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// checkingForPickup = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_20 = V_1;
		L_20->___checkingForPickup_83 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Training/<DropRoutine>d__100::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDropRoutineU3Ed__100_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m09FE40C8063EF3BDE0DAB5EFA1689ED1998EAB63 (U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<DropRoutine>d__100::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDropRoutineU3Ed__100_System_Collections_IEnumerator_Reset_mB2BEFE8C01168B8DF3D50CCED56C655C5CFB9083 (U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDropRoutineU3Ed__100_System_Collections_IEnumerator_Reset_mB2BEFE8C01168B8DF3D50CCED56C655C5CFB9083_RuntimeMethod_var)));
	}
}
// System.Object Training/<DropRoutine>d__100::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDropRoutineU3Ed__100_System_Collections_IEnumerator_get_Current_m12ED347E886F131BB799313076D1956841B6C53B (U3CDropRoutineU3Ed__100_tE55FD9E66D09EA37FDC6C87E2E21A9FF5734B34A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Training/<ShootingRoutine>d__101::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootingRoutineU3Ed__101__ctor_mBDE6597CB1E59CC20BB733F32A9F37803FB7489D (U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<ShootingRoutine>d__101::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootingRoutineU3Ed__101_System_IDisposable_Dispose_mB57BDF9E339303F8C76D5B4F1E78A53536000ADC (U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<ShootingRoutine>d__101::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShootingRoutineU3Ed__101_MoveNext_m7598FE34B63F6F7758FC1F3041062103F42A602A (U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0042;
			}
			case 2:
			{
				goto IL_00a8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// task3.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___task3_30;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// barrier1.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_6 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___barrier1_39;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// barrier2.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___barrier2_40;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// bgAnimator.Play("BGFlash", -1, 0);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_10 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = L_10->___bgAnimator_13;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_11, _stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5, (-1), (0.0f), NULL);
		// task4.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_12 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___task4_31;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_14 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_14, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// checkingForShooting = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_15 = V_1;
		L_15->___checkingForShooting_84 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Training/<ShootingRoutine>d__101::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShootingRoutineU3Ed__101_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6E7216964F2C63BC324D6D56151B27853C623A02 (U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<ShootingRoutine>d__101::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootingRoutineU3Ed__101_System_Collections_IEnumerator_Reset_m48A6ADE5B59AFA90E646F1283353466376BA00F2 (U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShootingRoutineU3Ed__101_System_Collections_IEnumerator_Reset_m48A6ADE5B59AFA90E646F1283353466376BA00F2_RuntimeMethod_var)));
	}
}
// System.Object Training/<ShootingRoutine>d__101::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShootingRoutineU3Ed__101_System_Collections_IEnumerator_get_Current_m4D00205803E7070D8DADA2EE8A8E59ADBECD0B13 (U3CShootingRoutineU3Ed__101_tB3DA96BD55BD6E9891285F0B9DB446F8ADFB5B2D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Training/<ReloadRoutine>d__102::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadRoutineU3Ed__102__ctor_mF62B8EC9898A01FA7494678951C15B7957158742 (U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<ReloadRoutine>d__102::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadRoutineU3Ed__102_System_IDisposable_Dispose_mFDA00128BE13C1EE90E6FB6C383F296FBB064E3A (U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<ReloadRoutine>d__102::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReloadRoutineU3Ed__102_MoveNext_m49A6E218C8AF4947EA88A579DBD6011D2375ADC8 (U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9DC06EF14C99246995562D21643C104E77CE62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFACFE4D40C4F0587E78F4B30DF6A9060E6C16D50);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// reloading = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_4 = V_1;
		L_4->___reloading_96 = (bool)1;
		// reloadSound.Play();
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_5 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_5->___reloadSound_22;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// oneText.text = "";
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_7 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = L_7->___oneText_71;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// reloadingText.text = "RELOADING";
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_9 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = L_9->___reloadingText_70;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, _stringLiteral5B9DC06EF14C99246995562D21643C104E77CE62);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// reloadingText.text = "";
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_12 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = L_12->___reloadingText_70;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// oneText.text = "(1)";
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_14 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = L_14->___oneText_71;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, _stringLiteralFACFE4D40C4F0587E78F4B30DF6A9060E6C16D50);
		// if (clipAmmo == 0)
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_16 = V_1;
		int32_t L_17 = L_16->___clipAmmo_92;
		if (L_17)
		{
			goto IL_00dc;
		}
	}
	{
		// if (reserveAmmo >= clipAmmoMax)
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_18 = V_1;
		int32_t L_19 = L_18->___reserveAmmo_93;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_20 = V_1;
		int32_t L_21 = L_20->___clipAmmoMax_91;
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_00c7;
		}
	}
	{
		// clipAmmo = clipAmmoMax;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_22 = V_1;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_23 = V_1;
		int32_t L_24 = L_23->___clipAmmoMax_91;
		L_22->___clipAmmo_92 = L_24;
		// reserveAmmo -= clipAmmo;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_25 = V_1;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_26 = V_1;
		int32_t L_27 = L_26->___reserveAmmo_93;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_28 = V_1;
		int32_t L_29 = L_28->___clipAmmo_92;
		L_25->___reserveAmmo_93 = ((int32_t)il2cpp_codegen_subtract(L_27, L_29));
		goto IL_0132;
	}

IL_00c7:
	{
		// clipAmmo = reserveAmmo;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_30 = V_1;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_31 = V_1;
		int32_t L_32 = L_31->___reserveAmmo_93;
		L_30->___clipAmmo_92 = L_32;
		// reserveAmmo = 0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_33 = V_1;
		L_33->___reserveAmmo_93 = 0;
		goto IL_0132;
	}

IL_00dc:
	{
		// else if (clipAmmo > 0)
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_34 = V_1;
		int32_t L_35 = L_34->___clipAmmo_92;
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		// int ammoNeeded = clipAmmoMax - clipAmmo;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_36 = V_1;
		int32_t L_37 = L_36->___clipAmmoMax_91;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_38 = V_1;
		int32_t L_39 = L_38->___clipAmmo_92;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_37, L_39));
		// if (ammoNeeded >= reserveAmmo)
		int32_t L_40 = V_2;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_41 = V_1;
		int32_t L_42 = L_41->___reserveAmmo_93;
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_0118;
		}
	}
	{
		// clipAmmo += reserveAmmo;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_43 = V_1;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_44 = V_1;
		int32_t L_45 = L_44->___clipAmmo_92;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_46 = V_1;
		int32_t L_47 = L_46->___reserveAmmo_93;
		L_43->___clipAmmo_92 = ((int32_t)il2cpp_codegen_add(L_45, L_47));
		// reserveAmmo = 0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_48 = V_1;
		L_48->___reserveAmmo_93 = 0;
		goto IL_0132;
	}

IL_0118:
	{
		// clipAmmo = clipAmmoMax;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_49 = V_1;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_50 = V_1;
		int32_t L_51 = L_50->___clipAmmoMax_91;
		L_49->___clipAmmo_92 = L_51;
		// reserveAmmo -= ammoNeeded;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_52 = V_1;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_53 = V_1;
		int32_t L_54 = L_53->___reserveAmmo_93;
		int32_t L_55 = V_2;
		L_52->___reserveAmmo_93 = ((int32_t)il2cpp_codegen_subtract(L_54, L_55));
	}

IL_0132:
	{
		// if (reserveAmmo < clipAmmoMax)
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_56 = V_1;
		int32_t L_57 = L_56->___reserveAmmo_93;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_58 = V_1;
		int32_t L_59 = L_58->___clipAmmoMax_91;
		if ((((int32_t)L_57) >= ((int32_t)L_59)))
		{
			goto IL_0153;
		}
	}
	{
		// reserveAmmoText.color = redColour;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_60 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_61 = L_60->___reserveAmmoText_69;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_62 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63 = L_62->___redColour_79;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_61, L_63);
		goto IL_0164;
	}

IL_0153:
	{
		// reserveAmmoText.color = greenColour;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_64 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_65 = L_64->___reserveAmmoText_69;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_66 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67 = L_66->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_65, L_67);
	}

IL_0164:
	{
		// reloading = false;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_68 = V_1;
		L_68->___reloading_96 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Training/<ReloadRoutine>d__102::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReloadRoutineU3Ed__102_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0835A1162D39A8FDFBB0D2BD96ABDF1C4FDF13E9 (U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<ReloadRoutine>d__102::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadRoutineU3Ed__102_System_Collections_IEnumerator_Reset_m5943D5346E019D199D3E907ABF0507770C27C338 (U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReloadRoutineU3Ed__102_System_Collections_IEnumerator_Reset_m5943D5346E019D199D3E907ABF0507770C27C338_RuntimeMethod_var)));
	}
}
// System.Object Training/<ReloadRoutine>d__102::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReloadRoutineU3Ed__102_System_Collections_IEnumerator_get_Current_m4234183C22230EEC6B4E9CFDCAAC5ACCC75D84E1 (U3CReloadRoutineU3Ed__102_tDA433F127C314CCB5504D5C4E0E80DBDD56720C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Training/<GrenadeRoutine>d__103::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrenadeRoutineU3Ed__103__ctor_m8998178C08D53F39279FC326EB22DCEFC590BF80 (U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<GrenadeRoutine>d__103::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrenadeRoutineU3Ed__103_System_IDisposable_Dispose_m732CEFF6638DD2ECF03282E463A9FEAB58FBE305 (U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<GrenadeRoutine>d__103::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGrenadeRoutineU3Ed__103_MoveNext_m3F8E73B273DA13CF466E8DA725D11398B0FF1123 (U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_00f4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// trainingCompleteSound.Play();
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_4 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___trainingCompleteSound_20;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0071:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gunUI.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_7 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___gunUI_42;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// gun.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_9 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___gun_41;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// task4.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_11 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___task4_31;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// barrier1.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___barrier1_39;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// bgAnimator.Play("BGFlash", -1, 0);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_15 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = L_15->___bgAnimator_13;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_16, _stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5, (-1), (0.0f), NULL);
		// grenade.gameObject.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_17 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = L_17->___grenade_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// task5.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_20 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___task5_32;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_22 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_22, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00f4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// checkingForGrenadeThrow = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_23 = V_1;
		L_23->___checkingForGrenadeThrow_85 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Training/<GrenadeRoutine>d__103::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGrenadeRoutineU3Ed__103_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB0ED476F9C7A6085F7777FAC426F02965391777E (U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<GrenadeRoutine>d__103::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrenadeRoutineU3Ed__103_System_Collections_IEnumerator_Reset_m83D149CCEFEC0B8DC75BAF73305206A0868618A5 (U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGrenadeRoutineU3Ed__103_System_Collections_IEnumerator_Reset_m83D149CCEFEC0B8DC75BAF73305206A0868618A5_RuntimeMethod_var)));
	}
}
// System.Object Training/<GrenadeRoutine>d__103::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGrenadeRoutineU3Ed__103_System_Collections_IEnumerator_get_Current_m5C5369F57833315955A5F92DBA57C4473E8350BA (U3CGrenadeRoutineU3Ed__103_t57ECBEE2FE0A95C4183DE15F2EAE21DF4818413B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Training/<GrenadeTimer>d__104::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrenadeTimerU3Ed__104__ctor_m9E0F2DDBD80E519C418A8ECD12E6A662520486AE (U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<GrenadeTimer>d__104::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrenadeTimerU3Ed__104_System_IDisposable_Dispose_mC1C6AB4DFF55E61319D05E4293600507A3D8E645 (U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<GrenadeTimer>d__104::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGrenadeTimerU3Ed__104_MoveNext_mC925BF4A60A39C58EAEE46BBBA067583BC9EAD06 (U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral570059DAA6BA36583F759B87A49DCE91093D6090);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0086;
			}
			case 3:
			{
				goto IL_00fa;
			}
			case 4:
			{
				goto IL_0178;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// waitingForExplosion = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_3 = V_1;
		L_3->___waitingForExplosion_87 = (bool)1;
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (grenadeSuccessful == true)
		il2cpp_codegen_runtime_class_init_inline(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		bool L_5 = ((Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_StaticFields*)il2cpp_codegen_static_fields_for(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var))->___grenadeSuccessful_86;
		if (!L_5)
		{
			goto IL_019c;
		}
	}
	{
		// grenadeSound.Play();
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_6 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = L_6->___grenadeSound_19;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_7, NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// explosion1.gameObject.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_9 = V_1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = L_9->___explosion1_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// explosion1.Play();
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_12 = V_1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = L_12->___explosion1_9;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_13, NULL);
		// explosion2.gameObject.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_14 = V_1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = L_14->___explosion2_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// explosion2.Play();
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_17 = V_1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_18 = L_17->___explosion2_10;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_18, NULL);
		// explosion3.gameObject.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_19 = V_1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_20 = L_19->___explosion3_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// explosion3.Play();
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_22 = V_1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_23 = L_22->___explosion3_11;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_23, NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_24 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_24, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00fa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// debris.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_25 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___debris_43;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// explodedDebris.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_27 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___explodedDebris_44;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// marker.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_29 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29->___marker_45;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// grenade.gameObject.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_31 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32 = L_31->___grenade_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// checkingForGrenadeThrow = false;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_34 = V_1;
		L_34->___checkingForGrenadeThrow_85 = (bool)0;
		// task5Title.color = greenColour;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_35 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_36 = L_35->___task5Title_72;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_37 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = L_37->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_36, L_38);
		// task5Text.color = greenColour;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_39 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40 = L_39->___task5Text_73;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_41 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = L_41->___greenColour_78;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_40, L_42);
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_43 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_43, (0.300000012f), NULL);
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0178:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// trainingCompleteSound.Play();
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_44 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_45 = L_44->___trainingCompleteSound_20;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_45, NULL);
		// StartCoroutine(ExtractionRoutine());
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_46 = V_1;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_47 = V_1;
		RuntimeObject* L_48;
		L_48 = Training_ExtractionRoutine_m04CEF143823C799CCD16484589ADCB0930204136(L_47, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_49;
		L_49 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_46, L_48, NULL);
		goto IL_0250;
	}

IL_019c:
	{
		// grenade.useGravity = false;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_50 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_51 = L_50->___grenade_24;
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_51, (bool)0, NULL);
		// grenade.freezeRotation = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_52 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_53 = L_52->___grenade_24;
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_53, (bool)1, NULL);
		// grenade.constraints = RigidbodyConstraints.FreezeAll;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_54 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_55 = L_54->___grenade_24;
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_55, ((int32_t)126), NULL);
		// grenade.gameObject.layer = 12;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_56 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_57 = L_56->___grenade_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_57, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_58, ((int32_t)12), NULL);
		// grenadeClip.layer = 12;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_59 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = L_59->___grenadeClip_50;
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_60, ((int32_t)12), NULL);
		// grenadePin.layer = 12;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_61 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61->___grenadePin_51;
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_62, ((int32_t)12), NULL);
		// grenade.transform.parent = GameObject.Find("Camera").transform;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_63 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_64 = L_63->___grenade_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_64, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral570059DAA6BA36583F759B87A49DCE91093D6090, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_66, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_65, L_67, NULL);
		// grenade.transform.position = grenadePos.position;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_68 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_69 = L_68->___grenade_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_69, NULL);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_71 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72 = L_71->___grenadePos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_72, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_70, L_73, NULL);
		// grenade.transform.rotation = new Quaternion(0, 0, 0, 0);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_74 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_75 = L_74->___grenade_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_75, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_77), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_76, L_77, NULL);
	}

IL_0250:
	{
		// waitingForExplosion = false;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_78 = V_1;
		L_78->___waitingForExplosion_87 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Training/<GrenadeTimer>d__104::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGrenadeTimerU3Ed__104_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m021292AC10862ED371C3C2ED579E1C3648C4E1BD (U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<GrenadeTimer>d__104::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrenadeTimerU3Ed__104_System_Collections_IEnumerator_Reset_m2E2E524D2DC0DC4E73EAC254A2B1D14F6937DA36 (U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGrenadeTimerU3Ed__104_System_Collections_IEnumerator_Reset_m2E2E524D2DC0DC4E73EAC254A2B1D14F6937DA36_RuntimeMethod_var)));
	}
}
// System.Object Training/<GrenadeTimer>d__104::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGrenadeTimerU3Ed__104_System_Collections_IEnumerator_get_Current_m372FDCCBC2B2A94057E435A8B8C70DAEAB02DFFC (U3CGrenadeTimerU3Ed__104_t0459C99D4AAD391FEDECA4E21A8E78A22DB4F4D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Training/<ExtractionRoutine>d__105::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtractionRoutineU3Ed__105__ctor_mBB27B8F757C6767663C92C817B8DFB3B027B55C5 (U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<ExtractionRoutine>d__105::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtractionRoutineU3Ed__105_System_IDisposable_Dispose_m5627ABE9732ED47841A9C95960A97548A9FDDF54 (U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<ExtractionRoutine>d__105::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExtractionRoutineU3Ed__105_MoveNext_m487145009EC00019AE191430773A3C7AB2A30CC5 (U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0090;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// task5.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___task5_32;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// bgAnimator.Play("BGFlash", -1, 0);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_6 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = L_6->___bgAnimator_13;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_7, _stringLiteral245F618E738CFE0522E348F8EF04714F65D294B5, (-1), (0.0f), NULL);
		// task6.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___task6_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0090:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// checkingForExtraction = true;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_11 = V_1;
		L_11->___checkingForExtraction_88 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Training/<ExtractionRoutine>d__105::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExtractionRoutineU3Ed__105_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m01F7D7167E8D2EC021605A7EA82099B09A73A3F2 (U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<ExtractionRoutine>d__105::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtractionRoutineU3Ed__105_System_Collections_IEnumerator_Reset_mE864E129A5FA9FDF1E1CE8D2E8F18048B8C50A18 (U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExtractionRoutineU3Ed__105_System_Collections_IEnumerator_Reset_mE864E129A5FA9FDF1E1CE8D2E8F18048B8C50A18_RuntimeMethod_var)));
	}
}
// System.Object Training/<ExtractionRoutine>d__105::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExtractionRoutineU3Ed__105_System_Collections_IEnumerator_get_Current_m5CF015C9DBF27D4D9F6D2EC299D991D0699643A2 (U3CExtractionRoutineU3Ed__105_t814B07A39DFD5C2C12402780DBE75E8C90EC18A6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Training/<EndingRoutine>d__106::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndingRoutineU3Ed__106__ctor_mC0B442780C936B2445D372F576C7B2D80B3E8BCF (U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Training/<EndingRoutine>d__106::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndingRoutineU3Ed__106_System_IDisposable_Dispose_m3D02FE0EDAAB81067FA9780EB68157F22BED9922 (U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Training/<EndingRoutine>d__106::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndingRoutineU3Ed__106_MoveNext_m87B2A834412D94EEAFDD18D1ABFC64E0BA32F7EE (U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26C41FCCE1256081FEFB088816B3B42D6B55390C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// task6.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___task6_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// bg.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_7 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___bg_34;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// counting = false;
		il2cpp_codegen_runtime_class_init_inline(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		((Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_StaticFields*)il2cpp_codegen_static_fields_for(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var))->___counting_97 = (bool)0;
		// Crosshair.crosshairEnabled = false;
		il2cpp_codegen_runtime_class_init_inline(Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_il2cpp_TypeInfo_var);
		((Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_StaticFields*)il2cpp_codegen_static_fields_for(Crosshair_t7A885EA08E9EDD87C9B76F63208AE3E7D15A9436_il2cpp_TypeInfo_var))->___crosshairEnabled_5 = (bool)0;
		// MouseLook.playerCanLook = false;
		il2cpp_codegen_runtime_class_init_inline(MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_il2cpp_TypeInfo_var);
		((MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_StaticFields*)il2cpp_codegen_static_fields_for(MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4_il2cpp_TypeInfo_var))->___playerCanLook_8 = (bool)0;
		// PlayerMovement.playerCanMove = false;
		il2cpp_codegen_runtime_class_init_inline(PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var);
		((PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var))->___playerCanMove_10 = (bool)0;
		// trainingCompleteSound.Play();
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_9 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = L_9->___trainingCompleteSound_20;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_10, NULL);
		// endUI.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_11 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___endUI_46;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// int minutes = (int)trainingTime / 60;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_13 = V_1;
		float L_14 = L_13->___trainingTime_98;
		V_2 = ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_14)/((int32_t)60)));
		// int seconds = (int)(trainingTime % 60);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_15 = V_1;
		float L_16 = L_15->___trainingTime_98;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>((fmodf(L_16, (60.0f))));
		// timeText.text = minutes.ToString("00") + ":" + seconds.ToString("00");
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_17 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = L_17->___timeText_76;
		String_t* L_19;
		L_19 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_2), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		String_t* L_20;
		L_20 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_3), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_19, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_20, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_21);
		// if (minutes < 1)
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) >= ((int32_t)1)))
		{
			goto IL_0118;
		}
	}
	{
		// rewardUI.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_23 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___rewardUI_47;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// if (ClaimReward.rewardItemOwned == true)
		bool L_25 = ((ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70_StaticFields*)il2cpp_codegen_static_fields_for(ClaimReward_tA42DCA8EE951EAEDAD4001117B5F71D35E27AA70_il2cpp_TypeInfo_var))->___rewardItemOwned_7;
		if (!L_25)
		{
			goto IL_0124;
		}
	}
	{
		// claimButton.interactable = false;
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_26 = V_1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = L_26->___claimButton_25;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_27, (bool)0, NULL);
		// rewardBG.SetActive(false);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_28 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = L_28->___rewardBG_49;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
		// claimText.text = "REWARD CLAIMED";
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_30 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = L_30->___claimText_77;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_31, _stringLiteral26C41FCCE1256081FEFB088816B3B42D6B55390C);
		goto IL_0124;
	}

IL_0118:
	{
		// noRewardText.SetActive(true);
		Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418* L_32 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = L_32->___noRewardText_48;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)1, NULL);
	}

IL_0124:
	{
		// }
		return (bool)0;
	}
}
// System.Object Training/<EndingRoutine>d__106::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndingRoutineU3Ed__106_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m32C4C7290E380CD154A1EAD50B73C7549D6C066E (U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Training/<EndingRoutine>d__106::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndingRoutineU3Ed__106_System_Collections_IEnumerator_Reset_m764ECCADDF4ACB2A5602E21CC6EFB7960F5D124A (U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndingRoutineU3Ed__106_System_Collections_IEnumerator_Reset_m764ECCADDF4ACB2A5602E21CC6EFB7960F5D124A_RuntimeMethod_var)));
	}
}
// System.Object Training/<EndingRoutine>d__106::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndingRoutineU3Ed__106_System_Collections_IEnumerator_get_Current_m6B873B57AE9026692EEE9CF7CB259FF7D3DF8480 (U3CEndingRoutineU3Ed__106_tADAC805260A32EFF00166B5F6944BF475176FA86* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TrainingGrenade::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainingGrenade_OnTriggerEnter_m094B1B21B42089A12DF213D4FB567B4DAA130E86 (TrainingGrenade_t309DD781F0FCEF69B9519981BF4F9753E33F31D3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F9CDE8B6582FDCFCE0C325AEBCE08D31ACA6AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == "LandingCollider")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralE9F9CDE8B6582FDCFCE0C325AEBCE08D31ACA6AF, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// Training.grenadeSuccessful = true;
		il2cpp_codegen_runtime_class_init_inline(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var);
		((Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_StaticFields*)il2cpp_codegen_static_fields_for(Training_t8F8FE8F8131ECDBBDCA2AE909F217C41A6AAC418_il2cpp_TypeInfo_var))->___grenadeSuccessful_86 = (bool)1;
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TrainingGrenade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainingGrenade__ctor_mF0C286D2E12D0F12CD2A24B02C09BE88617AFEEF (TrainingGrenade_t309DD781F0FCEF69B9519981BF4F9753E33F31D3* __this, const RuntimeMethod* method) 
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
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m2Create1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0026:
	{
		// if (s.isSupported && m2Create && m2Create.shader == s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = ___s0;
		bool L_5;
		L_5 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_4, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___m2Create1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9;
		L_9 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_8, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___m2Create1;
		return L_12;
	}

IL_0046:
	{
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = ___s0;
		bool L_14;
		L_14 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_13, NULL);
		if (L_14)
		{
			goto IL_0090;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// Debug.Log("The shader " + s.ToString() + " on effect "+ToString()+" is not supported on this platform!");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_18 = ___s0;
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		ArrayElementTypeCheck (L_20, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
		ArrayElementTypeCheck (L_23, _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		String_t* L_24;
		L_24 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_24, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0090:
	{
		// m2Create = new Material (s);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_25 = ___s0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_26, L_25, NULL);
		___m2Create1 = L_26;
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___m2Create1;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_27, ((int32_t)52), NULL);
		// if (m2Create)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_28, NULL);
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = ___m2Create1;
		return L_30;
	}

IL_00aa:
	{
		// else return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CreateMaterial_mC9860A23866B8230D964BC09EDF7FD2878BA0D6C (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m2Create1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log ("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_001f:
	{
		// if (m2Create && (m2Create.shader == s) && (s.isSupported))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___m2Create1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___s0;
		bool L_11;
		L_11 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_10, NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___m2Create1;
		return L_12;
	}

IL_003f:
	{
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = ___s0;
		bool L_14;
		L_14 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_13, NULL);
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0049:
	{
		// m2Create = new Material (s);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = ___s0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_16, L_15, NULL);
		___m2Create1 = L_16;
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___m2Create1;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_17, ((int32_t)52), NULL);
		// if (m2Create)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_18, NULL);
		if (!L_19)
		{
			goto IL_0063;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = ___m2Create1;
		return L_20;
	}

IL_0063:
	{
		// else return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_OnEnable_m8BC44BA7499D510F0A9887FECDC2C475C3EC159A (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// isSupported = true;
		__this->___isSupported_6 = (bool)1;
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m059D1547A9DFFFF9D18D2B702D9C1A98871B3689 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// return CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckResources_m01EFEABDDEECF8931BDE27F6D76536FD52C2E273 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("CheckResources () for " + ToString() + " should be overwritten.");
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70, L_0, _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_1, NULL);
		// return isSupported;
		bool L_2 = __this->___isSupported_6;
		return L_2;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_Start_m256D1B7C8E17442D85DCCD08D6D157080A89B79C (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// CheckResources ();
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___needDepth0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* G_B2_0 = NULL;
	PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* G_B3_1 = NULL;
	{
		// isSupported = true;
		__this->___isSupported_6 = (bool)1;
		// supportHDRTextures = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf);
		bool L_0;
		L_0 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(2, NULL);
		__this->___supportHDRTextures_4 = L_0;
		// supportDX11 = SystemInfo.graphicsShaderLevel >= 50 && SystemInfo.supportsComputeShaders;
		int32_t L_1;
		L_1 = SystemInfo_get_graphicsShaderLevel_mA9BA383B643FD022F8AFAF445B63B6554D88D27C(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = SystemInfo_get_supportsComputeShaders_m66B7AF4AEC69D4819C794DDF8D2D800DAB946F3C(NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		G_B3_1->___supportDX11_5 = (bool)G_B3_0;
		// if (!SystemInfo.supportsImageEffects || !SystemInfo.supportsRenderTextures)
		bool L_3;
		L_3 = SystemInfo_get_supportsImageEffects_m42EC2773D0A8757B5D0F12080F999807F778668A(NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		bool L_4;
		L_4 = SystemInfo_get_supportsRenderTextures_m983E8742098E758FEDB979B7B18AED581176A836(NULL);
		if (L_4)
		{
			goto IL_0040;
		}
	}

IL_0038:
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// if (needDepth && !SystemInfo.SupportsRenderTextureFormat (RenderTextureFormat.Depth))
		bool L_5 = ___needDepth0;
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		bool L_6;
		L_6 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(1, NULL);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0053:
	{
		// if (needDepth)
		bool L_7 = ___needDepth0;
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = L_8;
		int32_t L_10;
		L_10 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_9, NULL);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_9, ((int32_t)((int32_t)L_10|1)), NULL);
	}

IL_0069:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mA7398DAA19FD5AC947119F26E3509974EAFC1664 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___needDepth0, bool ___needHdr1, const RuntimeMethod* method) 
{
	{
		// if (!CheckSupport(needDepth))
		bool L_0 = ___needDepth0;
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (needHdr && !supportHDRTextures)
		bool L_2 = ___needHdr1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->___supportHDRTextures_4;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_Dx11Support_mCAEFE6A80827A8B34E73B44DA8304C0CAD8330E5 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// return supportDX11;
		bool L_0 = __this->___supportDX11_5;
		return L_0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("The image effect " + ToString() + " has been disabled as it's not supported on the current platform.");
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15, L_0, _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckShader_m2915D7EE44889306449307C06FE3F9770FAAF012 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("The shader " + s.ToString () + " on effect "+ ToString () + " is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects (Pro only) package.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = ___s0;
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		ArrayElementTypeCheck (L_8, _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		String_t* L_9;
		L_9 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___s0;
		bool L_11;
		L_11 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_10, NULL);
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// isSupported = false;
		__this->___isSupported_6 = (bool)0;
		// return;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_DrawBorder_m501B2ABEF35941F9B67F4DE18B28051D2CEBBA53 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest0;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_0, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0ff;
		V_3 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C(NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_m0690AE9736A807C9D662FDB9D9A58CC5D6ECA510(NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_4 = 0;
		goto IL_027d;
	}

IL_001a:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material1;
		int32_t L_2 = V_4;
		bool L_3;
		L_3 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_1, L_2, NULL);
		// if (invertY)
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_5 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_6 = (0.0f);
		goto IL_0044;
	}

IL_0036:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_5 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_6 = (1.0f);
	}

IL_0044:
	{
		// x1 = 0.0f;
		// x2 = 0.0f + 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___dest0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_0 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_6), (1.0f)))))));
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.Begin(GL.QUADS);
		GL_Begin_m484E517466FBE5D4AE78DAC608E403159A57BD10(7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = (0.0f);
		float L_9 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_8, L_9, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_10, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = V_0;
		float L_12 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_11, L_12, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_13, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = V_0;
		float L_15 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_14, L_15, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_16, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_8, L_17, (0.100000001f), NULL);
		// x1 = 1.0f - 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___dest0;
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_20 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_20, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_21 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_19), (1.0f)))))));
		float L_22 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_21, L_22, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_23 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_23, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_24 = V_0;
		float L_25 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_24, L_25, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_26 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_26, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_27 = V_0;
		float L_28 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_27, L_28, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_29 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_29, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_30 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_21, L_30, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 0.0f + 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___dest0;
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_2 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_32), (1.0f)))))));
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_33 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_33, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_34 = (0.0f);
		float L_35 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_34, L_35, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_36 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_36, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_37 = V_0;
		float L_38 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_37, L_38, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_39 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_39, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_40 = V_0;
		float L_41 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_40, L_41, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_42 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_42, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_43 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_34, L_43, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 1.0f - 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ___dest0;
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_45), (1.0f)))))));
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_46 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_46, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_47 = (0.0f);
		float L_48 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_47, L_48, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_49 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_49, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_50 = V_0;
		float L_51 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_50, L_51, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_52 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_52, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_53 = V_0;
		float L_54 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_53, L_54, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_55 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_55, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_56 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_47, L_56, (0.100000001f), NULL);
		// GL.End();
		GL_End_m804EE4091F69FC2F6B764371D327CFCB28884550(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_027d:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_58 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = ___material1;
		int32_t L_60;
		L_60 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_59, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001a;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// protected bool  supportHDRTextures = true;
		__this->___supportHDRTextures_4 = (bool)1;
		// protected bool  isSupported = true;
		__this->___isSupported_6 = (bool)1;
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
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tonemapping_CheckResources_mC1C0CAB02BD19684E08232CD57248E018FD07C8E (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckSupport(false, true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_mA7398DAA19FD5AC947119F26E3509974EAFC1664(__this, (bool)0, (bool)1, NULL);
		// tonemapMaterial = CheckShaderAndCreateMaterial(tonemapper, tonemapMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___tonemapper_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tonemapMaterial_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___tonemapMaterial_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tonemapMaterial_17), (void*)L_3);
		// if (!curveTex && type == TonemapperType.UserCurve)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___curveTex_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (L_5)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_6 = __this->___type_7;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0070;
		}
	}
	{
		// curveTex = new Texture2D(256, 1, TextureFormat.ARGB32, false, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_7, ((int32_t)256), 1, 5, (bool)0, (bool)1, NULL);
		__this->___curveTex_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveTex_10), (void*)L_7);
		// curveTex.filterMode = FilterMode.Bilinear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___curveTex_10;
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_8, 1, NULL);
		// curveTex.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___curveTex_10;
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_9, 1, NULL);
		// curveTex.hideFlags = HideFlags.DontSave;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___curveTex_10;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_10, ((int32_t)52), NULL);
	}

IL_0070:
	{
		// if (!isSupported)
		bool L_11 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_11)
		{
			goto IL_007e;
		}
	}
	{
		// ReportAutoDisable();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_007e:
	{
		// return isSupported;
		bool L_12 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_12;
	}
}
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tonemapping_UpdateCurve_mADC42B4344BD7C6BF315CA7419DCE55A51B13156 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float range = 1.0f;
		V_0 = (1.0f);
		// if (remapCurve.keys.Length < 1)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___remapCurve_9;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1;
		L_1 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_0, NULL);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		// remapCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(2, 1));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_2 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (2.0f), (1.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___remapCurve_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remapCurve_9), (void*)L_7);
	}

IL_0053:
	{
		// if (remapCurve != null)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___remapCurve_9;
		if (!L_8)
		{
			goto IL_00e6;
		}
	}
	{
		// if (remapCurve.length > 0)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___remapCurve_9;
		int32_t L_10;
		L_10 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		// range = remapCurve[remapCurve.length - 1].time;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___remapCurve_9;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___remapCurve_9;
		int32_t L_13;
		L_13 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_12, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_14;
		L_14 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_11, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NULL);
		V_1 = L_14;
		float L_15;
		L_15 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_1), NULL);
		V_0 = L_15;
	}

IL_008d:
	{
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f/255.0f)
		V_2 = (0.0f);
		goto IL_00d3;
	}

IL_0095:
	{
		// float c = remapCurve.Evaluate(i*1.0f*range);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = __this->___remapCurve_9;
		float L_17 = V_2;
		float L_18 = V_0;
		float L_19;
		L_19 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_16, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, (1.0f))), L_18)), NULL);
		V_3 = L_19;
		// curveTex.SetPixel((int) Mathf.Floor(i*255.0f), 0, new Color(c, c, c));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = __this->___curveTex_10;
		float L_21 = V_2;
		float L_22;
		L_22 = floorf(((float)il2cpp_codegen_multiply(L_21, (255.0f))));
		float L_23 = V_3;
		float L_24 = V_3;
		float L_25 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_26), L_23, L_24, L_25, /*hidden argument*/NULL);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_20, il2cpp_codegen_cast_double_to_int<int32_t>(L_22), 0, L_26, NULL);
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f/255.0f)
		float L_27 = V_2;
		V_2 = ((float)il2cpp_codegen_add(L_27, (0.00392156886f)));
	}

IL_00d3:
	{
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f/255.0f)
		float L_28 = V_2;
		if ((((float)L_28) <= ((float)(1.0f))))
		{
			goto IL_0095;
		}
	}
	{
		// curveTex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = __this->___curveTex_10;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_29, NULL);
	}

IL_00e6:
	{
		// return 1.0f/range;
		float L_30 = V_0;
		return ((float)((1.0f)/L_30));
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tonemapping_OnDisable_m4E9ADFC3365B18E2A3ACF5F5B87BBE50FF08DF14 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rt)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___rt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// DestroyImmediate(rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___rt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
		// rt = null;
		__this->___rt_18 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rt_18), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_001f:
	{
		// if (tonemapMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// DestroyImmediate(tonemapMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_5, NULL);
		// tonemapMaterial = null;
		__this->___tonemapMaterial_17 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tonemapMaterial_17), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
	}

IL_003e:
	{
		// if (curveTex)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___curveTex_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// DestroyImmediate(curveTex);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___curveTex_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_8, NULL);
		// curveTex = null;
		__this->___curveTex_10 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveTex_10), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tonemapping_CreateInternalRenderTexture_mEA7D2798E23F5144C84D708B3CD71A3093B36E34 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B4_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B5_1 = NULL;
	{
		// if (rt)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___rt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// rtFormat = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.RGHalf) ? RenderTextureFormat.RGHalf : RenderTextureFormat.ARGBHalf;
		bool L_2;
		L_2 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(((int32_t)13), NULL);
		G_B3_0 = __this;
		if (L_2)
		{
			G_B4_0 = __this;
			goto IL_001c;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		goto IL_001e;
	}

IL_001c:
	{
		G_B5_0 = ((int32_t)13);
		G_B5_1 = G_B4_0;
	}

IL_001e:
	{
		G_B5_1->___rtFormat_19 = G_B5_0;
		// rt = new RenderTexture(1, 1, 0, rtFormat);
		int32_t L_3 = __this->___rtFormat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_4, 1, 1, 0, L_3, NULL);
		__this->___rt_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rt_18), (void*)L_4);
		// rt.hideFlags = HideFlags.DontSave;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___rt_18;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, ((int32_t)52), NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tonemapping_OnRenderImage_m3DDE8CADC9E8BEB73403CF71C46CC83F1E32C960 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB3105D1705C78EBC02C2DA0C3FD28BC6CD048E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3276B6EABA4BB4E3366F0EB502A5F578BE657F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC73E37BE554293C44E2A4E367137D91FC016C4D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC85CED4FA3BF4FAFA2854F821A7498848B323CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE666F21E0039F2BF222FB2B168055BD20FD930D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* V_4 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B4_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B5_1 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B29_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B28_0 = NULL;
	float G_B30_0 = 0.0f;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B30_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B32_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B32_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B32_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B31_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B31_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B31_2 = NULL;
	int32_t G_B33_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B33_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B33_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B33_3 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B35_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B34_0 = NULL;
	float G_B36_0 = 0.0f;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B36_1 = NULL;
	{
		// if (CheckResources() == false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit(source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// exposureAdjustment = exposureAdjustment < 0.001f ? 0.001f : exposureAdjustment;
		float L_3 = __this->___exposureAdjustment_11;
		G_B3_0 = __this;
		if ((((float)L_3) < ((float)(0.00100000005f))))
		{
			G_B4_0 = __this;
			goto IL_0026;
		}
	}
	{
		float L_4 = __this->___exposureAdjustment_11;
		G_B5_0 = L_4;
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_0026:
	{
		G_B5_0 = (0.00100000005f);
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		G_B5_1->___exposureAdjustment_11 = G_B5_0;
		// if (type == TonemapperType.UserCurve)
		int32_t L_5 = __this->___type_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// float rangeScale = UpdateCurve();
		float L_6;
		L_6 = Tonemapping_UpdateCurve_mADC42B4344BD7C6BF315CA7419DCE55A51B13156(__this, NULL);
		V_6 = L_6;
		// tonemapMaterial.SetFloat("_RangeScale", rangeScale);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___tonemapMaterial_17;
		float L_8 = V_6;
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_7, _stringLiteralEE666F21E0039F2BF222FB2B168055BD20FD930D, L_8, NULL);
		// tonemapMaterial.SetTexture("_Curve", curveTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tonemapMaterial_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___curveTex_10;
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F, L_10, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_11, L_12, L_13, 4, NULL);
		// return;
		return;
	}

IL_0078:
	{
		// if (type == TonemapperType.SimpleReinhard)
		int32_t L_14 = __this->___type_7;
		if (L_14)
		{
			goto IL_00a5;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___tonemapMaterial_17;
		float L_16 = __this->___exposureAdjustment_11;
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_15, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, L_16, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_17, L_18, L_19, 6, NULL);
		// return;
		return;
	}

IL_00a5:
	{
		// if (type == TonemapperType.Hable)
		int32_t L_20 = __this->___type_7;
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00d3;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___tonemapMaterial_17;
		float L_22 = __this->___exposureAdjustment_11;
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_21, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, L_22, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_23, L_24, L_25, 5, NULL);
		// return;
		return;
	}

IL_00d3:
	{
		// if (type == TonemapperType.Photographic)
		int32_t L_26 = __this->___type_7;
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_0101;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___tonemapMaterial_17;
		float L_28 = __this->___exposureAdjustment_11;
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_27, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, L_28, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 8);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_29, L_30, L_31, 8, NULL);
		// return;
		return;
	}

IL_0101:
	{
		// if (type == TonemapperType.OptimizedHejiDawson)
		int32_t L_32 = __this->___type_7;
		if ((!(((uint32_t)L_32) == ((uint32_t)4))))
		{
			goto IL_0135;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", 0.5f*exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___tonemapMaterial_17;
		float L_34 = __this->___exposureAdjustment_11;
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_33, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, ((float)il2cpp_codegen_multiply((0.5f), L_34)), NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 7);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_35, L_36, L_37, 7, NULL);
		// return;
		return;
	}

IL_0135:
	{
		// bool freshlyBrewedInternalRt = CreateInternalRenderTexture(); // this retrieves rtFormat, so should happen before rt allocations
		bool L_38;
		L_38 = Tonemapping_CreateInternalRenderTexture_mEA7D2798E23F5144C84D708B3CD71A3093B36E34(__this, NULL);
		V_0 = L_38;
		// RenderTexture rtSquared = RenderTexture.GetTemporary((int) adaptiveTextureSize, (int) adaptiveTextureSize, 0, rtFormat);
		int32_t L_39 = __this->___adaptiveTextureSize_8;
		int32_t L_40 = __this->___adaptiveTextureSize_8;
		int32_t L_41 = __this->___rtFormat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42;
		L_42 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_39, L_40, 0, L_41, NULL);
		V_1 = L_42;
		// Graphics.Blit(source, rtSquared);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_43, L_44, NULL);
		// int downsample = (int) Mathf.Log(rtSquared.width*1.0f, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_1;
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		float L_47;
		L_47 = Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline(((float)il2cpp_codegen_multiply(((float)L_46), (1.0f))), (2.0f), NULL);
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_47);
		// int div = 2;
		V_3 = 2;
		// var rts = new RenderTexture[downsample];
		int32_t L_48 = V_2;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_49 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)L_48);
		V_4 = L_49;
		// for (int i = 0; i < downsample; i++)
		V_7 = 0;
		goto IL_01af;
	}

IL_0184:
	{
		// rts[i] = RenderTexture.GetTemporary(rtSquared.width/div, rtSquared.width/div, 0, rtFormat);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_50 = V_4;
		int32_t L_51 = V_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = V_1;
		int32_t L_53;
		L_53 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_52);
		int32_t L_54 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = V_1;
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		int32_t L_57 = V_3;
		int32_t L_58 = __this->___rtFormat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59;
		L_59 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(((int32_t)(L_53/L_54)), ((int32_t)(L_56/L_57)), 0, L_58, NULL);
		ArrayElementTypeCheck (L_50, L_59);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_59);
		// div *= 2;
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_60, 2));
		// for (int i = 0; i < downsample; i++)
		int32_t L_61 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_01af:
	{
		// for (int i = 0; i < downsample; i++)
		int32_t L_62 = V_7;
		int32_t L_63 = V_2;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_0184;
		}
	}
	{
		// var lumRt = rts[downsample - 1];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_64 = V_4;
		int32_t L_65 = V_2;
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		V_5 = L_67;
		// Graphics.Blit(rtSquared, rts[0], tonemapMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68 = V_1;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_69 = V_4;
		int32_t L_70 = 0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_68, L_71, L_72, 1, NULL);
		// if (type == TonemapperType.AdaptiveReinhardAutoWhite)
		int32_t L_73 = __this->___type_7;
		if ((!(((uint32_t)L_73) == ((uint32_t)6))))
		{
			goto IL_020c;
		}
	}
	{
		// for (int i = 0; i < downsample - 1; i++)
		V_8 = 0;
		goto IL_0203;
	}

IL_01db:
	{
		// Graphics.Blit(rts[i], rts[i + 1], tonemapMaterial, 9);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_74 = V_4;
		int32_t L_75 = V_8;
		int32_t L_76 = L_75;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_78 = V_4;
		int32_t L_79 = V_8;
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_77, L_81, L_82, ((int32_t)9), NULL);
		// lumRt = rts[i + 1];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_83 = V_4;
		int32_t L_84 = V_8;
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		V_5 = L_86;
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_87 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_0203:
	{
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_88 = V_8;
		int32_t L_89 = V_2;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_89, 1)))))
		{
			goto IL_01db;
		}
	}
	{
		goto IL_0241;
	}

IL_020c:
	{
		// else if (type == TonemapperType.AdaptiveReinhard)
		int32_t L_90 = __this->___type_7;
		if ((!(((uint32_t)L_90) == ((uint32_t)5))))
		{
			goto IL_0241;
		}
	}
	{
		// for (int i = 0; i < downsample - 1; i++)
		V_9 = 0;
		goto IL_023a;
	}

IL_021a:
	{
		// Graphics.Blit(rts[i], rts[i + 1]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_91 = V_4;
		int32_t L_92 = V_9;
		int32_t L_93 = L_92;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_94 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_95 = V_4;
		int32_t L_96 = V_9;
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_94, L_98, NULL);
		// lumRt = rts[i + 1];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_99 = V_4;
		int32_t L_100 = V_9;
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = (L_99)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		V_5 = L_102;
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_103 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_023a:
	{
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_104 = V_9;
		int32_t L_105 = V_2;
		if ((((int32_t)L_104) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_105, 1)))))
		{
			goto IL_021a;
		}
	}

IL_0241:
	{
		// adaptionSpeed = adaptionSpeed < 0.001f ? 0.001f : adaptionSpeed;
		float L_106 = __this->___adaptionSpeed_14;
		G_B28_0 = __this;
		if ((((float)L_106) < ((float)(0.00100000005f))))
		{
			G_B29_0 = __this;
			goto IL_0257;
		}
	}
	{
		float L_107 = __this->___adaptionSpeed_14;
		G_B30_0 = L_107;
		G_B30_1 = G_B28_0;
		goto IL_025c;
	}

IL_0257:
	{
		G_B30_0 = (0.00100000005f);
		G_B30_1 = G_B29_0;
	}

IL_025c:
	{
		G_B30_1->___adaptionSpeed_14 = G_B30_0;
		// tonemapMaterial.SetFloat("_AdaptionSpeed", adaptionSpeed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108 = __this->___tonemapMaterial_17;
		float L_109 = __this->___adaptionSpeed_14;
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_108, _stringLiteralC85CED4FA3BF4FAFA2854F821A7498848B323CD4, L_109, NULL);
		// rt.MarkRestoreExpected(); // keeping luminance values between frames, RT restore expected
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_110 = __this->___rt_18;
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_110, NULL);
		// Graphics.Blit (lumRt, rt, tonemapMaterial, freshlyBrewedInternalRt ? 3 : 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_111 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_112 = __this->___rt_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113 = __this->___tonemapMaterial_17;
		bool L_114 = V_0;
		G_B31_0 = L_113;
		G_B31_1 = L_112;
		G_B31_2 = L_111;
		if (L_114)
		{
			G_B32_0 = L_113;
			G_B32_1 = L_112;
			G_B32_2 = L_111;
			goto IL_0296;
		}
	}
	{
		G_B33_0 = 2;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		G_B33_3 = G_B31_2;
		goto IL_0297;
	}

IL_0296:
	{
		G_B33_0 = 3;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
		G_B33_3 = G_B32_2;
	}

IL_0297:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(G_B33_3, G_B33_2, G_B33_1, G_B33_0, NULL);
		// middleGrey = middleGrey < 0.001f ? 0.001f : middleGrey;
		float L_115 = __this->___middleGrey_12;
		G_B34_0 = __this;
		if ((((float)L_115) < ((float)(0.00100000005f))))
		{
			G_B35_0 = __this;
			goto IL_02b2;
		}
	}
	{
		float L_116 = __this->___middleGrey_12;
		G_B36_0 = L_116;
		G_B36_1 = G_B34_0;
		goto IL_02b7;
	}

IL_02b2:
	{
		G_B36_0 = (0.00100000005f);
		G_B36_1 = G_B35_0;
	}

IL_02b7:
	{
		G_B36_1->___middleGrey_12 = G_B36_0;
		// tonemapMaterial.SetVector("_HdrParams", new Vector4(middleGrey, middleGrey, middleGrey, white*white));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117 = __this->___tonemapMaterial_17;
		float L_118 = __this->___middleGrey_12;
		float L_119 = __this->___middleGrey_12;
		float L_120 = __this->___middleGrey_12;
		float L_121 = __this->___white_13;
		float L_122 = __this->___white_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_123), L_118, L_119, L_120, ((float)il2cpp_codegen_multiply(L_121, L_122)), /*hidden argument*/NULL);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_117, _stringLiteral0CB3105D1705C78EBC02C2DA0C3FD28BC6CD048E, L_123, NULL);
		// tonemapMaterial.SetTexture("_SmallTex", rt);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124 = __this->___tonemapMaterial_17;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_125 = __this->___rt_18;
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_124, _stringLiteralC73E37BE554293C44E2A4E367137D91FC016C4D7, L_125, NULL);
		// if (type == TonemapperType.AdaptiveReinhard)
		int32_t L_126 = __this->___type_7;
		if ((!(((uint32_t)L_126) == ((uint32_t)5))))
		{
			goto IL_031f;
		}
	}
	{
		// Graphics.Blit(source, destination, tonemapMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_127 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_128 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_127, L_128, L_129, 0, NULL);
		goto IL_034a;
	}

IL_031f:
	{
		// else if (type == TonemapperType.AdaptiveReinhardAutoWhite)
		int32_t L_130 = __this->___type_7;
		if ((!(((uint32_t)L_130) == ((uint32_t)6))))
		{
			goto IL_0339;
		}
	}
	{
		// Graphics.Blit(source, destination, tonemapMaterial, 10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_131 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_132 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_131, L_132, L_133, ((int32_t)10), NULL);
		goto IL_034a;
	}

IL_0339:
	{
		// Debug.LogError("No valid adaptive tonemapper type found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral2C3276B6EABA4BB4E3366F0EB502A5F578BE657F, NULL);
		// Graphics.Blit(source, destination); // at least we get the TransformToLDR effect
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_134 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_135 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_134, L_135, NULL);
	}

IL_034a:
	{
		// for (int i = 0; i < downsample; i++)
		V_10 = 0;
		goto IL_035f;
	}

IL_034f:
	{
		// RenderTexture.ReleaseTemporary(rts[i]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_136 = V_4;
		int32_t L_137 = V_10;
		int32_t L_138 = L_137;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_139 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_138));
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_139, NULL);
		// for (int i = 0; i < downsample; i++)
		int32_t L_140 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_035f:
	{
		// for (int i = 0; i < downsample; i++)
		int32_t L_141 = V_10;
		int32_t L_142 = V_2;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_034f;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(rtSquared);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_143 = V_1;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_143, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tonemapping__ctor_mEF2579982D0293C0899810E4BCB8FF6B8862E84F (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	{
		// public TonemapperType type = TonemapperType.Photographic;
		__this->___type_7 = 3;
		// public AdaptiveTexSize adaptiveTextureSize = AdaptiveTexSize.Square256;
		__this->___adaptiveTextureSize_8 = ((int32_t)256);
		// public float exposureAdjustment = 1.5f;
		__this->___exposureAdjustment_11 = (1.5f);
		// public float middleGrey = 0.4f;
		__this->___middleGrey_12 = (0.400000006f);
		// public float white = 2.0f;
		__this->___white_13 = (2.0f);
		// public float adaptionSpeed = 1.5f;
		__this->___adaptionSpeed_14 = (1.5f);
		// public bool validRenderTextureFormat = true;
		__this->___validRenderTextureFormat_16 = (bool)1;
		// private RenderTextureFormat rtFormat = RenderTextureFormat.ARGBHalf;
		__this->___rtFormat_19 = 2;
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline (float ___f0, float ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___f0;
		float L_1 = ___p1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m00DE509EBC0F78461570ED4F104B3010EB203FD1(((double)L_0), ((double)L_1), NULL);
		V_0 = ((float)L_2);
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
