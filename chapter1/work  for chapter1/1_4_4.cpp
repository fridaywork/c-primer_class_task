/*******************
**  2019年3月24日16:03:34
    1.4.4 练习
**  要点：if语句
*************************************/

#include <iostream>


//程序功能：记录连续输入整数中重复出现的数并输出
int main(void)
{
	int currVal =0,val = 0;
	if(std::cin>>currVal)   //输入不合法就不执行
	{
		int cnt = 1;  //计数
		while(std::cin>>val)
		{
			if(val == currVal)++cnt; //记录重复的值
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


