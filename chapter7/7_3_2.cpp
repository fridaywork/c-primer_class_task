/******
7.3.2 节练习
练习7.27  执行代码验证一下添加的程序
***/


#include <iostream>
#include <string>
#include <vector>
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

	void some_member() const;
	//添加返回*this的成员函数
	Screen &set(char);
	Screen &set(pos, pos, char);
	//非常量版本的函数对于常量对象是不可用的
	Screen &display(ostream & os){ do_display(os); return *this;}
	const  Screen &display(ostream & os) const{ do_display(os); return *this; }
private:
	pos  cursor = 0;
	pos  height = 0, width = 0;
	string contents;

	mutable  size_t   access_ctr;    //mutable声明使得const对象可以被改变
	//终于写到了负责显示内容的函数
	void  do_display(ostream & os) const { os << contents; }

};


inline 
Screen &Screen::move(pos r, pos c)   //设置引用类型的返回值，会直接改变调用后的screen变量
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r*width;
	return contents[row + c];
}


void Screen::some_member() const
{
	++access_ctr;//保存一个计数记录成员函数被调用的次数

}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;  //设置当前光标所在位置的新值
	return  *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;    //设置给定位置的新值
	return *this;
}

class Window_mgr{
private:
	//这个window_mgr追踪的screen 默认情况下，一个window_mgr包含一个标准尺寸的空白Screen
	vector<Screen> screens;//{ Screen(24, 80, ' ') };
};



int main(void)
{
	Screen my_fxxking_screan(5,5,'X');
	my_fxxking_screan.move(4,0).set('#').display(cout);
	cout << "\n";
	my_fxxking_screan.display(cout);
	cout << "\n";


	while (1);
}

