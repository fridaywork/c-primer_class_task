/*****************************
******
2019��3��24��22:42:41
������
��ϰ1.25
�ѿα���������򳭽�����һ��
******
*****************************/


#include <iostream>
#include "Sales_item.h"
int main(void)
{
	Sales_item total;   //������һ�����׼�¼�ı���
	//�����һ�����׼�¼����ȷ�������ݿ��Դ���
	if(std::cin>>total)
	{
		Sales_item trans;  //����͵ı���
		//���벢����ʣ�ཻ�׼�¼
		while(std::cin>>trans)
		{
			//����������ڴ�����ͬ����
			if(total.isbn() == trans.isbn())
			{
				total += trans;  // ���������ܶ�
			}
			else 
			{
				//��ӡǰһ����Ľ��
				std::cout<<total<<std::endl;
				total = trans;  // total  ���ڱ�ʾ��һ��������۶�
			}
		}
		std::cout<<total << std::endl;  ///��ӡ���һ����Ľ��
	}
	else
	{
		//û���������������󣬾������
		std::cerr << "No data ?!"<<std::endl;
		return -1;
	}
	return  0;
}