/**************
7.1.1����ϰ
��ϰ7.1 ʹ��2.6.1����ϰ�����Sales_data��Ϊ1.6�ڵĽ��״�������дһ���°汾


**/



#include  <iostream>
#include  <string>
#include  <fstream>

using namespace std;
struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;     //��������
	double revenue = 0;     //�����۶�
};

int main(void)
{
	Sales_data total;   //������һ�����׼�¼�ı���
	string temp_str;
	float  price;

	ifstream  input("E:/inputext.txt");
	if (!input)cout << "�ļ���ʧ�ܣ������ԣ�" << endl;

	//�����һ�����׼�¼����ȷ�������ݿ��Դ���
	if (input >> temp_str)
	{
		total.bookNo = temp_str;
		input >> total.units_sold >> price;
		total.revenue = total.units_sold * price;
		Sales_data trans;  //����͵ı���
		//���벢����ʣ�ཻ�׼�¼
		while (input >> temp_str)
		{
			trans.bookNo = temp_str;
			input >> trans.units_sold >> price;
			trans.revenue = trans.units_sold * price;
			//����������ڴ�����ͬ����
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue    += trans.units_sold * price;  // ���������ܶ�
			}
			else
			{
				//��ӡǰһ����Ľ���������ţ��۳��Ĳ����������ܶƽ���۸�
				price = total.revenue / total.units_sold;
				std::cout << total.bookNo << " "  << total.units_sold <<  " "  <<  total.revenue  << " " << price << std::endl;
				total = trans;  // total  ���ڱ�ʾ��һ��������۶�
			}
		}
		price = total.revenue / total.units_sold;
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << price << std::endl; ///��ӡ���һ����Ľ��
	}
	else
	{
		//û���������������󣬾������
		std::cerr << "No data ?!" << std::endl;
		return -1;
	}
	while (1);
	//return  0;


}