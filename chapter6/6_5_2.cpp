/*********
2019��4��18��19:35:49
6.5.2����ϰ
��ϰ6.44 ��6.2.2�ڵ�isShorter������д����������
***************/

#include <iostream>
#include <string>

using namespace std;

inline const string  isShorter(const string &s1, const string &s2)   //�����������������������õĿ���
{
	return s1.size() <= s2.size() ? s1:s2;
}


int main()
{
	//��ϰ6.44
	string s1 = "hello", s2 = "world!!";

	cout << isShorter(s1, s2)<< endl;

	//һ���������ͣ�һ���Ƿ������Ͳ���
	while (1);
}