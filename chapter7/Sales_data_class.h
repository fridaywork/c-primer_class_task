#ifndef  __SALES_DATA_CLASS_H
#define  __SALES_DATA_CLASS_H
#include  <iostream>
#include <string>
struct Sales_data{
	std::string   isbn() const { return bookNo; };
	unsigned int  units_sold ;
	double        revenue    ;
	double        price;

};



//typedef struct{
//	std::string  bookNo;
//	unsigned int  units_sold ;
//	double   revenue         ;
//
//}Sales_data;







#endif