/*************
2019年4月17日21:02:12
4.3节练习
练习4.10 为while循环写一个条件，从标准输入中读入整数，遇到42的时候停止
练习4.11 写一个表达式判断a/b/c/d值的大小关系，确保a大于b，b大于c，c大于d
****/


#include<iostream>


using namespace std;



int main()
{
	//练习4.10
	int  temp = 0;
	while (temp != 42) //遇到42就停止
	{
		cin >> temp;
		cout << "input is  " << temp << endl;
	}
	cout << "break  " << endl;

	//练习4.11
	int a = 50, b = 4, c = 3, d = 5;
	if (a > b && b > c && c > d)cout << "ture" << endl;
	else cout << "false" << endl;
	while (1);

}