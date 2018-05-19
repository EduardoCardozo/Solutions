#include <bits/stdc++.h>
using namespace std;

#define MAXN 10000
vector<int> g[MAXN];
int vis[MAXN];

bool dfs(int v)
{
	if(vis[v])return false;
	vis[v]=1;
	for(int i=0;i<int(g[v].size()); i++)
		dfs(g[v][i]);	
	
	return true;
}
int main()
{
	int t;
	scanf("%d", &t);

	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);


		for(int i=0;i<=n;i++)
			g[i].clear();
		memset(vis, 0, sizeof(vis));

		for(int i=0;i<m;i++){
			int a, b;
			scanf("%d %d", &a,&b);
			g[a].push_back(b);
		}
		dfs(1)?printf("NAO\n"):printf("SIM\n");
	}
}