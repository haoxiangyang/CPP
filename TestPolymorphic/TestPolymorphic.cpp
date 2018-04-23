// TestPolymorphic.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class B
{
	//int a;
};

class BaseA:public virtual B
{
public:
	virtual void BaseATest()
	{

	}

	virtual void BaseATest1()
	{

	}

	virtual void BaseATest2()
	{

	}
	virtual void BaseATest3()
	{

	}
	virtual void BaseATest4()
	{

	}
	virtual void BaseATest5()
	{

	}
};

class BaseB:public virtual B
{
public:
	virtual void BaseBTest()
	{

	}
};

class BaseC :public virtual B
{
public:
	//virtual void BaseCTest() {}

};

class D:public BaseA, public BaseB, public BaseC
{
public:
	void TestD() {

	}
};





int main()
{
	B b;
	cout << "B size:" << sizeof(B) << endl;
	cout << "B object ba size:" << sizeof(b) << endl;


	BaseA ba; 
	cout << "BaseA size:" << sizeof(BaseA) << endl;
	cout << "BaseA object ba size:" << sizeof(ba) << endl;

	BaseB bb;
	cout << "BaseB size:" << sizeof(BaseB) << endl;
	cout << "BaseB object bb size:" << sizeof(bb) << endl;

	D d;
	cout << "D size:" << sizeof(D) << endl;
	cout << "D object d size:" << sizeof(d) << endl;


	system("pause");

    return 0;
}

