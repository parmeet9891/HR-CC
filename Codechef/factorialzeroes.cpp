#include<iostream>
using namespace std;
int factorial(int num)
{	int count=0;
	for(int i=5; num/i>=1; i*=5)
	{
		count+=num/i;
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<"\n"<<factorial(n);
	}
	return 0;
}
