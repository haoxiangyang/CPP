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
T ClassTemplate<T>::st = 0;//ģ��ľ�̬��Ա

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
	cout << "ģ���ࣺ" << "test" << endl;
	return t1 + t2;
}



//add
//ģ���ģ�����


//ģ��Ļ��� 1.��������ͨ�� 2.������ģ����

