#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// LevelManager
struct LevelManager_t2278695849;
// System.String
struct String_t;
// NumberWizard
struct NumberWizard_t1324418612;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_LevelManager2278695849.h"
#include "AssemblyU2DCSharp_LevelManager2278695849MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application2856536070MethodDeclarations.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_NumberWizard1324418612.h"
#include "AssemblyU2DCSharp_NumberWizard1324418612MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m4213759250 (LevelManager_t2278695849 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1910876804;
extern const uint32_t LevelManager_LoadLevel_m3246612564_MetadataUsageId;
extern "C"  void LevelManager_LoadLevel_m3246612564 (LevelManager_t2278695849 * __this, String_t* ___level0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadLevel_m3246612564_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___level0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral1910876804, L_0, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___level0;
		Application_LoadLevel_m2722573885(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern Il2CppCodeGenString* _stringLiteral1168445945;
extern const uint32_t LevelManager_QuitRequest_m3804828720_MetadataUsageId;
extern "C"  void LevelManager_QuitRequest_m3804828720 (LevelManager_t2278695849 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_QuitRequest_m3804828720_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral1168445945, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::.ctor()
extern "C"  void NumberWizard__ctor_m3481839335 (NumberWizard_t1324418612 * __this, const MethodInfo* method)
{
	{
		__this->set_maxGuessesAllowed_5(((int32_t)10));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::Start()
extern "C"  void NumberWizard_Start_m2428977127 (NumberWizard_t1324418612 * __this, const MethodInfo* method)
{
	{
		NumberWizard_StartGame_m2448777337(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::StartGame()
extern "C"  void NumberWizard_StartGame_m2448777337 (NumberWizard_t1324418612 * __this, const MethodInfo* method)
{
	{
		__this->set_min_2(1);
		__this->set_max_3(((int32_t)1000));
		NumberWizard_NextGuess_m2103075753(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::GuessHigher()
extern "C"  void NumberWizard_GuessHigher_m2086753803 (NumberWizard_t1324418612 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_guess_4();
		__this->set_min_2(L_0);
		NumberWizard_NextGuess_m2103075753(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::GuessLower()
extern "C"  void NumberWizard_GuessLower_m63023463 (NumberWizard_t1324418612 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_guess_4();
		__this->set_max_3(L_0);
		NumberWizard_NextGuess_m2103075753(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::NextGuess()
extern Il2CppCodeGenString* _stringLiteral86972;
extern const uint32_t NumberWizard_NextGuess_m2103075753_MetadataUsageId;
extern "C"  void NumberWizard_NextGuess_m2103075753 (NumberWizard_t1324418612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NumberWizard_NextGuess_m2103075753_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = __this->get_min_2();
		int32_t L_1 = __this->get_max_3();
		int32_t L_2 = Random_Range_m75452833(NULL /*static, unused*/, ((int32_t)((int32_t)L_0+(int32_t)1)), ((int32_t)((int32_t)L_1+(int32_t)1)), /*hidden argument*/NULL);
		__this->set_guess_4(L_2);
		Text_t9039225 * L_3 = __this->get_text_6();
		int32_t* L_4 = __this->get_address_of_guess_4();
		String_t* L_5 = Int32_ToString_m1286526384(L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		int32_t L_6 = __this->get_maxGuessesAllowed_5();
		__this->set_maxGuessesAllowed_5(((int32_t)((int32_t)L_6-(int32_t)1)));
		int32_t L_7 = __this->get_maxGuessesAllowed_5();
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		Application_LoadLevel_m2722573885(NULL /*static, unused*/, _stringLiteral86972, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
