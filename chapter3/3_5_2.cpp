/**************************
2019��4��16��22:10:57
P104
��ϰ3.5.2
��ϰ3.31 ��дһ�γ�����һ������10��int�����飬��ÿ��Ԫ�ص�ֵΪ���±�ֵ
��ϰ3.32 ����һ�ⴴ�������鿽��������һ�����飬����vector��д����ʵ�����ƵĹ��ܣ�
********************************/
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
	//��ϰ3.31
	int a[10];
	for (int i = 0; i < 10; i++)
		a[i] = i;
	cout << "a :";
	for (int i = 0; i < 10; i++)
		cout << a[i] << "  ";
	cout << endl;
	//��ϰ3.32
	int b[10];
	//strcpy(b,a);zֻ�ܿ����ַ��� char ����
	for (int i = 0; i < 10; i++)
		b[i] = a[i];
	cout << "b : ";
	for (int i = 0; i < 10; i++)
		cout << b[i] << "  ";
	cout << endl;
	//ʹ��vector��д
	cout <<"vector reprogram "<< endl;
	vector<int> v1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> v2(10, 0);
	cout << "v1: ";
	for (auto it = v1.begin(); it != v1.end(); it++)
		cout << *it << " ";
	auto it = v1.begin();
	for (auto &c : v2)
	{
		c = *it;
		if (it != v1.end())
			it++;
	}
	cout <<endl <<  "v2: ";
	for (auto c : v2)
		cout << c << " ";
	while (1);
}