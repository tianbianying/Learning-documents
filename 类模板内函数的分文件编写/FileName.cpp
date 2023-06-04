# include <iostream>
# include "Person.hpp"
using namespace std;

void test01()//因为类模板内部的函数只有在调用时才会实现，所以普通的分文件编写会导致cpp文件不会被编译
{			//所以有两种解决方法1.包含cpp文件 2.是把所有文件都写进hpp文件hpp约定俗成的是类模板文件  第二种是更常用的。
	Person<string, int>p("李白", 2000);
	p.Print();
}

int main()
{
	test01();

	system("pause");
	return 0;
}
