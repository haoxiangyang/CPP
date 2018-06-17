// Overwrite_Overload_Hide.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Base {
public:
	virtual void fun1(int i) {
		cout << "Base fun1" << endl;
		return;
	}

	void fun2(int i) {
		cout << "over load fun2()" << endl;
	}

	void fun2()// over load
	{
		cout << "over load fun2(int i)" << endl;
	}

	virtual void fun3(int i) {
		cout << "base fun3 " << endl;
	}

	void fun33(int i) {
		cout << "base fun3 " << endl;
	}

	void fun4(int i) {
		cout << "base fun4" << endl;
	}
};

class Sub :public Base {
public:
	void fun1(int i) //over write
	{
		cout << "over write base fun1" << endl;
	}

	void fun3(int i)//hide base fun3
	{
		cout << "Sub hide base fun3" << endl;
	}

	void fun33(int i)//hide base fun33
	{
		cout << "Sub hide base fun33" << endl;
	}

	void fun4(float f) {
		cout << "sub hide base fun4" << endl;
	}
};



int main()
{
	Base* pB = new Sub();
	//pB->fun(4);

    return 0;
}

