/*************
2019��4��17��21:33:10
4.7����ϰ
���������
��ϰ4.21 ʹ�������������vector<int>���ҵ�����ֵԪ�أ����䷭��
��ϰ4.22.1 ʹ�������������ʾ�����򻮷ֳ�high pass ��pass ��fail ���֣���չ�����һ����60�ֵ�75�ֳɼ��趨Ϊlow pass
��ϰ4.22.2 ʹ��if������4.22�ĳ���

****/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//��ϰ4.21
	vector<int> vv = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto c : vv)
		cout << c << "  ";
	cout << endl << "���������������: " << endl;
	for (auto &c : vv)
		(c % 2 == 1) ? (cout << 2*c << " ") : (cout << c << " ");

	//��ϰ4.22.1
#if 0
	int grade;
	string finalgrade = "what ??";
	while (cin >> grade)
	{
		finalgrade = (grade > 100) ? "error " : (grade > 90) ? "high pass " : (grade >= 75) ? "pass" : (grade >= 60) ? "low pass" : "fail";
		cout << finalgrade << endl;
	}
#endif
	//��ϰ4.22.2
	int grade;
	while (cin >> grade)
	{
		if (grade > 100)
			cout << "error";
		else if (grade > 90)
			cout << "high pass";
		else if (grade >= 75)
			cout << "pass";
		else if (grade >= 60)
			cout << "low pass";
		else 
			cout << "fail";

		cout << endl;
	}

	//�������ӿɶ�����˵��ʹ��if����������⣬�ӳ���������˵���������ʽ����࣬�����������ʽ��Ϊ���˳������
	//�ڴ���������ж��߼���ʱ����д�����
	while (1);

}