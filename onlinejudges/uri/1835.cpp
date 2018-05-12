#include <bits/stdc++.h>
using namespace std;

#define MAXN 110

vector<int> adj[MAXN];
int vis[MAXN];

void dfs(int x)
{
  for(int i=0;i<(int)adj[x].size();i++)
  {
    if(!vis[adj[x][i]])
    {
      vis[adj[x][i]] = 1;
      dfs(adj[x][i]);
    }
  }
}

int main()
{
  int n, m, t;

  scanf("%d", &t);

  for(int i=0;i<t;i++)
  {
    int resp =0;

    scanf("%d %d", &n,&m);

    memset(vis,0,sizeof(vis));

    for(int j=0;j<=n;j++)adj[j].clear();

    for(int j=0;j<m;j++)
    {
      int a, b;
      scanf("%d %d", &a, &b);
      adj[a].push_back(b);
      adj[b].push_back(a);
    }

    for(int j=1;j<=n;j++)
    {
      if(!vis[j])
      {
        vis[j]=1;
        resp++;
        dfs(j);
      }
    }

    if(resp==1)printf("Caso #%d: a promessa foi cumprida\n", i+1);
    else printf("Caso #%d: ainda falta(m) %d estrada(s)\n", i+1, resp-1);
  }
}
