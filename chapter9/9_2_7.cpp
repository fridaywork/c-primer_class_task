/***********************
2019年4月19日19:13:20
9.2.7节练习
练习9.15   写程序判断两个vector<int>是否想等
练习9.16   重写程序，比较一个list<int>中的元素和一个vector<int>中的元素
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
	if (ivec1 == ivec2)  cout << "相等的哦，惊不惊喜意不意外？" << endl;
	//for (int i = 0; i < ivec1.size() && i<ilist1.size(); i++)
	//{
	//	(ivec1[i] == ilist1[i]) ? (cout << "ture") : (cout << "false");   不行，无法用下标访问list
	//}

	//if (ilist1 == ivec1)  容器类型不相同，无法直接比较

	auto l_it = ilist1.begin();
	//auto l_end = ilist1.end();
	auto i_it = ivec1.begin();
	for (; l_it != ilist1.end() && i_it != ivec1.end(); l_it++, i_it++)
	{
		(*i_it == *l_it) ? (cout << "ture" <<endl): (cout << "false" << endl);
	}


	while (1);
}






