
#include "base.h"
#include "..\TestDll\myDll.h"

void fun(int (*p)[4]) {
	;
}


int main(int argc, TCHAR* argv[])
{
	//int a[2][4] = { 0 };
	//fun(a);
	int sum = mySum(10,1);
	return 0;
}