/*****************
2019��4��20��11:36:37
11.2.1����ϰ
��ϰ11.7 ����һ��map���ؼ����Ǽ�ͥ���գ�ֵ��һ��vector��������еĺ��ӵ�������д���룬ʱ������µļ�ͥ�Լ������м�ͥ������µĺ���
11.2.2.  ����ϰ
��ϰ11.9 ����һ��map����������һ���кŵ�list������list�б�����ǵ��������ֵ��к�
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
	ff[first_name] = vector<string> ();  //���һ��û���޵ļ�ͥ
}

void add_child(map<string, vector<string>> &ff, const string first_name,const string name)
{
	ff[first_name].push_back(name);
}

int main()
{
	map<string, vector<string>> families;
	add_family(families, "��");
	add_family(families, "��");
	add_family(families, "��");

	add_child(families, "��", "˼��");
	add_child(families, "��", "��ͷ");


	add_child(families, "��", "����");
	add_child(families, "��", "��Ұ����");

	add_child(families, "��", "��˼��");

	for (auto fff : families)
	{
		for (auto child : fff.second)
		{
			cout << fff.first << child << " ";
		}
		cout << endl;
	}


	//��ϰ11.9
	ifstream  input("E:/text.txt");   //�ļ�·����Ҫ�÷�б��
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
			cout << ww.first << "���ڵ����ǣ�" << line_number << endl;
	}
	while (1);
}



