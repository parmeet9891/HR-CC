#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[100001],t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<3;i++)
		cin>>a[i];
		sort(a,a+3);
		cout<<"\n"<<a[1];
	
	}
	return 0;
}
