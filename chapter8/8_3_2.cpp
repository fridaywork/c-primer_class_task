/***************************************************************************************************************
2019��4��18��22:23:55
8.3.2 ����ϰ
��ϰ8.13	��д�绰�����򣬴�һ�������ļ�����cin��ȡ����
********************************************************************************************************************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

struct PersionInfo{
	string name;
	vector<string> phones;
};

int main(void)
{
	//��ϰ8.13
	string line, word;
	vector<PersionInfo> people;
	ifstream  input("E:/phone.txt");
	if (!input)cout << "���ļ�ʧ��" << endl;
	else
	{
		while (getline(input, line))
		{
			PersionInfo  info;
			istringstream record(line);
			record >> info.name;
			while (record >> word)
			{
				info.phones.push_back(word);
			}
			people.push_back(info);
		}
	}
	
	for (auto c : people)
	{
		cout << c.name << "   "; 
		for (auto out : c.phones)
			cout << out << " ";
		cout << endl;
	}
	while (1);
	return 0;
}