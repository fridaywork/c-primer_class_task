/*******
2019��4��19��22:19:34
10.4.1����ϰ
��ϰ10.27  ʹ��unique��һ��vector�в��ظ���Ԫ�ؿ�����һ����ʼΪ�յ�list��
��ϰ10.28  һ��vector�б���1��9��ʹ��������������Ԫ�ز����
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
	//�Ȱ������ظ���Ԫ������һ�£��۵�һ��
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

	//for (auto c : transit_vec)      ��Ա�б���û��push_front ���޷�ʹ�����������
	//{
	//	*front_inserter(vec3) = c;
	//}
	//cout << "front_inserter copy :";
	//for (auto c : vec3) cout << c << " "; cout << endl;

	while (1);

}