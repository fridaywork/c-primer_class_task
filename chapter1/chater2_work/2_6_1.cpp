/********************
***   2019年3月26日20:02:38
**    练习2.40 练习2.41  练习2.42
**    自行编写一个头文件，定义类，重写输出书本销售记录的程序
**************************************/

#include <iostream>

#include "Sales_data.h"
using  namespace std;
#define  work1_23
int main(void)
{
	#ifdef  work1_21
	Sales_data  item1,item2;
	double   avg;
	cin >> item1.bookNo >> item1.units_sold >>item1.price ;
	item1.revenue = item1.units_sold*item1.price ;
	cin >> item2.bookNo >> item2.units_sold  >> item2.price;
	item2.revenue = item2.units_sold*item2.price ;
	if(item1.bookNo == item2.bookNo)
	{	
		item2.units_sold += item1.units_sold;
		item2.revenue    += item1.revenue;
		avg  = item2.revenue / item2.units_sold;
		std::cout<<item2.bookNo<< item2.units_sold <<item2.revenue<<avg<<std::endl;
		//return 0;
	}
	else
	{
		std::cerr  << "Data must refer to same ISBN"<<std::endl;
		//return -1;
	}
	//以上代码对应练习1.21 实际为课本例程
#endif
	//练习1.22 读取多个具有相同isbn的销售记录，输出所有记录和
#ifdef work1_22
	Sales_data  item1,item2;
	double   avg;
	if (cin >> item1.bookNo >> item1.units_sold >>item1.price)
	{
		int cnt = 1;  //计数
		item1.revenue = item1.units_sold*item1.price ;
		while(cin >> item2.bookNo >> item2.units_sold >>item2.price)
		{
			if(item1.bookNo == item2.bookNo)
			{
				cnt ++;
				
				item2.revenue = item2.units_sold*item2.price ;
				item1.units_sold += item2.units_sold;
				item1.revenue    += item2.revenue;
			}
			else
				std::cerr  << "Data must refer to same ISBN"<<std::endl;
		}
		avg = item1.revenue /item1.units_sold;
		std::cout<<"total record is "<<cnt<<"\r\n"<<item1.bookNo<<item1.units_sold<<item1.revenue<<avg<<std::endl;
	}
#endif

#ifdef  work1_23
//练习2.23与2.24
//此程序其实有bug，必须连续输入相同的条目才可以统计到相同的书本信息,而且输入和输出混在一起非常难看
	Sales_data  item1,item2;
	if (cin >> item1.bookNo >> item1.units_sold >>item1.price)
	{
		int cnt = 1;  //计数
		item1.revenue = item1.units_sold*item1.price ;
		while(cin >> item2.bookNo >> item2.units_sold >>item2.price)
		{
			if(item1.bookNo == item2.bookNo)
			{
				cnt ++;		
				item2.revenue = item2.units_sold*item2.price ;
				item1.units_sold += item2.units_sold;
				item1.revenue    += item2.revenue;
			}
			else
			{
				std::cout<<"total record is "<<cnt<<"\r\n"<<item1.bookNo<<item1.units_sold<<item1.revenue<<std::endl;
				item1 = item2;
				cnt = 1;
			}
		}
		std::cout<<"total record of "<< item1.bookNo<<" is "<<cnt<<"\r\n"<<item1.bookNo<<item1.units_sold<<item1.revenue<<std::endl;
	}

#endif

	while(1);
}