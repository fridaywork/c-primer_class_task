/*************
2019��4��17��22:19:11
5.5.1����ϰ
��ϰ5.20  �ӱ�׼�����ȡ��������ֱ�����������ظ����ʻ��߶���Ϊֹ�������������ظ����ʣ��ж�ѭ��������ظ����ʻ������ظ�����
****/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//��ϰ5.20
	string word, wordpre;
	char flag = 0;
	while (cin >> word)
	{
		if(word == wordpre)
		{
			flag = 1;
			break;
		}
		wordpre = word;
	}
	if (flag)cout << word << endl;
	else cout << "û���ظ�����" << endl;
	while (1);

}