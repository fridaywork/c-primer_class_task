/**********
7_1_4  ����ϰ
��ϰ7.11  �����Sales_data ������ӹ��캯����Ȼ���дһ�γ��������õ�ÿһ�����ۺ���
��ϰ7.12  ��ֻ����һ��istream��ΪΪ�����Ĺ��캯�����嵽����ڲ�
��ϰ7.13  ʹ��istream���캯����д��229ҳ�ĳ���
��ϰ7.14  ��дһ�����캯���������������ṩ�����ڳ�ʼֵ��ʽ�س�ʼ����Ա

*****/



#include  <iostream>
#include  <string>
#include  <fstream>
#include  <vector>
using namespace std;



struct Sales_data{
	//��ϰ7.11 Ϊ����ӹ��캯��  
	Sales_data() = default;
	Sales_data(const string &s) : bookNo(s){}
	Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n){}

	//7.12 ֻ����һ��istream�ĺ���
	Sales_data(istream &);

	//7.14 
	Sales_data() : units_sold(0), revenue(0){}
	//����Sale_data�����ĳ�Ա����
	std::string   isbn() const { return bookNo; }
	Sales_data & combine(const Sales_data &);
	double avg_price()  const;
	std::string bookNo;
	//ԭʼ���ݳ�Ա
	unsigned int  units_sold;
	double        revenue;

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

//����ǳ�Ա������������Ĳ���
istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return  is;
}
//�������
ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price() << endl;
	return os;
}


Sales_data::Sales_data(istream &is)
{
	read(is, *this); //��is�ж�ȡһ��������ϢȻ�����this��
}

int main(void)
{
//	Sales_data total;   //������һ�����׼�¼�ı���
	string temp_str;
	float  price;

	ifstream  input("E:/inputext.txt");
	if (!input)cout << "�ļ���ʧ�ܣ������ԣ�" << endl;

	//�����һ�����׼�¼����ȷ�������ݿ��Դ���
	Sales_data total(input);    //�ض�����Sales_data ������ֱ��ִ�еĲ�����ʽ��ע�����÷�
	if (input)
	{
	
		Sales_data trans(input);  //����͵ı���
		//���벢����ʣ�ཻ�׼�¼
		while (read(input, trans))
		{
		
			//����������ڴ�����ͬ����
			if (total.isbn() == trans.isbn())  //ʹ��isbn
			{
			
				total.combine(trans);  //�滻���˸��������ܶ�ĳ���
			}
			else
			{
	
				print(cout, total);
				total = trans;  // total  ���ڱ�ʾ��һ��������۶�
			}
		}
		print(cout, total);
	}
	else
	{
		//û���������������󣬾������
		std::cerr << "No data ?!" << std::endl;
		return -1;
	}
	
	input.close();

//	input.open("E:/inputext.txt");
//	if (!input)cout << "�ļ���ʧ�ܣ������ԣ�" << endl;

//	Sales_data("bookNumber");
//	Sales_data(input);

	while (1);
	//return  0;


}