/*******
2019��4��19��22:19:34
10.3.2����ϰ
��ϰ10.14  ��дһ��lambda����������int���������ǵĺ�
��ϰ10.15  ��дһ��lambda�����������ڵĺ�����int��������һ��int���������ض��ߺ�

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
	//���ֵ�����words���Ա�����ظ��ĵ���
	sort(words.begin(), words.end());
	//unique �������뷶Χ��ʹ��ÿ������ֻ�ظ�����һ��
	//�����ڷ�Χǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
	auto end_unique = unique(words.begin(), words.end());
	//eraseɾ���ظ�����
	words.erase(end_unique, words.end());
}

//�����ɵ������������һ��ʱ�䣡
string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr == 1) ? word : word + ending;//make_plural(wc, "word ", "s ")���������ı���
	//word������һ����word���s��ΪwordsΪword�ĸ�����
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	//�������ȶ�����
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b){return a.size() < b.size(); });
	auto wc = find_if(words.begin(), words.end(), [sz](const string &a){return a.size() >= sz; });
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s") << "of length " << sz << " or longer" << endl;
	for_each(wc, words.end(), [](const string &s){cout << s << " "; });
	cout << endl;
}


int main(void)
{
	//��ϰ10.14
	cout << sum(3, 5)<< endl;
	int  lam = 10;
	//��ϰ10.15
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