#include<iostream>
using namespace std;
int main()
{
	int t,rem,a[1000],b[1000];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a[i]>>b[i];
		rem=a[i]%b[i];
		cout<<"\n"<<rem;
	}
	
	return 0;
}
