#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,i,a[100];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<"\n"<<a[0]+a[1];	
}
return 0;
}
