
/****************
8.1.2 ����ϰ
��ϰ8.1
��ϰ8.2
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
			throw runtime_error ("IO�������ˣ�");
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
	f_io(cin);
	while (1);
}