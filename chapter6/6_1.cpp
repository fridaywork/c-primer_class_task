/*********
2019��4��17��23:01:01
6.1����ϰ
��ϰ6.3 ��дfact����
��ϰ6.4 ��дһ�����û������ĺ������û�����һ�����֣����ɸ����ֵĽ׳ˣ�
��ϰ6.5 ��дһ�����������ʵ�εľ���ֵ
***************/

#include <iostream>
using namespace std;
//��ϰ6.3
int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}
//��ϰ6.4
int inputNum(void)
{
	int val;
	cin >> val;
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}
//��ϰ6.5
int outputABS(int val)
{
	if (val >= 0)
		return val;
	else
		return (- 1 * val);
}
int main()
{
	int num1;
	num1 = fact(4);
	cout << num1 << endl;

	num1 = inputNum();
	cout << num1<<endl;

	cout << outputABS(50) << " " << outputABS(-20) << " " << endl;
	while (1);
}