/*************
2019年4月17日22:19:11
5.5.1节练习
练习5.20  从标准输入读取对象序列直到出现两个重复单词或者读完为止，若出现连个重复单词，中断循环，输出重复单词或者无重复单词
****/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//练习5.20
	string word, wordpre;
	char flag = 0;
	while (cin >> word)
	{
		if(word == wordpre)
		{
			flag = 1;
			break;
		}
		wordpre = word;
	}
	if (flag)cout << word << endl;
	else cout << "没有重复单词" << endl;
	while (1);

}