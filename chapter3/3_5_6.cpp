/**************************
2019��4��16��22:10:57
P104
��ϰ3.5.5
��ϰ3.43 ��д3���汾���򣬾����ia��Ԫ�أ��汾1ʹ�÷�Χfor������������̣��汾2��3ʹ����ͨfor��䣬�汾2ʹ���±���������汾3ʹ��ָ�룬
������ʹ�����ͱ�����auto�ؼ��ֻ���decltype�ؼ���
��ϰ3.44 ��3.43��ѭ�����������ͱ���
��ϰ3.45 ʹ��auto�ؼ���ʵ��
********************************/
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main(void)
{
	int   ia[3][4] = { 1, 2, 3, 4, 5 ,6,7,8,9,10,11,12};
	//��ϰ3.43
	//�汾1
	cout << "vertion 1 :" << endl;
	for (int(&row)[4]  : ia)
	{
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}
	cout << endl;
	////�汾2
	cout << "vertion 2 :" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << ia[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	////�汾3
	int (*p)[4] = ia;  //ָ����4�����ε������ָ��
	int *q;
	cout << "vertion 3 :" << endl;
	for (; p < ia + 3; p++)
	{
		for (q = *p; q < 4 + *p; q++)
			cout << *q << " ";
		cout << endl;
	}
	cout << endl;

	//��ϰ3.44
	cout << "������ʹ��������������ѭ������" << endl;
	//�汾1
	typedef int int_array[4];
     //���ʵ�ڲ�֪����ôд 
	for (int_array *p1 = ia; p1 != ia + 3;++p1)
	{
		for (int *q1 = *p1; q1 < 4 + *p1; q1++)
			cout << *q1 << " ";
		cout << endl;
	}
	cout << endl;
	//��ϰ3.45 ʹ�÷�Χfor���
	cout << "ʹ�÷�Χfor������ѭ������" << endl;
	for (auto &row : ia)
	{
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}

	while (1);

}
