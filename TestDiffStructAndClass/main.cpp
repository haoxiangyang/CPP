
#include <string>
#include <iostream>
#include "MyClass.h"


int main()
{

	MyClass *a = new ChildClassPublic();


	delete a;
	return 0;
}

