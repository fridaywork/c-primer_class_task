/**********88
***  2019��3��24��14:55:32
1.4.1����ϰ
while���ʵ��ѭ������
��ϰ1.9
��ϰ1.0
��ϰ1.11
***
**************************/

#include <iostream>



int main(void)
{
	//��ϰ1.9  ��50��100��ѭ���Ӻ�
	int num = 50,sum = 0;
	while(num<101)
	{
		sum += num;
		num++;
	}
	std::cout<<"sum = "<<sum<<"\r\n"<<std::endl;//���Ϊ3825

	//��ϰ1.10  �ݼ�
	num = 10;
	while(num>=0)
	{
		std::cout<<" "<<num<<" "<<std::endl;
		num--;
	}

	//��ϰ1.11  ����2���������������֮�����������
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