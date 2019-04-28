/**********
7_1_2  节练习
练习7.4  编写一个名为Person的雷，使其表示人员的姓名住址，用string对象存放这些元素，接下来的练习将不断充实这个类的其他特征

*****/



#include  <iostream>
#include  <string>
#include  <fstream>
#include  <vector>
using namespace std;


struct  Person{
	string is_name() const { return name; };
	string is_addr() const { return addr; };
	string name;	//姓名
	string addr;   //住址
};





int main(void)
{
	ifstream  input("E:/in/input.txt");
	if (!input)cout << "文件打开失败！请重试！" << endl;
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