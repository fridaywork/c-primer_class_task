/*****************
2019年4月20日11:36:37
11.2.3节练习
练习11.12 读取string 和int 序列，将每个string和int存入一个pair中，pair保存在一个vector中
*********************/
#include	 <iostream>
#include     <fstream>
#include     <sstream>
#include	 <string>
#include	<vector>
#include	 <map>
#include     <list>
#include    <utility>
using namespace std;



int main()
{
	vector<pair<string, int>>   ppp;
	string word;
	int num;
	for (int i = 0; i < 4; i++)
	{
		cin >> word >> num;
		//练习11.3 三种方法创建
		//ppp.push_back({ word, num });
		//ppp.push_back(pair<string, int>(word, num));
		ppp.push_back(make_pair(word, num));

	}

	for (auto out : ppp)cout << out.first << ":" << out.second  << endl;
	while (1);
}



