/* 3.2.2����ϰ

*** ��ϰ3.2
**
*/
#include <iostream>
#include <string>
using namespace std;
#define work3_5
int main()
{
#ifdef	work3_2
	//��ϰ3.2
	string line;
	string word;
	getline(cin,line);
		cout << line << endl;
	while(cin>> word)
		cout << word << endl;
#endif

#ifdef  work3_4
	//��ϰ3.4
	string line[2];
	getline(cin,line[0]);
	getline(cin,line[1]);
	//cout<<line[0]<<line[1];
	if(line[0] == line[1])
		cout <<"ture";
	else 
		cout<< ((line[0]>line[1])?line[0]:line[1]);  //�Ƚ��Ƿ���Ȳ��������ַ���
	cout << endl;
	if(line[0].size() == line[1].size())
		cout <<"ture";
	else cout<<((line[0].size() > line[1].size())?line[0]:line[1]);  //�Ƚϳ����Ƿ���ȣ�����������ϳ��ַ���
	cout << endl;

#endif

#ifdef  work3_5
	//��ϰ3.5 �������ַ�������������������ܺ�
	string sum;
	string line;
	while(cin>>line)     //������������ַ�����������
		sum += line;
	cout << sum<<endl;   //ʹ�ý������ᵼ�º��������Ҳһͬ����
	sum = "";
	while(cin>>line)     //������������ַ����ÿո����������
		sum = sum + line + " ";
	cout << sum<<endl;	
#endif
	while(1);
	return 0;
}


