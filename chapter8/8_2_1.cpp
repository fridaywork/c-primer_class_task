
/****************
8.2.1 节练习
练习8.4  编写函数，以读模式打开一个文件，将其内容输入到一个string的vector中，将每一行作为一个独立的元素进行存储

**********************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(void)
{
	//练习8.4
	vector<string> vec1;
	string line;
	ifstream  input("E:/text.txt");   //文件路径需要用反斜杠
	//练习8.4 
	if (!input)
	{
		cout << "can't not open file,please retry!" << endl;
	}
	else
	{
		while (getline(input, line))
		{
			vec1.push_back(line);
		}
		cout << "以一行为元素" << endl;
		for (auto c : vec1)
		{
			cout << c << endl;
		}
	}
	input.close();
	 
	//练习8.5 
	input.open("E:/text.txt");
	vector<string> vec2;
	if (!input)
	{
		cout << "can't not open file,please retry!" << endl;
	}
	else
	{
		while (input >> line)
		{
			vec2.push_back(line);
		}
		cout << "以单词为元素" << endl;
		for (auto c : vec2)
		{
			cout << c << endl;
		}
	}
	input.close();

	while (1);
	return 0;
}