/*******************
**  2019��3��24��15:49:06
    1.4.3 ��ϰ
**  Ҫ�㣺ctrl+z�����ļ�������
*************************************/

#include <iostream>



int main(void)
{
	//��ϰ1.6 ��cin��ȡһ��ʵ����������
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


