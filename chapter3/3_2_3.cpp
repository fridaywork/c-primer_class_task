/*
** 2019年4月3日20:19:57
   练习3.2.3
   知识点：范围for语句
**
**
***/
#include  <iostream>
#include  <string>
using namespace std;
int main(void)
{
	//练习3.6  
	string somestr("whosyourdaddy");
	string otherstr;
	cout << somestr<<endl;
	for(auto &c : somestr)c = 'x';
	cout << somestr;
	cout << somestr[0] << endl;
	//

	//练习3.10
	//输入一串包含标点符号的字符串，将标点去除后输出
	somestr = "how are you ? how old are you ? how old are you two ? go ,leave me alone.";
	cout << somestr << endl;
	for (auto &c : somestr)
	{
		if (ispunct(c))continue;
		else otherstr += c;
	}
	
	cout << otherstr << endl;

	while(1);
}