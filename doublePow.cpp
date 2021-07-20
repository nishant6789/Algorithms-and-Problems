#include<bits/stdc++.h>
using namespace std;
double myPow(double x,int n)
{
	long long exp=n;
	double result=1;
	if(exp<0)
	{
		exp*=-1;
		x=1/x;
	}

	while(exp>0)
	{
		if(exp & 1)
			result*=x;
		x=x*x;
		exp>>=1;
	}
	return result;

}
int main()
{
	double x;
	int n;
	cin>>x>>n;
	double ans=myPow(x,n);
	cout<<ans<<endl;
}