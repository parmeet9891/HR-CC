#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
for(i=0;i<n;i++)
{
	for(int j=0;j<=i;j++)
	{
		if(a[i]<a[j])
		{
			int temp;
			temp=a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	
}
	for(i=0;i<n;i++)
	cout<<"\t"<<a[i];
	return 0;
}
