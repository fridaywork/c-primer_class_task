/*******************
**  2019年3月24日15:49:06
    1.4.3 练习
**  要点：ctrl+z输入文件结束符
*************************************/

#include <iostream>



int main(void)
{
	//练习1.6 从cin读取一组实数，输出其和
	std::cout<<"please input your real numbers for sum"<<std::endl;
	float num,sum=0;
	while(std::cin>>num)
	{
		sum+=num;
	}
	std::cout<<"the summation is "<<sum<<std::endl;


	while(1);
	return 0;
}


