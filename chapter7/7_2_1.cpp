/**********
7_1_4  节练习
练习7.21   使用class重定义类，并修改对应的书店程序

知识点  ：友元
在函数开始或者函数结束，集中声明友元函数，友元声明下的函数可以访问private类的成员

*****/



#include  <iostream>
#include  <string>
#include  <fstream>
#include  <vector>
using namespace std;



class Sales_data{
	friend  Sales_data  add(const Sales_data&, const Sales_data&);
	friend  std::ostream &print(std::ostream&, const Sales_data&);
	friend  std::istream &read(std::istream&, Sales_data&);  //这种形式的声明确实从来都没见过


public:
	//练习7.11 为类添加构造函数  
	Sales_data() = default;
	Sales_data(const string &s) : bookNo(s){}
	Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n){}

	//7.12 只接受一个istream的函数
	Sales_data(istream &);

	//关于Sale_data操作的成员函数
	std::string   isbn() const { return bookNo; }
	Sales_data & combine(const Sales_data &);
	double avg_price()  const;
private:
	//原始数据成员
	std::string bookNo;
	unsigned int  units_sold;
	double        revenue;

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

//定义非成员函数，用于类的操作
istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return  is;
}
//输出函数
ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price() << endl;
	return os;
}


Sales_data::Sales_data(istream &is)
{
	read(is, *this); //从is中读取一条交易信息然后存入this中
}

int main(void)
{
//	Sales_data total;   //保存下一条交易记录的变量
	string temp_str;
	float  price;

	ifstream  input("E:/inputext.txt");
	if (!input)cout << "文件打开失败！请重试！" << endl;

	//读入第一条交易记录，并确保有数据可以处理
	Sales_data total(input);    //重定义了Sales_data 类型能直接执行的操作方式，注意其用法
	if (input)
	{
	
		Sales_data trans(input);  //保存和的变量
		//读入并处理剩余交易记录
		while (read(input, trans))
		{
		
			//如果我们仍在处理相同的书
			if (total.isbn() == trans.isbn())  //使用isbn
			{
			
				total.combine(trans);  //替换掉了更新销售总额的程序
			}
			else
			{
	
				print(cout, total);
				total = trans;  // total  现在表示下一本书的销售额
			}
		}
		print(cout, total);
	}
	else
	{
		//没有输入或者输入错误，警告读者
		std::cerr << "No data ?!" << std::endl;
		return -1;
	}
	
	input.close();

//	input.open("E:/inputext.txt");
//	if (!input)cout << "文件打开失败！请重试！" << endl;

//	Sales_data("bookNumber");
//	Sales_data(input);

	while (1);
	//return  0;


}