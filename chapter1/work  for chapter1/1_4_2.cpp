/**********88
***  
2019��3��24��15:23:18
1.4.2����ϰ
forѭ����������ϰ
��ϰ1.12
��ϰ1.13
��ϰ1.14
***
**************************/

#include <iostream>



int main(void)
{
	/***
	��ϰ1.12
	����forѭ���Ĺ��ܣ�����sumֵ
	***/
	int sum = 0;
	for(int i = -100;i<=100;++i)
		sum+=i;
	std::cout<<"sum = "<<sum<<"\r\n"<<std::endl;
	/****
	**    ���ܣ�ѭ��������-100��100�ĺ�   sum���ֵ 0
	****/

	//��ϰ1.13
	//��ϰ1.13.1  ��50��100��ѭ���Ӻ� forʵ��
	sum = 0;
	for(int i=50;i<101;i++)
	{
		sum += i;
	}
	std::cout<<"sum of 50 to 100 inclusive is "<<sum<<"\r\n"<<std::endl;//���Ϊ3825

	//��ϰ1.13.2 �ݼ�
	int num = 10;
	for(int i =10;i>=0;i--)
	{
		std::cout<<i<<std::endl;
	}

	//��ϰ1.13.2  ����2���������������֮�����������
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
	//��ϰ1.14
	��forѭ���У�ѭ�����Ʊ����ĳ�ʼ�����޸Ķ��������ͷ���֣���ʽ�ϼ�࣬���ر�������ѭ��������֪�����
	��whileѭ���У�ѭ�����Ʊ���һ����ѭ��ǰ��ʼ������ʽû��for����࣬����������ѭ������δ֪�����
	***********************/
	while(1);
	return 0;
}

