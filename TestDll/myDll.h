#ifndef TEST_DLL
#define TEST_DLL


#ifdef DLL_EXPORT
#	define DLL_INSTANCE __declspec(dllexport)
#else
#	define DLL_INSTANCE __declspec(dllimport)
#endif // DLL_INSTANCE



DLL_INSTANCE int mySum(int a, int b);



#endif // !TEST_DLL


