/***********************
2019��4��19��21:10:08
9.2.7����ϰ
��ϰ9.18   �ӱ�׼�����ж�ȡstring���д���deque�С�ʹ�õ�������ӡdeque�е�Ԫ��
��ϰ9.19   ��д���򣬱Ƚ�һ��list<int>�е�Ԫ�غ�һ��vector<int>�е�Ԫ��
��ϰ9.20   ��һ��list<int> ����Ԫ�ص�����deque�У�ֵΪż��������Ԫ�ؿ�����deque�У�����ֵԪ�ؿ�������һ��deque��
********************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;
int main(void)
{
#if 0
	//9.18
	deque<string> de;
	string word;
	for (int i = 0; i < 6; i++)
	{
		cin >> word;
		de.insert(de.cend(), word);
	}
	cout << "���ڿ�ʼ��� " << endl;
	for (auto it = de.begin(); it != de.end(); it++)
	{
		cout << *it << endl;
	}
//#endif

	//9.19
	list<string> de;
	string word;
	for (int i = 0; i < 6; i++)
	{
		cin >> word;
		de.insert(de.cend(), word);  
	}
	cout << "���ڿ�ʼ��� " << endl;
	for (auto it = de.begin(); it != de.end(); it++)
	{
		cout << *it << endl;
	}
#endif

	//9.20
	list<int>  ilist = { 1, 2, 3, 4, 5, 6, 7, 8 };
	deque<int> de1,de2;

	for (auto it = ilist.begin(); it != ilist.end(); it++)
	{
		if (*it % 2)
			de1.push_back(*it);
		else
			de2.push_back(*it);
	}

	for (auto c : de1)cout << c << " ";
	cout << endl;
	for (auto i : de2)cout << i << " ";

	while (1);
}






