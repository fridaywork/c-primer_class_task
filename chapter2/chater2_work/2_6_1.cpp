/********************
***   2019��3��26��20:02:38
**    ��ϰ2.40 ��ϰ2.41  ��ϰ2.42
**    ���б�дһ��ͷ�ļ��������࣬��д����鱾���ۼ�¼�ĳ���
**************************************/

#include <iostream>

#include "Sales_data.h"
using  namespace std;
#define  work1_23
int main(void)
{
	#ifdef  work1_21
	Sales_data  item1,item2;
	double   avg;
	cin >> item1.bookNo >> item1.units_sold >>item1.price ;
	item1.revenue = item1.units_sold*item1.price ;
	cin >> item2.bookNo >> item2.units_sold  >> item2.price;
	item2.revenue = item2.units_sold*item2.price ;
	if(item1.bookNo == item2.bookNo)
	{	
		item2.units_sold += item1.units_sold;
		item2.revenue    += item1.revenue;
		avg  = item2.revenue / item2.units_sold;
		std::cout<<item2.bookNo<< item2.units_sold <<item2.revenue<<avg<<std::endl;
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
	Sales_data  item1,item2;
	double   avg;
	if (cin >> item1.bookNo >> item1.units_sold >>item1.price)
	{
		int cnt = 1;  //����
		item1.revenue = item1.units_sold*item1.price ;
		while(cin >> item2.bookNo >> item2.units_sold >>item2.price)
		{
			if(item1.bookNo == item2.bookNo)
			{
				cnt ++;
				
				item2.revenue = item2.units_sold*item2.price ;
				item1.units_sold += item2.units_sold;
				item1.revenue    += item2.revenue;
			}
			else
				std::cerr  << "Data must refer to same ISBN"<<std::endl;
		}
		avg = item1.revenue /item1.units_sold;
		std::cout<<"total record is "<<cnt<<"\r\n"<<item1.bookNo<<item1.units_sold<<item1.revenue<<avg<<std::endl;
	}
#endif

#ifdef  work1_23
//��ϰ2.23��2.24
//�˳�����ʵ��bug����������������ͬ����Ŀ�ſ���ͳ�Ƶ���ͬ���鱾��Ϣ,����������������һ��ǳ��ѿ�
	Sales_data  item1,item2;
	if (cin >> item1.bookNo >> item1.units_sold >>item1.price)
	{
		int cnt = 1;  //����
		item1.revenue = item1.units_sold*item1.price ;
		while(cin >> item2.bookNo >> item2.units_sold >>item2.price)
		{
			if(item1.bookNo == item2.bookNo)
			{
				cnt ++;		
				item2.revenue = item2.units_sold*item2.price ;
				item1.units_sold += item2.units_sold;
				item1.revenue    += item2.revenue;
			}
			else
			{
				std::cout<<"total record is "<<cnt<<"\r\n"<<item1.bookNo<<item1.units_sold<<item1.revenue<<std::endl;
				item1 = item2;
				cnt = 1;
			}
		}
		std::cout<<"total record of "<< item1.bookNo<<" is "<<cnt<<"\r\n"<<item1.bookNo<<item1.units_sold<<item1.revenue<<std::endl;
	}

#endif

	while(1);
}