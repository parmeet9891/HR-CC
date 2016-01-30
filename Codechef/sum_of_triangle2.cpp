#include<iostream>
using namespace std;
int main()
{
	int t,n,i,a[101][101];
	int b[101][101]={0};
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				cin>>a[i][j];
			}
		}
		for(i=0;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				b[i][j]+=max(a[i+1][j], a[i+1][j+1]);
				cout<<"\n"<<b[i][j];
			}
				
		}
	}
	return 0;
}
