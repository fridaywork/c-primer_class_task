/*******************
**  2019��3��24��16:03:34
    1.4.4 ��ϰ
**  Ҫ�㣺if���
*************************************/

#include <iostream>


//�����ܣ���¼���������������ظ����ֵ��������
int main(void)
{
	int currVal =0,val = 0;
	if(std::cin>>currVal)   //���벻�Ϸ��Ͳ�ִ��
	{
		int cnt = 1;  //����
		while(std::cin>>val)
		{
			if(val == currVal)++cnt; //��¼�ظ���ֵ
			else
			{
				std::cout<<currVal<<" occurs "<< cnt << " times " <<std::endl;
				currVal  = val;
				cnt = 1;
			}
		}
		std::cout<<currVal<<" occurs "<< cnt << " times " <<std::endl;
	}
	while(1);
	return 0;
}


