/***********************
2019��4��19��19:13:20
9.2.7����ϰ
��ϰ9.15   д�����ж�����vector<int>�Ƿ����
��ϰ9.16   ��д���򣬱Ƚ�һ��list<int>�е�Ԫ�غ�һ��vector<int>�е�Ԫ��
********************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;
int main(void)
{
	vector<int> ivec1(10, 8);
	vector<int> ivec2(10, 8);
	list<int>   ilist1(10, 2);
	if (ivec1 == ivec2)  cout << "��ȵ�Ŷ��������ϲ�ⲻ���⣿" << endl;
	//for (int i = 0; i < ivec1.size() && i<ilist1.size(); i++)
	//{
	//	(ivec1[i] == ilist1[i]) ? (cout << "ture") : (cout << "false");   ���У��޷����±����list
	//}

	//if (ilist1 == ivec1)  �������Ͳ���ͬ���޷�ֱ�ӱȽ�

	auto l_it = ilist1.begin();
	//auto l_end = ilist1.end();
	auto i_it = ivec1.begin();
	for (; l_it != ilist1.end() && i_it != ivec1.end(); l_it++, i_it++)
	{
		(*i_it == *l_it) ? (cout << "ture" <<endl): (cout << "false" << endl);
	}


	while (1);
}






