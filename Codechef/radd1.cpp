#include<iostream>
using namespace std;
int rev(int num)
{
	int rem,ans=0;
	while(num)
	{
		rem=num%10;
		ans=(ans*10)+rem;
		num=num/10;
	}
	return ans;
}
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		cout<<"\n"<<rev(rev(n)+rev(m));
	}
	return 0;
}
