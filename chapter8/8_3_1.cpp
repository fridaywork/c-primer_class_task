
/****************
2019��4��18��21:46:08
8.3.1 ����ϰ
��ϰ8.9   ��дf_io������ʹ�������һ��istringstream���������
��ϰ8.10  д�����ȡһ���ļ����б�����vector�����У�Ȼ��ʹ��һ��istringsteam��vector��ȡ����Ԫ�أ�ÿ�ζ�ȡһ������

**********************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;


istringstream& f_io(istringstream& input)
{
	string val;
	while (input >> val, !input.eof())
	{
		if (input.bad())
			throw runtime_error("IO�������ˣ�");
		if (input.fail())
		{
			cerr << "�����ʽ���������� " << endl;  //cerrר���������������Ϣ
			input.clear();
			input.ignore(5, '\n');  //�����д��һ�䣬��ô������һֱ�ܸ���ͣ
			continue;
		}
		cout << val << endl;

	}
	input.clear();
	return input;
}


int main(void)
{
#if 0
	//��ϰ8.9
	ostringstream some_str;
	some_str << "whosyourdaddy" << endl;
	istringstream input(some_str.str());
	//cout << some_str;
	f_io(input);
#endif
	//��ϰ8.10

	ifstream  input("E:/text.txt");
	string line;
	vector<string> str_group;
	while (getline(input, line))
	{
		str_group.push_back(line);

	}
	for (auto c : str_group)
	{
		cout << c << endl;
	}
	input.close();
	cout << endl << "ʹ�� istringstream һ��һ�����ʵĶ�ȡ���� " << endl ;
	auto it = str_group.cbegin();
	while (it != str_group.cend())
	{
		istringstream str_line(*it);  //�󵽵���������
		string word;
		while (str_line >> word)
			cout << word << endl;

		it++;

	}
	while (1);
	return 0;
}