#include<iostream>
using namespace std;
int main()
{
	string str,str1;
	cin>>str;
	cin>>str1;
	int len=str.size();
	int len1=str1.size();
	string s = str+str1;
	cout<<len<<" "<<len1<<"\n";
	cout<<s<<"\n";
	s[0]=str[0];
	str[0]=str1[0];
	str1[0]=s[0];
	cout<<str<<" "<<str1;
	return 0;
}
