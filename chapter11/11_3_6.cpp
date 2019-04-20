/*****************
2019年4月20日13:59:52
11.3.6节练习
练习11.33   单词转换程序
*********************/
#include	 <iostream>
#include     <fstream>
#include     <sstream>
#include	 <string>
#include	<vector>
#include	 <map>
#include     <list>
#include    <utility>
using namespace std;

//打开转换规则文件，产生映射map
map<string, string> buildMap(ifstream &in) {
	map<string, string> trans_map;
	string key;
	string value;
	while (in >> key && getline(in, value)){
		if (value.size() > 1) {
			trans_map[key] = value.substr(1);//除去空格号
		}
		else {
			throw runtime_error("No rule for " + key);
		}
	}
	return trans_map;
}
//单词转换函数
const string& transform(const string &s, const map<string, string> &mp) {
	auto it = mp.find(s);
	if (it != mp.cend()) {
		return it->second;//返回转换后的字符串
	}
	else {
		return s;
	}
}
//将转换后的数据输出到标准输出流
void  word_transform_to_cout(ifstream &map_file, ifstream &input)
{
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text))
	{
		istringstream stream(text);
		string  word;
		bool  firstword = 1;
		while (stream >> word)
		{
			if (firstword)
				firstword = 0;
			else cout << " ";
			cout << transform(word, trans_map);
		}
		cout << endl;
	}

}
//将转换后的数据输出到txt文件中
void  word_transform_to_file(ifstream &map_file, ifstream &input,ostream &out)
{
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text))
	{
		istringstream stream(text);
		string  word;
		bool  firstword = 1;
		while (stream >> word)
		{
			if (firstword)
				firstword = 0;
			else out << " ";
			out << transform(word, trans_map);
		}
		out << endl;
	}

}
int main()
{

	ifstream  infileMap("E:/wordmap.txt");
	if (!infileMap){ cout << "open Map fail !" << endl; }
	ifstream  infileText("E:/inputext.txt");
	if (!infileText)cout << "open input file fail!" << endl;
	ofstream  outfileText("E:/outputext.txt");
	if (!outfileText)cout << "open output txt fail!" << endl;

	word_transform_to_cout(infileMap, infileText);
	word_transform_to_file(infileMap, infileText, outfileText);  //不知道写入文件为什么失败了，text没有内容输出
	while (1);
}



