
#include "base.h"
#include "..\TestDll\myDll.h"
#include "..\TestFriendFunAndCls\ExportInstance.h"

void fun(int (*p)[4]) {
	;
}


int main(int argc, TCHAR* argv[])
{
	//int a[2][4] = { 0 };
	//fun(a);
	int sum = mySum(10,1);

	int age = TestFriend();

	return 0;
}