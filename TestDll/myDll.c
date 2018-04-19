#include "myDll.h"

_declspec(dllexport) int mySum(int a, int b)
{
	return a + b;
}