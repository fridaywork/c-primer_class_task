
/****************
8.1.2 节练习
练习8.1
练习8.2
**********************/

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

istream& f_io(istream& input)
{
	int val;
	while (input >> val, !input.eof())
	{
		if (input.bad())
			throw runtime_error ("IO流出错了！");
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
	f_io(cin);
	while (1);
}