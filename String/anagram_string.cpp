
#include <bits/stdc++.h>
using namespace std;


void checkAnagram(string str1, string str2)
{

	int n1 = str1.length();
	int n2 = str2.length();


	if (n1 != n2)
		cout<<"NOT ANAGRAM"<<endl;


	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());


	for (int i = 0; i < n1; i++)
		if (str1[i] != str2[i])
			cout<<"NOT ANAGRAM"<<endl;

	cout<<"ANAGRAM"<<endl;
}


int main()
{
	string str1 = "gggg";
	string str2 = "gggg";


	checkAnagram(str1, str2);


	return 0;
}
