/***************************************************************************************************************
2019年4月18日22:23:55
8.3.2 节练习
练习8.13	重写电话本程序，从一个命名文件而非cin读取数据
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
	//练习8.13
	string line, word;
	vector<PersionInfo> people;
	ifstream  input("E:/phone.txt");
	if (!input)cout << "打开文件失败" << endl;
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