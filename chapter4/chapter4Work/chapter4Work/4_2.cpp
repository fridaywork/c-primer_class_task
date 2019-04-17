/*************
2019年4月17日21:02:12
4.2节练习
练习4.5 写出表达式求值结果
练习4.6 写一个确定一个整数是奇数还是偶数的表达式
****/


#include<iostream>


using namespace std;



int main()
{
	//练习4.5
	int  a, b, c, d;
	a = -30 * 3 + 21 / 5;
	b = -30 + 3 * 21 / 5;
	c = 30 / 3 * 21 % 5;
	d = -30 / 3 * 21 % 4;

	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << "d = " << d << endl;
	//练习4.6
	int number;
	cin >> number;
	if (number%2 == 0)
	{
		cout << number << " 是偶数" << endl;
	}else if(number%2 == 1)cout << number << " 是奇数" << endl;

	while (1);

}