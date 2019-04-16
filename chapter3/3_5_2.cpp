/**************************
2019年4月16日22:10:57
P104
练习3.5.2
练习3.31 编写一段程序定义一个含有10个int的数组，令每个元素的值为其下标值
练习3.32 将上一题创建的数组拷贝给另外一个数组，利用vector重写程序实现类似的功能；
********************************/
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
	//练习3.31
	int a[10];
	for (int i = 0; i < 10; i++)
		a[i] = i;
	cout << "a :";
	for (int i = 0; i < 10; i++)
		cout << a[i] << "  ";
	cout << endl;
	//练习3.32
	int b[10];
	//strcpy(b,a);z只能拷贝字符串 char 类型
	for (int i = 0; i < 10; i++)
		b[i] = a[i];
	cout << "b : ";
	for (int i = 0; i < 10; i++)
		cout << b[i] << "  ";
	cout << endl;
	//使用vector重写
	cout <<"vector reprogram "<< endl;
	vector<int> v1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> v2(10, 0);
	cout << "v1: ";
	for (auto it = v1.begin(); it != v1.end(); it++)
		cout << *it << " ";
	auto it = v1.begin();
	for (auto &c : v2)
	{
		c = *it;
		if (it != v1.end())
			it++;
	}
	cout <<endl <<  "v2: ";
	for (auto c : v2)
		cout << c << " ";
	while (1);
}