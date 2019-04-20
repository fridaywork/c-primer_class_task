/*******
2019年4月19日22:19:34
10.4.1节练习
练习10.27  使用unique将一个vector中不重复的元素拷贝到一个初始为空的list中
练习10.28  一个vector中保存1到9，使用三种容器拷贝元素并输出
*****************/

#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <numeric>
#include <iterator>
#include <list>
using namespace std;

int main(void)
{
	//10.27 
	vector<int>  number = { 1, 1, 2, 1, 2, 3, 3, 4, 5, 6, 6, 7, 7, 8, 8, 8, 9, 9, 9, 4, 3, 5 };
	vector<int>  vec1, vec2, vec3, transit_vec;
	cout << "the initial bumber list is :";
	for (auto c : number) cout << c << " "; cout << endl;
	//先把所有重复的元素排序一下，聚到一块
	stable_sort(number.begin(), number.end());
	unique_copy(number.begin(), number.end(), inserter(transit_vec, transit_vec.begin()));
	for (auto c : transit_vec) cout << c << " "; cout << endl;

	for (auto c : transit_vec)
	{
		*inserter(vec1, vec1.begin()) = c;
	}
	cout << "inserter copy :";
	for (auto c : vec1) cout << c << " "; cout << endl;

	for (auto c : transit_vec)
	{
		*back_inserter(vec2) = c;
	}
	cout << "back_inserter copy :";
	for (auto c : vec2) cout << c << " "; cout << endl;

	//for (auto c : transit_vec)      成员列表里没有push_front ，无法使用这个迭代器
	//{
	//	*front_inserter(vec3) = c;
	//}
	//cout << "front_inserter copy :";
	//for (auto c : vec3) cout << c << " "; cout << endl;

	while (1);

}