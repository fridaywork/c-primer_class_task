/**************************
2019年4月16日22:10:57
P104
练习3.5.5
练习3.41 编写一段程序，用整形数组初始化一个vector对象
练习3.42 将含有整数元素的vector对象拷贝给整形数组
********************************/
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
	//练习3.41
	int a[10];
	for (int i = 0; i < 10; i++)
		a[i] = i;
	cout << "a :";
	for (int i = 0; i < 10; i++)
		cout << a[i] << "  ";
	cout << endl;
	vector<int> v1(begin(a),end(a));
	cout << "传过来的v1 ：";
	for (auto c : v1)
		cout << c << " ";
	cout << endl;
	//练习3.42
	int b[20];
	cout << "array b :";
	for (int i = 0; i < v1.size(); i++)
	{
		b[i] = v1[i];
	}
	for (int i = 0; i < v1.size(); i++)
		cout << b[i] << "  ";
	cout << endl;

	while (1);
}