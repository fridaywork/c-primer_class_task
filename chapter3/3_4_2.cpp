/**************************
2019��4��16��19:38:14
P101
��ϰ3.4.2
��ϰ3.24 ʹ�õ���������3.20
��ϰ3.25 ʹ�õ�����ʵ��3.3.3�ڵĻ��ַ����εĳ���

********************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define  work_3_25
int main()
{

#ifdef  work_3_24
	vector<int>  uu;
	int temp;
	while (cin >> temp)
	{
		uu.push_back(temp);
	}
	cout << "�����������Ԫ�غͣ���һ��������������������һ����" << endl;
	for (auto it = uu.begin(); it != uu.end(); it++)   //C++�ĵ�������ʵ��C��ָ�����
	{
		if (it + 1 == uu.end())
		{
			cout << *it<< " ";   //�����ֹ�±�����ı߽��ж�
			break;
		}
		else cout << *it + *(it+1) << " ";
		it++;

	}
	cout << "\n"<<"�����i�������n-i��Ԫ�غ�" << endl;
	auto itf = uu.begin();
	auto ite = uu.end();
	for (itf = uu.begin(); itf != uu.begin() + uu.size() / 2; itf++)
	{
		cout << *itf + *(ite-1) << " ";      //uu.end()��һ�����ɷ��ʵĵ�ַ���������ᵼ�����
		ite--;
	}
	itf = uu.begin();
	if (uu.size() % 2 == 1)                  //���������������м������������������
		cout << *(itf +(uu.size() / 2)) * 2 << " ";

#endif


#ifdef  work_3_25
	vector<string>   score_part = { "0~9", "10~19", "20~29", "30~39", "40~49", "50~59", "60~69", "70~79", "80~89", "90~99","100" };
	vector<unsigned> scores(11, 0);  
	unsigned grade;// , temp1;
//	auto it = scores.begin();
	//auto tempIt = scores.begin();
	while (cin >> grade)
	{
		if (grade < 101)
		{
			auto it = scores.begin() + (grade / 10);
		//	tempIt = it + temp1;     //
			(*it)++;
		}
	}
	for (auto c : score_part)
		cout << c << "  ";
	cout << endl;
	for (auto c : scores)
		cout << c << "      ";
#endif

	while (1);


}
