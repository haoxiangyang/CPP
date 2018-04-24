#pragma once

#include <string>
#include <iostream>

using namespace std;

//declaration and defination together
template <typename T>
T square(T value)
{
	T result;

	result = value * value;

	return result;
};


template <> 
string square<string>(string s)
{
	return s + s;
};

template <typename T, int count>
void nPrint(T t)
{
	if (count <= 0)
		return;
	for (int i = 0; i < count; ++i)
	{
		cout << "无类型参数:" << t << endl;
	}
}

template <typename T = string, int count = 4>
void multPrint(T t)
{
	if (count <= 0)
		return;
	for (int i = 0; i < count; ++i)
	{
		cout << "默认类型参数以及无类型参数:" << t << endl;
	}
}

