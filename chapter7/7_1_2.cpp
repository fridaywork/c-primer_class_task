/**********
7_1_2  ����ϰ
��ϰ7.2  ����2.6.2����ϰ�б�д��һ��Sales_data�࣬������������combine��isbn��Ա
��ϰ7.3  �޸�7.1.1�ڲŽ��״����������ʹ����Щ��Ա
��ϰ7.4  ��дһ����ΪPerson���ף�ʹ���ʾ��Ա������סַ����string��������ЩԪ�أ�����������ϰ�����ϳ�ʵ��������������

*****/



#include  <iostream>
#include  <string>
#include  <fstream>
using namespace std;
//��ϰ7.2  ��д�ಢ��ӳ�Ա����
//#include "Sales_data_class.h"

struct Sales_data{
	//����Sale_data�����ĳ�Ա����
	std::string   isbn() const { return bookNo; }
	Sales_data & combine(const Sales_data &);
	double avg_price()  const;
	std::string bookNo;

	unsigned int  units_sold;
	double        revenue;
	double        price;

};

//Sale_data �ķǳ�Ա�ӿں���
Sales_data  add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);  //������ʽ������ȷʵ������û����


//�����ֻ�Ǻ�������������ĺ����廹�ǵ��Լ�д
double Sales_data::avg_price() const 
{
	if (units_sold)
		return  revenue / units_sold;
	else  return 0;
}

Sales_data&  Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return  *this;
}





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
			if (total.isbn() == trans.isbn())  //ʹ��isbn
			{
				//total.units_sold += trans.units_sold;
				//total.revenue += trans.units_sold * price;  // ���������ܶ�
				total.combine(trans);  //�滻���˸��������ܶ�ĳ���
			}
			else
			{
				//��ӡǰһ����Ľ���������ţ��۳��Ĳ����������ܶƽ���۸�
				price = total.revenue / total.units_sold;
				std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << price << std::endl;
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