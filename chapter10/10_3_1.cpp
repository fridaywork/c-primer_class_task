/*******
2019��4��19��22:19:34
10.3.1����ϰ
��ϰ10.11  ʹ��stable_sort��isShorter�����ݸ����elimdups�汾vector���򣬴�ӡ��
��ϰ10.13  ��д����������һ��string������һ��boolֵ��ָ��string�Ƿ���5���ֻ�����ַ���ʹ�ôκ�������words����ӡ�����ȵ���5��Ԫ��

*****************/

#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <numeric>
using namespace std;

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

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
//��ϰ10.13
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
	//��ϰ10.11
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