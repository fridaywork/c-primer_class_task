/*************
2019年4月17日22:19:11
5.3.2节练习
练习5.9  使用一系列语句统计从cin读入的文本中有多少元音字母
练习5.10 遇到大写字母时也计数

练习5.12 统计加上ff fl fi
****/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//练习5.9 & 练习5.10
#if 0
	char ch;
	int cnto = 0;
	while (cin >> ch)
	{
		if (ch == 'a'|| ch == 'A')cnto++;
		else if (ch == 'e' || ch == 'E')cnto++;
		else if (ch == 'i' || ch == 'I')cnto++;
		else if (ch == 'o' || ch == 'O')cnto++;
		else if (ch == 'u' || ch == 'U')cnto++;
	}
	cout << "元音字母数量: " << cnto<< endl;
#endif
	
	string word;
	int cntfi = 0, cntfl = 0, cntff = 0;
	while (cin >> word)
	{
		//switch (word)  string不能用于switch
		if (word == "ff")cntff++;
		else if (word == "fl")cntfl++;
		else if (word == "fi")cntfi++;
	}
	cout << "ff :" << cntff << endl << "fl :" << cntfl << endl << "fi :" << cntfi << endl;
	while (1);

}