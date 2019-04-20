/*******
2019年4月19日22:19:34
10.3.2节练习
练习10.14  编写一个lambda，接收两个int，返回他们的和
练习10.15  编写一个lambda，捕获它所在的函数的int，并接收一个int参数，返回二者和

*****************/

#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <numeric>
using namespace std;

auto sum = [](int a, int b)
{
	return a + b; 
};

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

//找这个傻吊函数找了我一年时间！
string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr == 1) ? word : word + ending;//make_plural(wc, "word ", "s ")当输入中文本中
	//word数大于一是在word后加s，为words为word的复数！
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	//按长度稳定排序
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b){return a.size() < b.size(); });
	auto wc = find_if(words.begin(), words.end(), [sz](const string &a){return a.size() >= sz; });
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s") << "of length " << sz << " or longer" << endl;
	for_each(wc, words.end(), [](const string &s){cout << s << " "; });
	cout << endl;
}


int main(void)
{
	//练习10.14
	cout << sum(3, 5)<< endl;
	int  lam = 10;
	//练习10.15
	auto add = [lam](int a){return lam + a; };
		
	cout << add(5) << endl;


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
	biggies(words_group, words_group.size());


	while (1);

}