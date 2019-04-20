/*****************
2019年4月20日11:36:37
11.2.1节练习
练习11.7 定义一个map，关键字是家庭的姓，值是一个vector，保存家中的孩子的名，编写代码，时间添加新的家庭以及向已有家庭中添加新的孩子
11.2.2.  节练习
练习11.9 定义一个map，将单词与一个行号的list关联，list中保存的是单词所出现的行号
*********************/
#include	 <iostream>
#include     <fstream>
#include     <sstream>
#include	 <string>
#include	<vector>
#include	 <map>
#include     <list>
using namespace std;

void add_family(map<string, vector<string>> &ff,const string first_name)
{
	ff[first_name] = vector<string> ();  //添加一个没有娃的家庭
}

void add_child(map<string, vector<string>> &ff, const string first_name,const string name)
{
	ff[first_name].push_back(name);
}

int main()
{
	map<string, vector<string>> families;
	add_family(families, "王");
	add_family(families, "波");
	add_family(families, "雷");

	add_child(families, "王", "思聪");
	add_child(families, "王", "大头");


	add_child(families, "波", "儿霸");
	add_child(families, "波", "多野结衣");

	add_child(families, "雷", "不思议");

	for (auto fff : families)
	{
		for (auto child : fff.second)
		{
			cout << fff.first << child << " ";
		}
		cout << endl;
	}


	//练习11.9
	ifstream  input("E:/text.txt");   //文件路径需要用反斜杠
	if (!input)
	{
		cout << "can't not open file,please retry!" << endl;
	}
	map<string, list<int>>  word_line_no;
	string line, word;
	int  line_no = 0;
	while (getline(input, line))
	{
		line_no++;
		istringstream in_line(line);
		while (in_line >> word)
			word_line_no[word].push_back(line_no);
	}

	for (auto ww : word_line_no)
	{
		for (auto line_number : ww.second)
			cout << ww.first << "所在的行是：" << line_number << endl;
	}
	while (1);
}



