/**************************
2019��4��10��22:33:40
P94
��ϰ3.3.3
��ϰ3.16 ����ϰ3.13��vector����������������
��ϰ3.17 ��cin����һ��ʲ������Ǵ���һ��vector����Ȼ�����дʸ�дΪ��д��ʽ���
��ϰ3.20 ����һ�������������Ǵ���һ��vector���󣬽�ÿ�����������ĺ������������д�����������һ�������һ��Ԫ�صĺͣ���������ڶ����͵����ڶ���Ԫ�غͣ��Դ�����
********************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define  work_3_16
int main()
{
#ifdef  work_3_16
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{};
	vector<int> v5{ 10, 42 };
	vector<int> v6{ 10 };
	vector<string> v7{10,"hi"};
	cout << "v1: ";
	for (auto c : v1)cout << c << " ";
	cout << endl;
	cout << "v2: ";
	for (auto c : v2)cout << c << " ";
	cout << endl;
	cout << "v3: ";
	for (auto c : v3)cout << c << " ";
	cout << endl;
	cout << "v4: ";
	for (auto c : v4)cout << c << " ";
	cout << endl;
	cout << "v5: ";
	for (auto c : v5)cout << c << " ";
	cout << endl;
	cout << "v6: ";
	for (auto c : v6)cout << c << " ";
	cout << endl;
	cout << "v7: ";
	for (auto c : v7)cout << c << " ";
	cout << endl;

#endif
#ifdef  word_3_17
	//��ϰ3.17 
	vector<string> inputWord;
	string temp;
	while (cin >> temp)
	{
		inputWord.push_back(temp);
	}
	for (auto i : inputWord)
		cout << i ;
	cout << endl;

	for (int i = 0; i < inputWord.size(); i++)
	{
		for (int j = 0; j < inputWord[i].length();j++)
		{
			inputWord[i][j] = toupper(inputWord[i][j]);
		}
	}
	for (auto i : inputWord)
		cout << i;
	cout << endl;
#endif

#ifdef  work_3_19
	vector<int>		vv1 {42,42,42,42,42,42,42,42,42,42};
	vector<int>		vv2(10, 42);
	vector<int>		vv3 = { 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
	//�ڶ����ظ���Ԫ��ʱ������2�����ݵģ�����Ҫ�����б�Ԫ��ʱ����Ȼ����1��ֱ�۸����ʣ�
#endif
	
#ifdef  work_3_20
	vector<int>  uu;
	int temp;
	while (cin >> temp)
	{
		uu.push_back(temp);
	}
	for (int i = 0; i < uu.size(); i++)
	{
		if (i + 1 ==uu.size())
		{
			cout << uu[i] << " ";   //�����ֹ�±�����ı߽��ж�
			break;
		}
		else cout << uu[i] + uu[i + 1] << " ";
		i++;

	}
	cout << "\n"<<"�����i�������n-i��Ԫ�غ�" << endl;

	for (int i = 0; i < uu.size()/2 ; i++)
	{
		cout << uu[i] + uu[uu.size() - i - 1] << " ";
	}
	if (uu.size() % 2 == 1)                  //���������������м������������������
		cout << uu[uu.size() / 2]*2 << " ";

#endif


	while (1);


}
