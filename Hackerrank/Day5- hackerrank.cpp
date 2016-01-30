#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,a,b,n,sum;
	cin>>t;
	while(t--)
	{
			cin>>a>>b>>n;
			sum=a;
			for(int i=0;i<n;i++)
			{ 
				sum+=pow(2,i)*b;
				cout<<sum<<" ";	
			}
			cout<<"\n";
	}
	return 0;
}
