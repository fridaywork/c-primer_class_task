/**************************
2019��4��16��22:10:57
P104
��ϰ3.5.5
��ϰ3.41 ��дһ�γ��������������ʼ��һ��vector����
��ϰ3.42 ����������Ԫ�ص�vector���󿽱�����������
********************************/
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
	//��ϰ3.41
	int a[10];
	for (int i = 0; i < 10; i++)
		a[i] = i;
	cout << "a :";
	for (int i = 0; i < 10; i++)
		cout << a[i] << "  ";
	cout << endl;
	vector<int> v1(begin(a),end(a));
	cout << "��������v1 ��";
	for (auto c : v1)
		cout << c << " ";
	cout << endl;
	//��ϰ3.42
	int b[20];
	cout << "array b :";
	for (int i = 0; i < v1.size(); i++)
	{
		b[i] = v1[i];
	}
	for (int i = 0; i < v1.size(); i++)
		cout << b[i] << "  ";
	cout << endl;

	while (1);
}