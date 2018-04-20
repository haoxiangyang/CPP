#ifndef TEST_DLL
#define TEST_DLL


#ifdef DLL_EXPORT
#	define DLL_INSTANCE __declspec(dllexport)
#else
#	define DLL_INSTANCE __declspec(dllimport)
#endif // DLL_INSTANCE

#ifdef __cplusplus

extern "C"
{

#endif // __cplusplus


	DLL_INSTANCE int mySum(int a, int b);

#ifdef __cplusplus
}
#endif // __cplusplus


#endif // !TEST_DLL


