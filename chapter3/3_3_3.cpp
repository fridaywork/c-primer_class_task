/**************************
2019年4月10日22:33:40
P94
练习3.3.3
练习3.16 将练习3.13中vector对象的内容输出出来
练习3.17 从cin读入一组词并把他们存入一个vector对象，然后将所有词改写为大写格式输出
练习3.20 读入一组整数并把他们存入一个vector对象，将每对相邻整数的和输出出来。改写程序，先输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素和，以此类推
********************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define  work_3_16
int main()
{
#ifdef  work_3_16
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{};
	vector<int> v5{ 10, 42 };
	vector<int> v6{ 10 };
	vector<string> v7{10,"hi"};
	cout << "v1: ";
	for (auto c : v1)cout << c << " ";
	cout << endl;
	cout << "v2: ";
	for (auto c : v2)cout << c << " ";
	cout << endl;
	cout << "v3: ";
	for (auto c : v3)cout << c << " ";
	cout << endl;
	cout << "v4: ";
	for (auto c : v4)cout << c << " ";
	cout << endl;
	cout << "v5: ";
	for (auto c : v5)cout << c << " ";
	cout << endl;
	cout << "v6: ";
	for (auto c : v6)cout << c << " ";
	cout << endl;
	cout << "v7: ";
	for (auto c : v7)cout << c << " ";
	cout << endl;

#endif
#ifdef  word_3_17
	//练习3.17 
	vector<string> inputWord;
	string temp;
	while (cin >> temp)
	{
		inputWord.push_back(temp);
	}
	for (auto i : inputWord)
		cout << i ;
	cout << endl;

	for (int i = 0; i < inputWord.size(); i++)
	{
		for (int j = 0; j < inputWord[i].length();j++)
		{
			inputWord[i][j] = toupper(inputWord[i][j]);
		}
	}
	for (auto i : inputWord)
		cout << i;
	cout << endl;
#endif

#ifdef  work_3_19
	vector<int>		vv1 {42,42,42,42,42,42,42,42,42,42};
	vector<int>		vv2(10, 42);
	vector<int>		vv3 = { 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
	//在定义重复的元素时，方法2是最便捷的，在需要定义列表元素时，显然方法1更直观更合适；
#endif
	
#ifdef  work_3_20
	vector<int>  uu;
	int temp;
	while (cin >> temp)
	{
		uu.push_back(temp);
	}
	for (int i = 0; i < uu.size(); i++)
	{
		if (i + 1 ==uu.size())
		{
			cout << uu[i] << " ";   //引入防止下标溢出的边界判断
			break;
		}
		else cout << uu[i] + uu[i + 1] << " ";
		i++;

	}
	cout << "\n"<<"输出第i个和最后n-i个元素和" << endl;

	for (int i = 0; i < uu.size()/2 ; i++)
	{
		cout << uu[i] + uu[uu.size() - i - 1] << " ";
	}
	if (uu.size() % 2 == 1)                  //对于奇数个数，中间的数输出它本身的两倍
		cout << uu[uu.size() / 2]*2 << " ";

#endif


	while (1);


}
