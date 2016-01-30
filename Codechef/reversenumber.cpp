#include<iostream>
using namespace std;
int main()
{
	int t,n,rem,ans=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=0;
		while(n!=0)
		{
			rem=n%10;
			ans=ans*10+rem;
			n=n/10;
		}
		cout<<"\n"<<ans;
	}
	return 0;
}
