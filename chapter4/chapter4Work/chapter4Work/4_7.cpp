/*************
2019年4月17日21:33:10
4.7节练习
条件运算符
练习4.21 使用条件运算符从vector<int>中找到奇数值元素，将其翻倍
练习4.22.1 使用条件运算符将示例程序划分成high pass 、pass 、fail 三种，扩展程序进一步将60分到75分成绩设定为low pass
练习4.22.2 使用if语句完成4.22的程序

****/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//练习4.21
	vector<int> vv = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto c : vv)
		cout << c << "  ";
	cout << endl << "将奇数翻倍后输出: " << endl;
	for (auto &c : vv)
		(c % 2 == 1) ? (cout << 2*c << " ") : (cout << c << " ");

	//练习4.22.1
#if 0
	int grade;
	string finalgrade = "what ??";
	while (cin >> grade)
	{
		finalgrade = (grade > 100) ? "error " : (grade > 90) ? "high pass " : (grade >= 75) ? "pass" : (grade >= 60) ? "low pass" : "fail";
		cout << finalgrade << endl;
	}
#endif
	//练习4.22.2
	int grade;
	while (cin >> grade)
	{
		if (grade > 100)
			cout << "error";
		else if (grade > 90)
			cout << "high pass";
		else if (grade >= 75)
			cout << "pass";
		else if (grade >= 60)
			cout << "low pass";
		else 
			cout << "fail";

		cout << endl;
	}

	//分析：从可读性来说，使用if语句更容易理解，从程序简洁性来说，条件表达式更简洁，但是条件表达式因为结合顺序问题
	//在处理过长的判断逻辑的时候极易写错程序
	while (1);

}