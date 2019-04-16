/**************************
2019年4月16日19:38:14
P101
练习3.4.2
练习3.24 使用迭代器重做3.20
练习3.25 使用迭代器实现3.3.3节的划分分数段的程序

********************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define  work_3_25
int main()
{

#ifdef  work_3_24
	vector<int>  uu;
	int temp;
	while (cin >> temp)
	{
		uu.push_back(temp);
	}
	cout << "输出相邻两个元素和，若一共奇数个，单独输出最后一个数" << endl;
	for (auto it = uu.begin(); it != uu.end(); it++)   //C++的迭代器其实跟C的指针很像
	{
		if (it + 1 == uu.end())
		{
			cout << *it<< " ";   //引入防止下标溢出的边界判断
			break;
		}
		else cout << *it + *(it+1) << " ";
		it++;

	}
	cout << "\n"<<"输出第i个和最后n-i个元素和" << endl;
	auto itf = uu.begin();
	auto ite = uu.end();
	for (itf = uu.begin(); itf != uu.begin() + uu.size() / 2; itf++)
	{
		cout << *itf + *(ite-1) << " ";      //uu.end()是一个不可访问的地址，访问它会导致溢出
		ite--;
	}
	itf = uu.begin();
	if (uu.size() % 2 == 1)                  //对于奇数个数，中间的数输出它本身的两倍
		cout << *(itf +(uu.size() / 2)) * 2 << " ";

#endif


#ifdef  work_3_25
	vector<string>   score_part = { "0~9", "10~19", "20~29", "30~39", "40~49", "50~59", "60~69", "70~79", "80~89", "90~99","100" };
	vector<unsigned> scores(11, 0);  
	unsigned grade;// , temp1;
//	auto it = scores.begin();
	//auto tempIt = scores.begin();
	while (cin >> grade)
	{
		if (grade < 101)
		{
			auto it = scores.begin() + (grade / 10);
		//	tempIt = it + temp1;     //
			(*it)++;
		}
	}
	for (auto c : score_part)
		cout << c << "  ";
	cout << endl;
	for (auto c : scores)
		cout << c << "      ";
#endif

	while (1);


}
