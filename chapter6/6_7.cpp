/*********
2019��4��18��19:35:49
6.7����ϰ
��ϰ6.54 ��д���������������������int�ββ��ҷ���ֵҲ��int��Ȼ������һ��vector��������Ԫ��ָ��ú�����ָ�룻
��ϰ6.55 ��д4���������ֱ������intִֵ�мӼ��˳����㣬����һ�ⴴ����vector�����б���ָ����Щ������ָ�룻
��ϰ6.56 ��������vector�����е�ÿ��Ԫ�ز����������
***************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
//��ϰ6.54
int fuction_add(int a, int b)
{
	return a + b;

}
int fuction_sub(int a, int b)
{
	return a - b;
}
int fuction_mul(int a, int b)
{
	return a*b;
}
int fuction_div(int a, int b)
{
	if (b != 0)
		return a / b;
	else return 0;
}


int main()
{
	//��ϰ6.54  6.55 6.56
	vector<decltype(fuction_add)*>ff;   ///����д���е�����⣬����Ҫ�������ϰ��Ϥ
	int(*pf)(int a, int b) = fuction_add;
	pf = fuction_add;
	ff.push_back(pf);   
	pf = fuction_sub;
	ff.push_back(pf);
	pf = fuction_mul;
	ff.push_back(pf);
	pf = fuction_div;
	ff.push_back(pf);
	for (auto c : ff)
	{
		cout << c(50, 10) << endl;
	}
	
	while (1);
}