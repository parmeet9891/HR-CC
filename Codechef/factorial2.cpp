#include<iostream>
using namespace std;
int factorial(int num)
{
	int fact=1;
	for(int i=num;i>0;i--)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<"\n"<<factorial(n);
	}
	return 0;
}
