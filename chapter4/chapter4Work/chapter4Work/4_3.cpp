/*************
2019��4��17��21:02:12
4.3����ϰ
��ϰ4.10 Ϊwhileѭ��дһ���������ӱ�׼�����ж�������������42��ʱ��ֹͣ
��ϰ4.11 дһ�����ʽ�ж�a/b/c/dֵ�Ĵ�С��ϵ��ȷ��a����b��b����c��c����d
****/


#include<iostream>


using namespace std;



int main()
{
	//��ϰ4.10
	int  temp = 0;
	while (temp != 42) //����42��ֹͣ
	{
		cin >> temp;
		cout << "input is  " << temp << endl;
	}
	cout << "break  " << endl;

	//��ϰ4.11
	int a = 50, b = 4, c = 3, d = 5;
	if (a > b && b > c && c > d)cout << "ture" << endl;
	else cout << "false" << endl;
	while (1);

}