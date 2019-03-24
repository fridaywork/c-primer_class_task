/*****************************
******
2019年3月24日22:42:41
书店程序
练习1.25
把课本里的书店程序抄进来跑一跑
******
*****************************/


#include <iostream>
#include "Sales_item.h"
int main(void)
{
	Sales_item total;   //保存下一条交易记录的变量
	//读入第一条交易记录，并确保有数据可以处理
	if(std::cin>>total)
	{
		Sales_item trans;  //保存和的变量
		//读入并处理剩余交易记录
		while(std::cin>>trans)
		{
			//如果我们仍在处理相同的书
			if(total.isbn() == trans.isbn())
			{
				total += trans;  // 更新销售总额
			}
			else 
			{
				//打印前一本书的结果
				std::cout<<total<<std::endl;
				total = trans;  // total  现在表示下一本书的销售额
			}
		}
		std::cout<<total << std::endl;  ///打印最后一本书的结果
	}
	else
	{
		//没有输入或者输入错误，警告读者
		std::cerr << "No data ?!"<<std::endl;
		return -1;
	}
	return  0;
}