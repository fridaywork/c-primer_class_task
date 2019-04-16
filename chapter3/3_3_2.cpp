/******************************************************
2019年4月10日21:49:56
练习3.14 ：编写一段程序，用cin读入一组整数并将其存入一个vector对象；
练习3.15 ： 改写上题程序，使之读入的对象为字符串；
练习3.16 ：将输入vector的元素输出
**********************************************************/
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	//练习3.14
	vector<int> num;
	int temp;
	for (int i = 0; i < 10; i++)
	{
		cin >> temp;
		num.push_back(temp);
	}
	for (auto &i : num)  //必须要用for语句逐一访问
		cout << i << ' ';
	//练习3.15
	string word;			//我记得在C语言中变量只能在执行语句前定义声明
	vector<string> someStr;
	while (cin >> word)
	{
		someStr.push_back(word);
	}
	for (auto &i : someStr)  //必须要用for语句逐一访问
		cout << i << ' ';
	while (1);
}