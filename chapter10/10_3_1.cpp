/*******
2019年4月19日22:19:34
10.3.1节练习
练习10.11  使用stable_sort和isShorter将传递给你的elimdups版本vector排序，打印；
练习10.13  编写函数，接收一个string，返回一个bool值，指出string是否有5个字或更多字符，使用次函数划分words，打印出长度等于5的元素

*****************/

#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <numeric>
using namespace std;

void elimDups(vector<string>  &words)
{
	//按字典排序words，以便查找重复的单词
	sort(words.begin(), words.end());
	//unique 重排输入范围，使得每个单词只重复出现一次
	//排列在范围前部，返回指向不重复区域之后一个位置的迭代器
	auto end_unique = unique(words.begin(), words.end());
	//erase删除重复单词
	words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
//练习10.13
bool partition5(string  ss)
{
	if (ss.size() < 5)
		return 0;
	else return 1;
}

int main(void)
{
	//vector<int> vec = { 0, 11, 77, 5, 11, 22, 44, 55, 33 };
	//int res,val;
	string			story = "the quick red fox jumps over the slow red turtle";
	string          word;
	vector<string>	words_group;// = { "fox", "jumps", "over", "quick", "red", "slow", "the", "turtle" };
	ostringstream   some_mid;
	some_mid << story;
	istringstream  transit(some_mid.str());

	while (transit >> word)
	{
		words_group.push_back(word);
	}
	cout << "the untreated vector is :";
	for (auto c : words_group) cout << c << " "; cout << endl;
	elimDups(words_group);
	cout << "after sort and unique :";
	for (auto c : words_group) cout << c << " "; cout << endl;
	//练习10.11
	stable_sort(words_group.begin(), words_group.end(), isShorter);
	cout << "shorter is better:";
	for (auto c : words_group) cout << c << " "; cout << endl;
	cout << "the words longer than 5 letters :";
	for (auto c : words_group)
	{
		if (partition5(c))cout << c << " ";
	}
	cout << endl;
	while (1);

}