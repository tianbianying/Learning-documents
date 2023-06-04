#pragma once
# include <iostream>
using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void Print();
	T1 name;
	T2 age;
};


template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}


template<class T1, class T2>
void Person<T1, T2>::Print()
{
	cout << "������" << this->name << " ���䣺" << endl;
}