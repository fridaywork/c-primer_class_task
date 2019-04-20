/***********************
2019年4月19日19:13:20
9.2.5节练习
练习9.14   编写程序，将一个list中的char*指针（指向C风格字符串）元素赋值给一个vector中的string
********************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;
int main(void)
{
	//char  str[] = { "surprise mother fxxker!" };
	list<char*>		   list1 = { "surprise mother fxxker!" ,"haha","who say that?","whosyourdaddy"};
	vector<string>vect = {"go go go","speak"};
	//vector<int>vect(10,9);

	vect.assign(list1.begin(), list1.end());    //少了string的头文件，然后到处找原因耽误了半个小时

	cout << vect.capacity() << " " << vect.size() << endl;
	for (auto it = vect.begin(); it!=vect.end();it++)
	{
		cout << *it << endl;  
	}

	while (1);
}






