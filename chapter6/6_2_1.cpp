/*********
2019��4��17��23:01:01
6.2.1����ϰ
6.2.2����ϰ
��ϰ6.10 дһ��ʹ��ָ�뽻����������ֻ�ĺ���

***************/

#include <iostream>
using namespace std;
//ָ����ʽ��������
int swapBP(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	return 0;
}
//������ʽ��������
int swapRe(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}
int main()
{
	//��ϰ6.10
	int num1=55,num2=22;
	int *p =&num1, *s=&num2;
	cout << "����ǰ: " << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
	swapBP(p,s);
	cout << "������: " << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
	//��ϰ6.12
	swapRe(num1, num2);
	cout << "ʹ��������ʽ�ٴν���: " << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
	//������ʽ����Ҫ���ⶨ��ָ����в���������㣬ȱ����C���Բ�֧��������ʽ
	while (1);
}