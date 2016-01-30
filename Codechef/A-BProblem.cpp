#include<iostream>
using namespace std;
int main()
{
	int a,b,res;
	cin>>a>>b;
	res=a-b;
	if(res%10==9)
		cout<<res-1;
	else
		cout<<res+1;
	return 0;
}
