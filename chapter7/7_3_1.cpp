/******
7.3.1 ����ϰ
��ϰ7.23 ��д���Լ���screen��
��ϰ7.24 �������3�����캯����һ��Ĭ�Ϲ��캯������һ�����캯�����տ�͸ߵ�ֵ��
Ȼ��contents��ʼ���ɸ��������Ŀհף����������캯�����ܿ�͸ߵ�ֵ�Լ�һ���ַ���
���ַ���Ϊ��ʼ�������Ļ������

***/


#include <iostream>
#include <string>

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
private:
	pos  cursor = 0;
	pos  height = 0, width = 0;
	string contents;
};


int main(void)
{

}

