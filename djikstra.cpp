#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[100005];
long long dis[100005],par[100005];
void djikstra(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		dis[i]=100000000000000;
	}
	set<pair<int,int>>st;
	dis[1]=0;
	par[1]=-1;
	st.insert({0,1});
	while(!st.empty())
	{
		int v=st.begin()->second;
		st.erase(st.begin());

		for(auto child:adj[v])
		{
			int to=child.first;
			int len=child.second;
			if(dis[to]>dis[v]+len)
			{
				st.erase({dis[to],to});
				dis[to]=dis[v]+len;
				st.insert({dis[to],to});
				par[to]=v;
			}
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	int i;
	for(i=0;i<m;i++)
	{
		int x,y,c;
		cin>>x>>y>>c;
		adj[x].push_back({y,c});
		adj[y].push_back({x,c});
	}
	djikstra(n);
	for(i=1;i<=n;i++)
	{
		cout<<dis[i]<<endl;//shortest distance from node 1
	}
	vector<int>path;
	for(int v=n;v!=1;v=par[v])
	{
		path.push_back(v);
	}
	path.push_back(1);
	reverse(path.begin(),path.end());
	for(int i:path)
	{
		cout<<i<<endl;//path of the shortest path from 1 to n
	}
	// shortest path from node 1 is to be found out
}