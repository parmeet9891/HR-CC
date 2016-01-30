#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int t,a,b,s[10001],c,x=0,y=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;
		x=x+a;
		y=y+b;
		s[i]=x-y;		
	}
	c=0;
	a=s[0];
	for(int i=1;i<=t;i++)
	{
		if(a<abs(s[i]))
		{
			a=abs(s[i]);
			c=i;
		}	    
	}
	if(a==s[c])
	cout<<"1 "<<a;
	else
	cout<<"2 "<<a;
	return 0;	
}
