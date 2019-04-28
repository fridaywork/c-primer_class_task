/**********
7_1_2  节练习
练习7.2  曾在2.6.2节练习中编写了一个Sales_data类，请向这个类添加combine和isbn成员
练习7.3  修改7.1.1节才交易处理程序，令其使用这些成员
练习7.4  编写一个名为Person的雷，使其表示人员的姓名住址，用string对象存放这些元素，接下来的练习将不断充实这个类的其他特征

*****/



#include  <iostream>
#include  <string>
#include  <fstream>
using namespace std;
//练习7.2  编写类并添加成员函数
//#include "Sales_data_class.h"

struct Sales_data{
	//关于Sale_data操作的成员函数
	std::string   isbn() const { return bookNo; }
	Sales_data & combine(const Sales_data &);
	double avg_price()  const;
	std::string bookNo;

	unsigned int  units_sold;
	double        revenue;
	double        price;

};

//Sale_data 的非成员接口函数
Sales_data  add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);  //这种形式的声明确实从来都没见过


//上面的只是函数声明，具体的函数体还是得自己写
double Sales_data::avg_price() const 
{
	if (units_sold)
		return  revenue / units_sold;
	else  return 0;
}

Sales_data&  Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return  *this;
}





int main(void)
{
	Sales_data total;   //保存下一条交易记录的变量
	string temp_str;
	float  price;

	ifstream  input("E:/inputext.txt");
	if (!input)cout << "文件打开失败！请重试！" << endl;

	//读入第一条交易记录，并确保有数据可以处理
	if (input >> temp_str)
	{
		total.bookNo = temp_str;
		input >> total.units_sold >> price;
		total.revenue = total.units_sold * price;
		Sales_data trans;  //保存和的变量
		//读入并处理剩余交易记录
		while (input >> temp_str)
		{
			trans.bookNo = temp_str;
			input >> trans.units_sold >> price;
			trans.revenue = trans.units_sold * price;
			//如果我们仍在处理相同的书
			if (total.isbn() == trans.isbn())  //使用isbn
			{
				//total.units_sold += trans.units_sold;
				//total.revenue += trans.units_sold * price;  // 更新销售总额
				total.combine(trans);  //替换掉了更新销售总额的程序
			}
			else
			{
				//打印前一本书的结果，输出书号，售出的册数，销售总额，平均价格
				price = total.revenue / total.units_sold;
				std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << price << std::endl;
				total = trans;  // total  现在表示下一本书的销售额
			}
		}
		price = total.revenue / total.units_sold;
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << price << std::endl; ///打印最后一本书的结果
	}
	else
	{
		//没有输入或者输入错误，警告读者
		std::cerr << "No data ?!" << std::endl;
		return -1;
	}
	while (1);
	//return  0;


}