/**********88
***  2019年3月24日14:55:32
1.4.1节练习
while语句实现循环控制
练习1.9
练习1.0
练习1.11
***
**************************/

#include <iostream>



int main(void)
{
	//练习1.9  求50到100的循环加和
	int num = 50,sum = 0;
	while(num<101)
	{
		sum += num;
		num++;
	}
	std::cout<<"sum = "<<sum<<"\r\n"<<std::endl;//结果为3825

	//练习1.10  递减
	num = 10;
	while(num>=0)
	{
		std::cout<<" "<<num<<" "<<std::endl;
		num--;
	}

	//练习1.11  输入2个整数，输出二者之间的所有整数
	int innum1,innum2;
	std::cout<<" please input two increasing integer"<<std::endl;
	std::cin>>innum1>>innum2;
	if(innum1 > innum2)
	{std::cout<<" input error! \r\n please input two increasing integer!"<<std::endl;}
	else
	{
		num = innum1;
		while(num<innum2)
		{
			std::cout<<num<<std::endl;
			num++;
		}
	}
	while(1);
	return 0;
}