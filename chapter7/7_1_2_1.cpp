/**********
7_1_2  ����ϰ
��ϰ7.4  ��дһ����ΪPerson���ף�ʹ���ʾ��Ա������סַ����string��������ЩԪ�أ�����������ϰ�����ϳ�ʵ��������������

*****/



#include  <iostream>
#include  <string>
#include  <fstream>
#include  <vector>
using namespace std;


struct  Person{
	string is_name() const { return name; };
	string is_addr() const { return addr; };
	string name;	//����
	string addr;   //סַ
};





int main(void)
{
	ifstream  input("E:/in/input.txt");
	if (!input)cout << "�ļ���ʧ�ܣ������ԣ�" << endl;
	vector<Person>  name_list;
	Person new_one;
	string tempstr;
	while (input >> tempstr)
	{
		new_one.name = tempstr;
		input >> new_one.addr;
		name_list.push_back(new_one);
	}

	for (auto c : name_list)
	{
		cout << c.name << " " << c.addr << endl;
	}


	
	while (1);
	//return  0;


}