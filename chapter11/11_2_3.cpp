/*****************
2019��4��20��11:36:37
11.2.3����ϰ
��ϰ11.12 ��ȡstring ��int ���У���ÿ��string��int����һ��pair�У�pair������һ��vector��
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
		//��ϰ11.3 ���ַ�������
		//ppp.push_back({ word, num });
		//ppp.push_back(pair<string, int>(word, num));
		ppp.push_back(make_pair(word, num));

	}

	for (auto out : ppp)cout << out.first << ":" << out.second  << endl;
	while (1);
}



