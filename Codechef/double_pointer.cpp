#include<iostream>
using namespace std;
int main()
{
	int a[100],sum=0,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum = sum+a[i];
		}
		cout<<"\n"<<sum;
	}
	return 0;
	
}
