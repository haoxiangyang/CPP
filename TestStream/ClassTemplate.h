#pragma once

//declaration and defination together

template <typename T>
class ClassTemplate
{
public:
	ClassTemplate();
	~ClassTemplate();

	T add(T t1, T t2);

	static T st;
	T t;
};

template <typename T>
T ClassTemplate<T>::st = 0;//模板的静态成员

template<typename T>
ClassTemplate<T>::ClassTemplate() :t(0)
{
}

template <typename T>
ClassTemplate<T>::~ClassTemplate()
{
}

template <typename T>
T ClassTemplate<T>::add(T t1, T t2)
{
	cout << "模板类：" << "test" << endl;
	return t1 + t2;
}



//add
//模板的模板参数


//模板的基类 1.基类是普通类 2.基类是模板类

