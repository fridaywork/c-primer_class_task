/*
** 2019��4��3��20:19:57
   ��ϰ3.2.3
   ֪ʶ�㣺��Χfor���
**
**
***/
#include  <iostream>
#include  <string>
using namespace std;
int main(void)
{
	//��ϰ3.6  
	string somestr("whosyourdaddy");
	string otherstr;
	cout << somestr<<endl;
	for(auto &c : somestr)c = 'x';
	cout << somestr;
	cout << somestr[0] << endl;
	//

	//��ϰ3.10
	//����һ�����������ŵ��ַ����������ȥ�������
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