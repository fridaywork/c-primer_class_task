/**************************
2019年4月16日20:43:16
P99
练习3.4.1
练习3.21 使用迭代器重做3.16
练习3.22 修改之前输出text的第一段程序，首先把text的第一段全改成大写，再输出它
练习3.23 编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值变成原来的两倍。
输出vector对象的内容看是否正确
********************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define  work_3_23
int main()
{

#ifdef  work_3_21
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{};
	vector<int> v5{ 10, 42 };
	vector<int> v6{ 10 };
	vector<string> v7{ 10, "hi" };
	cout << "v1: ";
	for (auto it = v1.begin(); it != v1.end();it ++)cout << *it << " ";
	cout << endl;
	cout << "v2: ";
	for (auto it = v2.begin(); it != v2.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v3: ";
	for (auto it = v3.begin(); it != v3.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v4: ";
	for (auto it = v4.begin(); it != v4.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v5: ";
	for (auto it = v5.begin(); it != v5.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v6: ";
	for (auto it = v6.begin(); it != v6.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v7: ";
	for (auto it = v7.begin(); it != v7.end(); it++)cout << *it << " ";
	cout << endl;

#endif


#ifdef  work_3_22
	string  s("hello world");
	if (s.begin() != s.end())
	{
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout <<"改写首字母为大写： " <<s << endl;
	for (auto it = s.begin(); it != s.end()&& !isspace(*it);it++)
	{
		*it = toupper(*it);
	}
	cout <<"改写第一个单词为大写： "<< s << endl;
#endif

#ifdef work_3_23
	vector<int> someNum(10,25);
	for (auto c : someNum)
		cout << c << "  ";
	cout << endl;
	for (auto it = someNum.begin(); it != someNum.end(); it++)
	{
		*it *= 2;
	}
	for (auto c : someNum)      //访问时必须用这种形式
		cout << c << "  ";
	cout << endl;
	for (auto it = someNum.begin(); it != someNum.end(); it++)
	{
		(*it)++;  //测试发现*it++语句无效,必须加上括号
	}
	for (auto c : someNum)      //访问时必须用这种形式
		cout << c << "  ";
	cout << endl;
#endif
	while (1);


}
