/******
7.3.1 节练习
练习7.23 编写你自己的screen类
练习7.24 给类添加3个构造函数：一个默认构造函数，另一个构造函数接收宽和高的值，
然后将contents初始化成给定数量的空白；第三个构造函数接受宽和高的值以及一个字符，
该字符作为初始化后的屏幕的内容

***/


#include <iostream>
#include <string>

using namespace std;
//编写自己的screen类
class Screen
{
public:
	typedef string::size_type pos;

	Screen() = default;   //因为存在另一个构造函数，必须手动添加默认构造函数
	//接受高、宽和一个字符
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' '){} //初始化为空白
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd,c){} //初始化为给定字符
	char get() const { return contents[cursor]; } //隐式内联
	//内联函数,显式内联
	inline char get(pos ht, pos wd)const;
	Screen &move(pos r, pos c);
private:
	pos  cursor = 0;
	pos  height = 0, width = 0;
	string contents;
};


int main(void)
{

}

