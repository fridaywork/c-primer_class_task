/*****************
2019��4��20��13:59:52
11.3.6����ϰ
��ϰ11.33   ����ת������
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

//��ת�������ļ�������ӳ��map
map<string, string> buildMap(ifstream &in) {
	map<string, string> trans_map;
	string key;
	string value;
	while (in >> key && getline(in, value)){
		if (value.size() > 1) {
			trans_map[key] = value.substr(1);//��ȥ�ո��
		}
		else {
			throw runtime_error("No rule for " + key);
		}
	}
	return trans_map;
}
//����ת������
const string& transform(const string &s, const map<string, string> &mp) {
	auto it = mp.find(s);
	if (it != mp.cend()) {
		return it->second;//����ת������ַ���
	}
	else {
		return s;
	}
}
//��ת����������������׼�����
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
//��ת��������������txt�ļ���
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
	word_transform_to_file(infileMap, infileText, outfileText);  //��֪��д���ļ�Ϊʲôʧ���ˣ�textû���������
	while (1);
}



