/*********
2019年4月18日19:35:49
6.5.2节练习
练习6.44 将6.2.2节的isShorter函数改写成内联函数
***************/

#include <iostream>
#include <string>

using namespace std;

inline const string  isShorter(const string &s1, const string &s2)   //内联函数可以消除函数调用的开销
{
	return s1.size() <= s2.size() ? s1:s2;
}


int main()
{
	//练习6.44
	string s1 = "hello", s2 = "world!!";

	cout << isShorter(s1, s2)<< endl;

	//一个是引用型，一个是非引用型参数
	while (1);
}