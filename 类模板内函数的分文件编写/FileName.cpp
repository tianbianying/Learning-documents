# include <iostream>
# include "Person.hpp"
using namespace std;

void test01()//��Ϊ��ģ���ڲ��ĺ���ֻ���ڵ���ʱ�Ż�ʵ�֣�������ͨ�ķ��ļ���д�ᵼ��cpp�ļ����ᱻ����
{			//���������ֽ������1.����cpp�ļ� 2.�ǰ������ļ���д��hpp�ļ�hppԼ���׳ɵ�����ģ���ļ�  �ڶ����Ǹ����õġ�
	Person<string, int>p("���", 2000);
	p.Print();
}

int main()
{
	test01();

	system("pause");
	return 0;
}
