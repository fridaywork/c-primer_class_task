
/***
��ϰ1.3  ��ϰ1.4   ��ϰ1.5
2019��3��22��22:26:13
by  PK
****/
#include  <iostream>
#include  <stdio.h>

int  main(void)
{
	/*��ϰ1.3
	���hello world
	*/
	printf("hello C hello world! \r\n");   //C
	std::cout << "hello C++ hello singledog! \r\n"<<std::endl;
	//����Ϊ��ϰ1.3

	/** ��ϰ1.4
	���������������ļӺͳ�
	**/
	int num1,num2,res;
	std::cout<<"please input two number \r\n"<<std::endl;
	std::cin>>num1>>num2;
	res = num1+num2;
	std::cout<<"num1+num2 = "<<res<<std::endl;
	res = num1*num2;
	std::cout<<"num1*num2 = "<<res<<std::endl;
	printf("\r\n\r\n"); 
	/**��ϰ1.5 
	�����е������������һ�������
	**/
	std::cout<<"the sum of num1 + num2 is "<<num1+num2<<" and result of num1*num2 is "<< num1*num2<<"\r\n"<<std::endl;
	getchar();
	while(1);
	return 0;
}
