/**********88
***  
2019��3��24��16:18:50
1.4.4����ϰ
��ϰ1.19
***
**************************/

#include <iostream>
int main(void)
{

	//��ϰ1.19  ����2���������������֮�����������
	//�����߼���ʹ���벻������
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

