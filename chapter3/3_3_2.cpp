/******************************************************
2019��4��10��21:49:56
��ϰ3.14 ����дһ�γ�����cin����һ���������������һ��vector����
��ϰ3.15 �� ��д�������ʹ֮����Ķ���Ϊ�ַ�����
��ϰ3.16 ��������vector��Ԫ�����
**********************************************************/
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	//��ϰ3.14
	vector<int> num;
	int temp;
	for (int i = 0; i < 10; i++)
	{
		cin >> temp;
		num.push_back(temp);
	}
	for (auto &i : num)  //����Ҫ��for�����һ����
		cout << i << ' ';
	//��ϰ3.15
	string word;			//�Ҽǵ���C�����б���ֻ����ִ�����ǰ��������
	vector<string> someStr;
	while (cin >> word)
	{
		someStr.push_back(word);
	}
	for (auto &i : someStr)  //����Ҫ��for�����һ����
		cout << i << ' ';
	while (1);
}