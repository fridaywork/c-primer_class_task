/**********88
***  
2019年3月24日16:18:50
1.4.4节练习
练习1.19
***
**************************/

#include <iostream>
int main(void)
{

	//练习1.19  输入2个整数，输出二者之间的所有整数
	//修正逻辑以使输入不必升序
	int innum1,innum2;
	std::cout<<" input two  integer"<<std::endl;
	std::cin>>innum1>>innum2;
	if(innum1 > innum2)
	{
		int temp;
		temp = innum2;
		innum2 = innum1;
		innum1 = temp;

	}

	for(int i = innum1;i<=innum2;i++)
		std::cout<<i<<std::endl;

	while(1);
	return 0;
}

