#ifndef DIFF_STRUCT
#define DIFF_STRUCT

#include <string>
#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass();
	virtual ~MyClass();//need to be virtual

protected://>= protected, child class can access the variable
	int age;
};

class ChildClassPublic :public MyClass
{
public:
	ChildClassPublic() 
	{
		cout << "child Construct" << endl;
	}
	~ChildClassPublic()
	{
		cout << "child destruct" << endl;

	}
public:
	int GetBaseAge() 
	{
		return age;
	}

};

struct MyStruct
{
public:
	MyStruct():age(1), b(false)
	{

	}
	~MyStruct()
	{

	}

protected:
	int age;
	bool b;

};

struct ChildStruct: MyStruct
{
public:
	int GetBaseAge()
	{
		return age;
	}
};

#endif // !DIFF_STRUCT