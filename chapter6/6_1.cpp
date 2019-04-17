/*********
2019年4月17日23:01:01
6.1节练习
练习6.3 编写fact函数
练习6.4 编写一个与用户交互的函数，用户输入一个数字，生成该数字的阶乘；
练习6.5 编写一个函数输出其实参的绝对值
***************/

#include <iostream>
using namespace std;
//练习6.3
int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}
//练习6.4
int inputNum(void)
{
	int val;
	cin >> val;
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}
//练习6.5
int outputABS(int val)
{
	if (val >= 0)
		return val;
	else
		return (- 1 * val);
}
int main()
{
	int num1;
	num1 = fact(4);
	cout << num1 << endl;

	num1 = inputNum();
	cout << num1<<endl;

	cout << outputABS(50) << " " << outputABS(-20) << " " << endl;
	while (1);
}