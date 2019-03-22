
/***
练习1.3  练习1.4   练习1.5
2019年3月22日22:26:13
by  PK
****/
#include  <iostream>
#include  <stdio.h>

int  main(void)
{
	/*练习1.3
	输出hello world
	*/
	printf("hello C hello world! \r\n");   //C
	std::cout << "hello C++ hello singledog! \r\n"<<std::endl;
	//以上为练习1.3

	/** 练习1.4
	计算两个输入数的加和乘
	**/
	int num1,num2,res;
	std::cout<<"please input two number \r\n"<<std::endl;
	std::cin>>num1>>num2;
	res = num1+num2;
	std::cout<<"num1+num2 = "<<res<<std::endl;
	res = num1*num2;
	std::cout<<"num1*num2 = "<<res<<std::endl;
	printf("\r\n\r\n"); 
	/**练习1.5 
	将所有的输出操作放在一条语句中
	**/
	std::cout<<"the sum of num1 + num2 is "<<num1+num2<<" and result of num1*num2 is "<< num1*num2<<"\r\n"<<std::endl;
	getchar();
	while(1);
	return 0;
}
