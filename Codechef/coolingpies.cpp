#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		int count=0;
		for(int i=0,j=0;i<n;i++)
		{		if(b[i]>=a[j])
			{
				count++;
				j++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
