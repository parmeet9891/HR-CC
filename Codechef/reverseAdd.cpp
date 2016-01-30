#include<iostream>
using namespace std;
int main()
{
	int t,a,b,rem,ans=0,rem1,ans1=0,rem2,ans2=0,sum;
	cin>>t;
	while(t--)
	{
		cin>>a;
		cin>>b;
		while(a!=0)
		{
		rem = a%10;
		ans = ans*10+rem;
		a = a/10;
		}
		while(b!=0)
		{
		rem1=b%10;
		ans1=ans1*10+rem1;
		b=b/10;
		}
		sum = ans+ans1;
		while(sum!=0)
		{
		rem2 = sum%10;
		ans2 = ans2*10+rem2;
		sum = sum/10;
		}
	cout<<"\n"<<ans2;	
	}
	
	return 0;
}
