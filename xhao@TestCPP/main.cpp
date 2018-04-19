
#include "base.h"

void* fun(int (*p)[4]) {
	;
}


int main(int argc, TCHAR* argv[])
{
	int a[2][4] = { 0 };
	fun(a);
	return 0;
}