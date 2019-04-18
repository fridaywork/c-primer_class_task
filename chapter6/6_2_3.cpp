/*********
2019年4月17日23:01:01
6.2.3节练习
练习6.17 写一个函数判断string中是否有大写字母，另一个函数将所有对象都改写成小写形式

***************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//是否含有大写字母
int hadUpper0(string ss)
{
	for (auto c : ss)
	{
		if (isupper(c))
		{
			cout << "有大写字母 " << endl;
			return 1;
		}
	}

	cout << "没有大写字母 " << endl;
	return 0;
}
//将所有大写字母转换成小写字母
int allToLower(string &ss)
{
	for (auto &c : ss)
	{
		if (isupper(c))
		{
			c = tolower(c);
		}
	}
	return 0;
}

int main()
{
	//练习6.17
	string  ss1 = "hello world";
	string  ss2 = "SURPRISE mother fucker";
	cout << "ss1 :";
	hadUpper0(ss1);
	cout << "ss2 :";
	hadUpper0(ss2);
	allToLower(ss2);
	cout << "转换后的ss2 ：" << ss2 << endl;

	//一个是引用型，一个是非引用型参数
	while (1);
}