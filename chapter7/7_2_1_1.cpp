/**********
7_2_1  ����ϰ
��ϰ7.22  �޸�Person����ʵ������ϸ��

*****/



#include  <iostream>
#include  <string>
#include  <fstream>
#include  <vector>
using namespace std;


class  Person{
	friend istream &read(istream &, Person &);   //Ϊ��Ԫ�����ṩ����private������
public:
	Person() = default;

	Person(istream&); //��ֻ�Ǹ����ڵĺ���������������Ӻ�������
	string is_name() const { return name; };
	string is_addr() const { return addr; };

private:
	string name;	//����
	string addr;   //סַ
};

//����ǳ�Ա������������Ĳ���
istream &read(istream &is, Person &item)
{
	double price = 0;
	is >> item.name >> item.addr;
	return  is;
}
//�������
ostream &print(ostream &os, const Person &item)
{
	os << item.is_name() << " " << item.is_addr() <<endl;   //�����ʣ����������Ա������ֱ�ӷ�����ĳ�Ա��ʲô������
	return os;
}



Person::Person(istream &is)
{
	read(is, *this);
}


int main(void)
{
	ifstream  input("E:/in/input.txt");
	if (!input)cout << "�ļ���ʧ�ܣ������ԣ�" << endl;
	vector<Person>  name_list;
	Person new_one(input);
	string tempstr;
	if (input)
	{

		name_list.push_back(new_one);
		while (read(input, new_one))
		{
			name_list.push_back(new_one);
		}

	}
	for (auto c : name_list)
	{
		print(cout, c);
		//cout << c.name << " " << c.addr << endl;
	}
	
	while (1);
	//return  0;


}