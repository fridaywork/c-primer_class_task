/*************
2019��4��17��22:19:11
5.3.2����ϰ
��ϰ5.9  ʹ��һϵ�����ͳ�ƴ�cin������ı����ж���Ԫ����ĸ
��ϰ5.10 ������д��ĸʱҲ����

��ϰ5.12 ͳ�Ƽ���ff fl fi
****/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//��ϰ5.9 & ��ϰ5.10
#if 0
	char ch;
	int cnto = 0;
	while (cin >> ch)
	{
		if (ch == 'a'|| ch == 'A')cnto++;
		else if (ch == 'e' || ch == 'E')cnto++;
		else if (ch == 'i' || ch == 'I')cnto++;
		else if (ch == 'o' || ch == 'O')cnto++;
		else if (ch == 'u' || ch == 'U')cnto++;
	}
	cout << "Ԫ����ĸ����: " << cnto<< endl;
#endif
	
	string word;
	int cntfi = 0, cntfl = 0, cntff = 0;
	while (cin >> word)
	{
		//switch (word)  string��������switch
		if (word == "ff")cntff++;
		else if (word == "fl")cntfl++;
		else if (word == "fi")cntfi++;
	}
	cout << "ff :" << cntff << endl << "fl :" << cntfl << endl << "fi :" << cntfi << endl;
	while (1);

}