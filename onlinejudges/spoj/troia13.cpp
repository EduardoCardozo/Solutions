#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000
#define REP(i, a, b) \
	for(int i = int(a); i <= int(b); i++)

vector<int> adj[MAXN];

int v[MAXN];

void dfs(int u)
{
	for(auto i: adj[u])
	{
		if(!v[i])
		{
			v[i]=1;
			dfs(i);
		}
	}
}
int main()
{
	int n, m, a, b, componentes = 0;

	memset(v, 0, sizeof(v));

	scanf("%d %d", &n, &m);

	REP(i, 0, m)
	{
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	REP(i, 1, n)
	{
		if(!v[i])
		{
			v[i]=1;
			componentes++;
			dfs(i);
		}
	}
	printf("%d\n", componentes);
}
