/**************
7.1.1节练习
练习7.1 使用2.6.1节练习定义的Sales_data类为1.6节的交易处理程序编写一个新版本


**/



#include  <iostream>
#include  <string>
#include  <fstream>

using namespace std;
struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;     //销售数量
	double revenue = 0;     //总销售额
};

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
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue    += trans.units_sold * price;  // 更新销售总额
			}
			else
			{
				//打印前一本书的结果，输出书号，售出的册数，销售总额，平均价格
				price = total.revenue / total.units_sold;
				std::cout << total.bookNo << " "  << total.units_sold <<  " "  <<  total.revenue  << " " << price << std::endl;
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