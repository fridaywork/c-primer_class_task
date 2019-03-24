/*********************
** 
  2019年3月24日16:33:47
  1.5节练习
  书店程序
  练习1.21 1.22 1.23 1.24
  关键：类
*
**************************/

#include <iostream>
#include "Sales_item.h"

#define  work1_23   //编译开关
int main(void)
{
	//课本例程 & 练习1.21  
	//功能：计算两个类对应成员的和
#ifdef  work1_21
	Sales_item  item1,item2;
	std::cin>> item1>>item2;
	if(item1.isbn() == item2.isbn())
	{
		std::cout<<item1+item2<<std::endl;
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
	Sales_item  item1,item2;
	if (std::cin>> item1)
	{
		int cnt = 1;  //计数
		while(std::cin>> item2)
		{
			if(item1.isbn() == item2.isbn())
			{
				cnt ++;
				item1 += item2;
			}
			else
				std::cerr  << "Data must refer to same ISBN"<<std::endl;
		}
		std::cout<<"total record is "<<cnt<<"\r\n"<<item1<<std::endl;
	}
#endif

#ifdef  work1_23
//练习2.23与2.24
//此程序其实有bug，必须连续输入相同的条目才可以统计到相同的书本信息,而且输入和输出混在一起非常难看
	Sales_item  item1,item2;
	if (std::cin>> item1)
	{
		int cnt = 1;  //计数
		while(std::cin>> item2)
		{
			if(item1.isbn() == item2.isbn())
			{
				cnt ++;
				item1 += item2;
			}
			else
			{
				std::cout<<"total record of "<< item1.isbn()<<" is "<<cnt<<"\r\n"<<item1<<std::endl;
				item1 = item2;
				cnt = 1;
			}
		}
		std::cout<<"total record of "<< item1.isbn()<<" is "<<cnt<<"\r\n"<<item1<<std::endl;
	}

#endif



	while(1);
}

