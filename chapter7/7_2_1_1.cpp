/**********
7_2_1  节练习
练习7.22  修改Person函数实现隐藏细节

*****/



#include  <iostream>
#include  <string>
#include  <fstream>
#include  <vector>
using namespace std;


class  Person{
	friend istream &read(istream &, Person &);   //为友元函数提供访问private的声明
public:
	Person() = default;

	Person(istream&); //这只是个类内的函数声明，不能添加函数主体
	string is_name() const { return name; };
	string is_addr() const { return addr; };

private:
	string name;	//姓名
	string addr;   //住址
};

//定义非成员函数，用于类的操作
istream &read(istream &is, Person &item)
{
	double price = 0;
	is >> item.name >> item.addr;
	return  is;
}
//输出函数
ostream &print(ostream &os, const Person &item)
{
	os << item.is_name() << " " << item.is_addr() <<endl;   //有疑问，访问这个成员函数和直接访问类的成员有什么区别吗？
	return os;
}



Person::Person(istream &is)
{
	read(is, *this);
}


int main(void)
{
	ifstream  input("E:/in/input.txt");
	if (!input)cout << "文件打开失败！请重试！" << endl;
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