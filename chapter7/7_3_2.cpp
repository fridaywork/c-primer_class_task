/******
7.3.2 ����ϰ
��ϰ7.27  ִ�д�����֤һ����ӵĳ���
***/


#include <iostream>
#include <string>
#include <vector>
using namespace std;
//��д�Լ���screen��
class Screen
{
public:
	typedef string::size_type pos;

	Screen() = default;   //��Ϊ������һ�����캯���������ֶ����Ĭ�Ϲ��캯��
	//���ܸߡ����һ���ַ�
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' '){} //��ʼ��Ϊ�հ�
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd,c){} //��ʼ��Ϊ�����ַ�
	char get() const { return contents[cursor]; } //��ʽ����
	//��������,��ʽ����
	inline char get(pos ht, pos wd)const;
	Screen &move(pos r, pos c);

	void some_member() const;
	//��ӷ���*this�ĳ�Ա����
	Screen &set(char);
	Screen &set(pos, pos, char);
	//�ǳ����汾�ĺ������ڳ��������ǲ����õ�
	Screen &display(ostream & os){ do_display(os); return *this;}
	const  Screen &display(ostream & os) const{ do_display(os); return *this; }
private:
	pos  cursor = 0;
	pos  height = 0, width = 0;
	string contents;

	mutable  size_t   access_ctr;    //mutable����ʹ��const������Ա��ı�
	//����д���˸�����ʾ���ݵĺ���
	void  do_display(ostream & os) const { os << contents; }

};


inline 
Screen &Screen::move(pos r, pos c)   //�����������͵ķ���ֵ����ֱ�Ӹı���ú��screen����
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
	++access_ctr;//����һ��������¼��Ա���������õĴ���

}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;  //���õ�ǰ�������λ�õ���ֵ
	return  *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;    //���ø���λ�õ���ֵ
	return *this;
}

class Window_mgr{
private:
	//���window_mgr׷�ٵ�screen Ĭ������£�һ��window_mgr����һ����׼�ߴ�Ŀհ�Screen
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

