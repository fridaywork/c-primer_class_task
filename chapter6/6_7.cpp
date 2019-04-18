/*********
2019年4月18日19:35:49
6.7节练习
练习6.54 编写函数声明，令其接受两个int形参并且返回值也是int；然后声明一个vector对象，令其元素指向该函数的指针；
练习6.55 编写4个函数，分别对两个int值执行加减乘除运算，在上一题创建的vector对象中保存指向这些函数的指针；
练习6.56 调用上述vector对象中的每个元素并输出其结果；
***************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
//练习6.54
int fuction_add(int a, int b)
{
	return a + b;

}
int fuction_sub(int a, int b)
{
	return a - b;
}
int fuction_mul(int a, int b)
{
	return a*b;
}
int fuction_div(int a, int b)
{
	if (b != 0)
		return a / b;
	else return 0;
}


int main()
{
	//练习6.54  6.55 6.56
	vector<decltype(fuction_add)*>ff;   ///声明写的有点难理解，还需要更多的练习熟悉
	int(*pf)(int a, int b) = fuction_add;
	pf = fuction_add;
	ff.push_back(pf);   
	pf = fuction_sub;
	ff.push_back(pf);
	pf = fuction_mul;
	ff.push_back(pf);
	pf = fuction_div;
	ff.push_back(pf);
	for (auto c : ff)
	{
		cout << c(50, 10) << endl;
	}
	
	while (1);
}