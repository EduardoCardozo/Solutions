#include <bits/stdc++.h>
using namespace std;

#define MAXN 510
const int INF = 0x3f3f3f3f;

vector<int> adj[MAXN];
int idades[MAXN], n, midade=INF, vis[MAXN];

void dfs(int x)
{
  for(int i = 0; i <(int)adj[x].size();i++)
  {
		if(!vis[adj[x][i]])
    {
      vis[adj[x][i]] = 1;
      if(idades[adj[x][i]]<midade)midade=idades[adj[x][i]];
      dfs(adj[x][i]);
    }
  }
}
void update(int x, int y)
{
  swap(adj[x], adj[y]);

  for(int i=1;i<=n;i++)
    for(int j=0;j<(int)adj[i].size();j++)
      if(adj[i][j]==x)adj[i][j]=y;
      else if(adj[i][j]==y)adj[i][j]=x;

}
int main()
{
  int m, k;
  scanf("%d %d %d", &n, &m, &k);

  for(int i = 1; i<=n;i++)
    scanf("%d", &idades[i]);

  for(int i =0;i < m;i++)
  {
    int a, b;
    scanf("%d %d\n", &a, &b);
    adj[b].push_back(a);
  }
  for(int i = 0; i < k;i++)
  {
    char op;
    scanf("\n%c", &op);
    if(op=='P')
    {
      int x;
      scanf("%d", &x);
      memset(vis,0,sizeof(vis));
      midade = INF;
      dfs(x);

      midade==INF ? printf("*\n") : printf("%d\n", midade);
    }
    else
    {
      int x, y;
      scanf("%d %d", &x,&y);
      update(x, y);
    }
  }
  return 0;
}
