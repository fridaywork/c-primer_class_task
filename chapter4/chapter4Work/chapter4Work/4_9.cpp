/*************
2019年4月17日21:33:10
4.9节练习
P140
sizeof
练习4.28 输出每一种内置类型所占的空间大小 
****/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//练习4.28
	cout << "类型名称\t" << "所占空间/byte" << endl;
	cout << "bool\t\t" << sizeof(bool) << endl;
	cout << "char\t\t" << sizeof(char) << endl;
	cout << "wchar_t\t\t" << sizeof(wchar_t) << endl;
	cout << "char16_t\t" << sizeof(char16_t) << endl;
	cout << "char32_t\t" << sizeof(char32_t) << endl;
	cout << "short\t\t" << sizeof(short) << endl;
	cout << "int\t\t" << sizeof(int) << endl;
	cout << "long\t\t" << sizeof(long) << endl;
	cout << "long long\t" << sizeof(long long) << endl;
	cout << "float\t\t" << sizeof(float) << endl;
	cout << "double\t\t" << sizeof(double) << endl;
	cout << "long double\t" << sizeof(long double) << endl;


	while (1);

}