#include <bits/stdc++.h>
using namespace std;


#define MAXN 100000

vector<int> adj[MAXN];
int vis[MAXN], resp = INF;
int dfs(int v, int pa)
{
	int peso = 1;
	for(int i=0;i<adj[v].size();i++)
	{
		if(!vis[adj[v][i]])
		{
			vis[adj[v][i]] = 1;

			resp = min(abs(n-2*peso), resp);
		}
	}
	return peso;
}


int main()
{
	scanf("%d", &n);

	for(int i = 0;i<n;i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(1);
	printf("%d",resp);
}
