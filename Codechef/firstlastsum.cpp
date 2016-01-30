#include<iostream>
using namespace std;
int main()
{
	int t,n,l_digit,sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		l_digit=n%10;
		while(n>=10)
		n = n/10;
		sum = l_digit+n;
	cout<<"\n"<<sum;
	}
	
	return 0;
}
