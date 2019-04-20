/***********************
2019年4月19日21:10:08
9.3.2节练习
练习9.24  分别使用at 下标运算符 front和begin提前vector中的第一个元素
********************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;
int main(void)
{
	vector<string> empty;
	string str;

	cout << empty.at(0);
	cout << endl;
	cout << empty[0];
	cout << endl;
	cout << empty.front();
	cout << endl;
	cout << *(empty.begin());
	cout << endl;

	//因为vector是空的，引起了花式报错
	while (1);
}






