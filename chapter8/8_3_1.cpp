
/****************
2019年4月18日21:46:08
8.3.1 节练习
练习8.9   改写f_io函数，使其能输出一个istringstream对象的内容
练习8.10  写程序读取一个文件的行保存在vector对象中，然后使用一个istringsteam从vector读取数据元素，每次读取一个单词

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
			throw runtime_error("IO流出错了！");
		if (input.fail())
		{
			cerr << "输入格式错误，请重试 " << endl;  //cerr专门用于输出错误信息
			input.clear();
			input.ignore(5, '\n');  //如果不写这一句，那么函数会一直跑个不停
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
	//练习8.9
	ostringstream some_str;
	some_str << "whosyourdaddy" << endl;
	istringstream input(some_str.str());
	//cout << some_str;
	f_io(input);
#endif
	//练习8.10

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
	cout << endl << "使用 istringstream 一个一个单词的读取数据 " << endl ;
	auto it = str_group.cbegin();
	while (it != str_group.cend())
	{
		istringstream str_line(*it);  //绑到迭代器上面
		string word;
		while (str_line >> word)
			cout << word << endl;

		it++;

	}
	while (1);
	return 0;
}