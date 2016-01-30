#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
	int t;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
		
	return a;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int g,res;
	g= gcd(a,b);
	res=gcd(g,c);
	cout<<"\n"<<g+res;
	return 0;
}
