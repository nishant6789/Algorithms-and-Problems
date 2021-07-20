#include<bits/stdc++.h>
using namespace std;
#define ll                           long long
int main()
{
	ll n,W;
	cin>>n>>W;
	ll a[n],val[n];
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>val[i];
	}
	ll dp[n+1][W+1];
	for(i=0;i<=n;i++)
	{
		for(ll j=0;j<=W;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=0;
				continue;
			}
			if(a[i-1]<=j)
			{
				dp[i][j]=max(val[i-1]+dp[i-1][j-a[i-1]],dp[i-1][j]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
}