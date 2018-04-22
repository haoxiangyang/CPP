#ifndef TEST_FRIEND
#define TEST_FRIEND


#ifdef DLL_EXPORT
#	define DLL_INSTANCE __declspec(dllexport)
#else
#	define DLL_INSTANCE __declspec(dllimport)
#endif // DLL_INSTANCE

#ifdef __cplusplus

extern "C"
{

#endif // __cplusplus


	DLL_INSTANCE int TestFriend();

#ifdef __cplusplus
}
#endif // __cplusplus


#endif // !TEST_FRIEND


