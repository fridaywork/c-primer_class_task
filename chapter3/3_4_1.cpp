/**************************
2019��4��16��20:43:16
P99
��ϰ3.4.1
��ϰ3.21 ʹ�õ���������3.16
��ϰ3.22 �޸�֮ǰ���text�ĵ�һ�γ������Ȱ�text�ĵ�һ��ȫ�ĳɴ�д���������
��ϰ3.23 ��дһ�γ��򣬴���һ������10��������vector����Ȼ��ʹ�õ�����������Ԫ�ص�ֵ���ԭ����������
���vector��������ݿ��Ƿ���ȷ
********************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define  work_3_23
int main()
{

#ifdef  work_3_21
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{};
	vector<int> v5{ 10, 42 };
	vector<int> v6{ 10 };
	vector<string> v7{ 10, "hi" };
	cout << "v1: ";
	for (auto it = v1.begin(); it != v1.end();it ++)cout << *it << " ";
	cout << endl;
	cout << "v2: ";
	for (auto it = v2.begin(); it != v2.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v3: ";
	for (auto it = v3.begin(); it != v3.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v4: ";
	for (auto it = v4.begin(); it != v4.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v5: ";
	for (auto it = v5.begin(); it != v5.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v6: ";
	for (auto it = v6.begin(); it != v6.end(); it++)cout << *it << " ";
	cout << endl;
	cout << "v7: ";
	for (auto it = v7.begin(); it != v7.end(); it++)cout << *it << " ";
	cout << endl;

#endif


#ifdef  work_3_22
	string  s("hello world");
	if (s.begin() != s.end())
	{
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout <<"��д����ĸΪ��д�� " <<s << endl;
	for (auto it = s.begin(); it != s.end()&& !isspace(*it);it++)
	{
		*it = toupper(*it);
	}
	cout <<"��д��һ������Ϊ��д�� "<< s << endl;
#endif

#ifdef work_3_23
	vector<int> someNum(10,25);
	for (auto c : someNum)
		cout << c << "  ";
	cout << endl;
	for (auto it = someNum.begin(); it != someNum.end(); it++)
	{
		*it *= 2;
	}
	for (auto c : someNum)      //����ʱ������������ʽ
		cout << c << "  ";
	cout << endl;
	for (auto it = someNum.begin(); it != someNum.end(); it++)
	{
		(*it)++;  //���Է���*it++�����Ч,�����������
	}
	for (auto c : someNum)      //����ʱ������������ʽ
		cout << c << "  ";
	cout << endl;
#endif
	while (1);


}
