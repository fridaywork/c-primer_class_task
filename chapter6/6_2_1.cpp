/*********
2019年4月17日23:01:01
6.2.1节练习
6.2.2节练习
练习6.10 写一个使用指针交换两个整数只的函数

***************/

#include <iostream>
using namespace std;
//指针形式交换数据
int swapBP(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	return 0;
}
//引用形式交换数据
int swapRe(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}
int main()
{
	//练习6.10
	int num1=55,num2=22;
	int *p =&num1, *s=&num2;
	cout << "交换前: " << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
	swapBP(p,s);
	cout << "交换后: " << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
	//练习6.12
	swapRe(num1, num2);
	cout << "使用引用形式再次交换: " << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
	//引用形式不需要额外定义指针进行操作，更简便，缺点是C语言不支持引用形式
	while (1);
}