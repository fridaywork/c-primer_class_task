/*********
2019��4��17��23:01:01
6.2.3����ϰ
��ϰ6.17 дһ�������ж�string���Ƿ��д�д��ĸ����һ�����������ж��󶼸�д��Сд��ʽ

***************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//�Ƿ��д�д��ĸ
int hadUpper0(string ss)
{
	for (auto c : ss)
	{
		if (isupper(c))
		{
			cout << "�д�д��ĸ " << endl;
			return 1;
		}
	}

	cout << "û�д�д��ĸ " << endl;
	return 0;
}
//�����д�д��ĸת����Сд��ĸ
int allToLower(string &ss)
{
	for (auto &c : ss)
	{
		if (isupper(c))
		{
			c = tolower(c);
		}
	}
	return 0;
}

int main()
{
	//��ϰ6.17
	string  ss1 = "hello world";
	string  ss2 = "SURPRISE mother fucker";
	cout << "ss1 :";
	hadUpper0(ss1);
	cout << "ss2 :";
	hadUpper0(ss2);
	allToLower(ss2);
	cout << "ת�����ss2 ��" << ss2 << endl;

	//һ���������ͣ�һ���Ƿ������Ͳ���
	while (1);
}