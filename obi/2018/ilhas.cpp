#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010

int g[MAXN][MAXN], dis[MAXN], vis[MAXN], n;

const int inf = 0x3f3f3f3f;

int dijkstra(int u)
{
  for(int i=1;i<=n;i++)dis[i]=g[u][i];

  dis[u]=0;
  vis[u]=1;

  while(true)
  {
    int davez = -1;
    int menordist = inf;

    for(int i=1;i<=n;i++)
    {
      if(!vis[i] and dis[i] < menordist)
      {
        davez = i;
        menordist = dis[i];
      }
    }
    if(davez==-1)break;
    vis[davez]=1;

    for(int i=1;i<=n;i++)
      dis[i] = min(dis[i], dis[davez]+g[davez][i]);
  }

  int mn=inf, mx=0;
  for(int i=1;i<=n;i++)
    if(i!=u)
    {
      mn = min(mn, dis[i]);
      mx = max(mx, dis[i]);
    }
  return mx-mn;
}
int main()
{
  int m, source;
  scanf("%d %d", &n, &m);

  for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        g[i][j] = inf;

  for(int i=0;i<m;i++)
  {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    g[a][b]=g[b][a]=c;
  }
  scanf("%d", &source);
  printf("%d\n", dijkstra(source));
}
