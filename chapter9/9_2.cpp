/***********************
2019��4��19��19:13:20
9.2����ϰ
��ϰ9.2 ����һ��list����Ԫ����int��deque
��ϰ9.4 ��д����������һ��ָ��vector<int>�ĵ�������intֵ��������������ָ���ķ�Χ�ڲ��Ҹ�����ֵ������һ������ֵ��ָ���Ƿ��ҵ�
��ϰ9.5 ��д����������һ��������ָ���ҵ���Ԫ��
********************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;

//��ϰ9.4
bool find_val(int val, vector<int>::iterator beg, vector<int>::iterator end)
{
	for (vector<int>::iterator it = beg; it < end; it++)
	{
		if (*it == val)
			return 1;
	}
	return 0;
}

//��ϰ9.5
vector<int>::iterator find_val_it(int val, vector<int>::iterator beg, vector<int>::iterator end)
{
	for (vector<int>::iterator it = beg; it < end; it++)
	{
		if (*it == val)
			return it;
	}
	return end;
}

int main(void)
{
	list<int>   list1;
	list<deque<int>>   object_list;   //�������������ռ�namespace�����򲻺Ϸ�
	//9.4
	vector<int>  vect = {11,22,33,44,55,66};
	int value = 66;
	if (find_val(value, vect.begin(), vect.end()))

		cout << "���ҵ�" << value << "ֵ" << endl;
	else
		cout << "����ʧ�ܣ�δ�ҵ���ֵ : " << value << endl;

	//9.5

	if (vect.end() != find_val_it(value, vect.begin(), vect.end()))
	{
		cout << "���ҵ�" << *(find_val_it(value, vect.begin(), vect.end())) << "ֵ" << endl;
	}
	else cout << "����ʧ�ܣ�δ�ҵ���ֵ : " << value << endl;

	while (1);
}






