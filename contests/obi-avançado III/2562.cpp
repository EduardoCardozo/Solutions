#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i= int(a); i <= int(b); i++)

#define MAXN 100000
vector<int> adj[MAXN];
int v[MAXN];
int qtd;
void dfs(int u)
{
	for(auto i : adj[u])
	{
		if(!v[i])
		{
			v[i]=1;
			qtd++;
			dfs(i);
		}
	}
}
int main()
{
	int n, m, a, b, e;

	while(scanf("%d %d", &n, &m) != EOF)
	{
		memset(v, 0, sizeof(v));

		REP(i, 0, 1001)
			adj[i].clear();

		qtd = 1;

		REP(i, 0, m-1)
		{
			scanf("%d %d", &a, &b);
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		scanf("%d", &e);
		v[e] = 1; qtd =1;
		dfs(e);
		printf("%d\n", qtd);
	}


	return 0;
}