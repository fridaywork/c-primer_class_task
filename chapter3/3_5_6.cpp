/**************************
2019年4月16日22:10:57
P104
练习3.5.5
练习3.43 编写3个版本程序，均输出ia的元素，版本1使用范围for语句管理迭代过程，版本2、3使用普通for语句，版本2使用下标运算符，版本3使用指针，
不允许使用类型别名，auto关键字或者decltype关键字
练习3.44 将3.43的循环变量用类型别名
练习3.45 使用auto关键字实现
********************************/
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main(void)
{
	int   ia[3][4] = { 1, 2, 3, 4, 5 ,6,7,8,9,10,11,12};
	//练习3.43
	//版本1
	cout << "vertion 1 :" << endl;
	for (int(&row)[4]  : ia)
	{
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}
	cout << endl;
	////版本2
	cout << "vertion 2 :" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << ia[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	////版本3
	int (*p)[4] = ia;  //指向含有4个整形的数组的指针
	int *q;
	cout << "vertion 3 :" << endl;
	for (; p < ia + 3; p++)
	{
		for (q = *p; q < 4 + *p; q++)
			cout << *q << " ";
		cout << endl;
	}
	cout << endl;

	//练习3.44
	cout << "接下来使用类型声明控制循环变量" << endl;
	//版本1
	typedef int int_array[4];
     //这个实在不知道怎么写 
	for (int_array *p1 = ia; p1 != ia + 3;++p1)
	{
		for (int *q1 = *p1; q1 < 4 + *p1; q1++)
			cout << *q1 << " ";
		cout << endl;
	}
	cout << endl;
	//练习3.45 使用范围for语句
	cout << "使用范围for语句控制循环变量" << endl;
	for (auto &row : ia)
	{
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}

	while (1);

}
