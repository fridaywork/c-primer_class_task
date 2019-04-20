/***********************
2019年4月19日21:10:08
9.3.2节练习
练习9.26  使用下面代码定义ia，将ia拷贝到一个vector和一个list中，使用单迭代版本的erase从list中删除奇数元素，从vector中删除偶数元素
********************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;
int main(void)
{
	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
	vector<int> ivec1;
	list<int> ilist;
	cout << "ia [] :";
	for (int i = 0; i < sizeof(ia)/4; i++)
	{
		ivec1.push_back(ia[i]);
		ilist.insert(ilist.begin(), ia[i]);
		cout << ia[i] << " ";
	}
	cout << endl;
	for (auto it = ivec1.begin(); it < ivec1.end(); it++)
	{
		if (*it % 2 == 0)
		{
			it = ivec1.erase(it);
		}
	}
	cout << "ivec1 :";
	for (auto c : ivec1)cout << c << " ";
	cout << endl;

	auto iterList = ilist.begin();
	while (iterList != ilist.end())
	{
		if (*iterList % 2)
		{
			iterList = ilist.erase(iterList);
		}
		else
		{
			iterList++;
		}

	}

	//for (auto it = ilist.begin(); it != ilist.end(); it++)   //会因为迭代器++指令导致出错
	//{
	//	if (*it % 2)
	//	{
	//		it = ilist.erase(it);
	//	}
	//}
	cout << "ilist :";
	for (auto c : ilist)cout << c << " ";
	cout << endl;

	while (1);
}






