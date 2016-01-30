#include<iostream>
using namespace std;
int main()
{
	int t,n,sum,rem,ans;
	cin>>t;
	while(t--)
	{	
		cin>>n;
		ans=0;
		while(n!=0)
		{	
			rem=n%10;
			ans=ans+rem;
			n=n/10;
		}
		cout<<"\n"<<ans;
	}

	return 0;
}
