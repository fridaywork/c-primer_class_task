/*********************
** 
  2019��3��24��16:33:47
  1.5����ϰ
  ������
  ��ϰ1.21 1.22 1.23 1.24
  �ؼ�����
*
**************************/

#include <iostream>
#include "Sales_item.h"

#define  work1_23   //���뿪��
int main(void)
{
	//�α����� & ��ϰ1.21  
	//���ܣ������������Ӧ��Ա�ĺ�
#ifdef  work1_21
	Sales_item  item1,item2;
	std::cin>> item1>>item2;
	if(item1.isbn() == item2.isbn())
	{
		std::cout<<item1+item2<<std::endl;
		//return 0;
	}
	else
	{
		std::cerr  << "Data must refer to same ISBN"<<std::endl;
		//return -1;
	}
	//���ϴ����Ӧ��ϰ1.21 ʵ��Ϊ�α�����
#endif
	//��ϰ1.22 ��ȡ���������ͬisbn�����ۼ�¼��������м�¼��
#ifdef work1_22
	Sales_item  item1,item2;
	if (std::cin>> item1)
	{
		int cnt = 1;  //����
		while(std::cin>> item2)
		{
			if(item1.isbn() == item2.isbn())
			{
				cnt ++;
				item1 += item2;
			}
			else
				std::cerr  << "Data must refer to same ISBN"<<std::endl;
		}
		std::cout<<"total record is "<<cnt<<"\r\n"<<item1<<std::endl;
	}
#endif

#ifdef  work1_23
//��ϰ2.23��2.24
//�˳�����ʵ��bug����������������ͬ����Ŀ�ſ���ͳ�Ƶ���ͬ���鱾��Ϣ,����������������һ��ǳ��ѿ�
	Sales_item  item1,item2;
	if (std::cin>> item1)
	{
		int cnt = 1;  //����
		while(std::cin>> item2)
		{
			if(item1.isbn() == item2.isbn())
			{
				cnt ++;
				item1 += item2;
			}
			else
			{
				std::cout<<"total record of "<< item1.isbn()<<" is "<<cnt<<"\r\n"<<item1<<std::endl;
				item1 = item2;
				cnt = 1;
			}
		}
		std::cout<<"total record of "<< item1.isbn()<<" is "<<cnt<<"\r\n"<<item1<<std::endl;
	}

#endif



	while(1);
}

