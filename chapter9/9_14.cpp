/***********************
2019��4��19��19:13:20
9.2.5����ϰ
��ϰ9.14   ��д���򣬽�һ��list�е�char*ָ�루ָ��C����ַ�����Ԫ�ظ�ֵ��һ��vector�е�string
********************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;
int main(void)
{
	//char  str[] = { "surprise mother fxxker!" };
	list<char*>		   list1 = { "surprise mother fxxker!" ,"haha","who say that?","whosyourdaddy"};
	vector<string>vect = {"go go go","speak"};
	//vector<int>vect(10,9);

	vect.assign(list1.begin(), list1.end());    //����string��ͷ�ļ���Ȼ�󵽴���ԭ�����˰��Сʱ

	cout << vect.capacity() << " " << vect.size() << endl;
	for (auto it = vect.begin(); it!=vect.end();it++)
	{
		cout << *it << endl;  
	}

	while (1);
}






