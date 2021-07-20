#include<bits/stdc++.h>
using namespace std;
struct Edge
{
	int u,v,weight;
	bool operator<(Edge const& other)
	{
		return weight<other.weight;
	}
};
int main()
{

}