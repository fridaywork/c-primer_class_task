/**********88
***  
2019年3月24日15:23:18
1.4.2节练习
for循环控制流练习
练习1.12
练习1.13
练习1.14
***
**************************/

#include <iostream>



int main(void)
{
	/***
	练习1.12
	描述for循环的功能，并求sum值
	***/
	int sum = 0;
	for(int i = -100;i<=100;++i)
		sum+=i;
	std::cout<<"sum = "<<sum<<"\r\n"<<std::endl;
	/****
	**    功能：循环求整数-100到100的和   sum输出值 0
	****/

	//练习1.13
	//练习1.13.1  求50到100的循环加和 for实现
	sum = 0;
	for(int i=50;i<101;i++)
	{
		sum += i;
	}
	std::cout<<"sum of 50 to 100 inclusive is "<<sum<<"\r\n"<<std::endl;//结果为3825

	//练习1.13.2 递减
	int num = 10;
	for(int i =10;i>=0;i--)
	{
		std::cout<<i<<std::endl;
	}

	//练习1.13.2  输入2个整数，输出二者之间的所有整数
	int innum1,innum2;
	std::cout<<" input two increasing integer"<<std::endl;
	std::cin>>innum1>>innum2;
	if(innum1 > innum2)
	{std::cout<<" input error! u idiot! \r\n please input two increasing integer!"<<std::endl;}
	else
	{
		for(int i = innum1;i<=innum2;i++)
			std::cout<<i<<std::endl;
	}

	//

	/*************
	//练习1.14
	在for循环中，循环控制变量的初始化和修改都放在语句头部分，形式较简洁，且特别适用于循环次数已知的情况
	在while循环中，循环控制变量一般在循环前初始化，形式没有for语句简洁，但是适用于循环次数未知的情况
	***********************/
	while(1);
	return 0;
}

