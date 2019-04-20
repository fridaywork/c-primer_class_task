/***********************
2019年4月19日19:13:20
9.2节练习
练习9.2 定义一个list对象，元素是int的deque
练习9.4 编写函数，接收一对指向vector<int>的迭代器和int值，在两个迭代器指定的范围内查找给定的值，返回一个布尔值来指出是否找到
练习9.5 重写函数，返回一个迭代器指向找到的元素
********************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;

//练习9.4
bool find_val(int val, vector<int>::iterator beg, vector<int>::iterator end)
{
	for (vector<int>::iterator it = beg; it < end; it++)
	{
		if (*it == val)
			return 1;
	}
	return 0;
}

//练习9.5
vector<int>::iterator find_val_it(int val, vector<int>::iterator beg, vector<int>::iterator end)
{
	for (vector<int>::iterator it = beg; it < end; it++)
	{
		if (*it == val)
			return it;
	}
	return end;
}

int main(void)
{
	list<int>   list1;
	list<deque<int>>   object_list;   //必须声明命名空间namespace，否则不合法
	//9.4
	vector<int>  vect = {11,22,33,44,55,66};
	int value = 66;
	if (find_val(value, vect.begin(), vect.end()))

		cout << "查找到" << value << "值" << endl;
	else
		cout << "查找失败，未找到该值 : " << value << endl;

	//9.5

	if (vect.end() != find_val_it(value, vect.begin(), vect.end()))
	{
		cout << "查找到" << *(find_val_it(value, vect.begin(), vect.end())) << "值" << endl;
	}
	else cout << "查找失败，未找到该值 : " << value << endl;

	while (1);
}






