/*******
2019年4月19日22:19:34
10.1节练习
练习10.1  头文件algorithm中有一个cout函数，使用它输出有多少个值等于给定值
10.2节练习
练习10.3  用acumulate求一个vector<int>中的元素和
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

	cout << val << "的个数是：" << res << endl;

	int sum = accumulate(vec.begin(), vec.end(), 0);
	cout << "sum of vector is :" << sum<< endl;

	while (1);

}