
/****************
8.2.1 ����ϰ
��ϰ8.4  ��д�������Զ�ģʽ��һ���ļ��������������뵽һ��string��vector�У���ÿһ����Ϊһ��������Ԫ�ؽ��д洢

**********************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(void)
{
	//��ϰ8.4
	vector<string> vec1;
	string line;
	ifstream  input("E:/text.txt");   //�ļ�·����Ҫ�÷�б��
	//��ϰ8.4 
	if (!input)
	{
		cout << "can't not open file,please retry!" << endl;
	}
	else
	{
		while (getline(input, line))
		{
			vec1.push_back(line);
		}
		cout << "��һ��ΪԪ��" << endl;
		for (auto c : vec1)
		{
			cout << c << endl;
		}
	}
	input.close();
	 
	//��ϰ8.5 
	input.open("E:/text.txt");
	vector<string> vec2;
	if (!input)
	{
		cout << "can't not open file,please retry!" << endl;
	}
	else
	{
		while (input >> line)
		{
			vec2.push_back(line);
		}
		cout << "�Ե���ΪԪ��" << endl;
		for (auto c : vec2)
		{
			cout << c << endl;
		}
	}
	input.close();

	while (1);
	return 0;
}