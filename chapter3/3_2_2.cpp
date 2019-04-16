/* 3.2.2节练习

*** 练习3.2
**
*/
#include <iostream>
#include <string>
using namespace std;
#define work3_5
int main()
{
#ifdef	work3_2
	//练习3.2
	string line;
	string word;
	getline(cin,line);
		cout << line << endl;
	while(cin>> word)
		cout << word << endl;
#endif

#ifdef  work3_4
	//练习3.4
	string line[2];
	getline(cin,line[0]);
	getline(cin,line[1]);
	//cout<<line[0]<<line[1];
	if(line[0] == line[1])
		cout <<"ture";
	else 
		cout<< ((line[0]>line[1])?line[0]:line[1]);  //比较是否想等并输出大的字符串
	cout << endl;
	if(line[0].size() == line[1].size())
		cout <<"ture";
	else cout<<((line[0].size() > line[1].size())?line[0]:line[1]);  //比较长度是否想等，若不等输出较长字符串
	cout << endl;

#endif

#ifdef  work3_5
	//练习3.5 输入多个字符串，将其连起来输出总和
	string sum;
	string line;
	while(cin>>line)     //将输入的所有字符串连接起来
		sum += line;
	cout << sum<<endl;   //使用结束符会导致后面的输入也一同结束
	sum = "";
	while(cin>>line)     //将输入的所有字符串用空格隔开连起来
		sum = sum + line + " ";
	cout << sum<<endl;	
#endif
	while(1);
	return 0;
}


