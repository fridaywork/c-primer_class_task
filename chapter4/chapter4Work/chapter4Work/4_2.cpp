/*************
2019��4��17��21:02:12
4.2����ϰ
��ϰ4.5 д�����ʽ��ֵ���
��ϰ4.6 дһ��ȷ��һ����������������ż���ı��ʽ
****/


#include<iostream>


using namespace std;



int main()
{
	//��ϰ4.5
	int  a, b, c, d;
	a = -30 * 3 + 21 / 5;
	b = -30 + 3 * 21 / 5;
	c = 30 / 3 * 21 % 5;
	d = -30 / 3 * 21 % 4;

	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << "d = " << d << endl;
	//��ϰ4.6
	int number;
	cin >> number;
	if (number%2 == 0)
	{
		cout << number << " ��ż��" << endl;
	}else if(number%2 == 1)cout << number << " ������" << endl;

	while (1);

}