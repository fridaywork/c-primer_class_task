/***********************
2019年4月19日21:10:08
9.2.7节练习
练习9.18   从标准输入中读取string序列存入deque中。使用迭代器打印deque中的元素
练习9.19   重写程序，比较一个list<int>中的元素和一个vector<int>中的元素
练习9.20   从一个list<int> 拷贝元素到两个deque中，值为偶数的所有元素拷贝到deque中，奇数值元素拷贝到另一个deque中
********************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;
int main(void)
{
#if 0
	//9.18
	deque<string> de;
	string word;
	for (int i = 0; i < 6; i++)
	{
		cin >> word;
		de.insert(de.cend(), word);
	}
	cout << "现在开始输出 " << endl;
	for (auto it = de.begin(); it != de.end(); it++)
	{
		cout << *it << endl;
	}
//#endif

	//9.19
	list<string> de;
	string word;
	for (int i = 0; i < 6; i++)
	{
		cin >> word;
		de.insert(de.cend(), word);  
	}
	cout << "现在开始输出 " << endl;
	for (auto it = de.begin(); it != de.end(); it++)
	{
		cout << *it << endl;
	}
#endif

	//9.20
	list<int>  ilist = { 1, 2, 3, 4, 5, 6, 7, 8 };
	deque<int> de1,de2;

	for (auto it = ilist.begin(); it != ilist.end(); it++)
	{
		if (*it % 2)
			de1.push_back(*it);
		else
			de2.push_back(*it);
	}

	for (auto c : de1)cout << c << " ";
	cout << endl;
	for (auto i : de2)cout << i << " ";

	while (1);
}






