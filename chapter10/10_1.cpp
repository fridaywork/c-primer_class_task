/*******
2019��4��19��22:19:34
10.1����ϰ
��ϰ10.1  ͷ�ļ�algorithm����һ��cout������ʹ��������ж��ٸ�ֵ���ڸ���ֵ
10.2����ϰ
��ϰ10.3  ��acumulate��һ��vector<int>�е�Ԫ�غ�
*****************/

#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
int main(void)
{
	vector<int> vec = { 0, 11, 22, 55, 11, 22, 44, 55, 33 };
	int res,val;
	val = 55;
	res = count(vec.begin(),vec.end(),val);

	cout << val << "�ĸ����ǣ�" << res << endl;

	int sum = accumulate(vec.begin(), vec.end(), 0);
	cout << "sum of vector is :" << sum<< endl;

	while (1);

}