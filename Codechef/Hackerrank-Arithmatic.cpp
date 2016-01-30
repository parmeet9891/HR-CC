#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float tip,tax;
	double m;
	int t,x;
	cin>>m;
	cin>>t;
	cin>>x;
	tip=(m*t)/100;
	tax=(m*x)/100;
	cout<<"The final price of the meal is $"<<(int)round(m+tip+tax)<<".";
	return 0;
}
