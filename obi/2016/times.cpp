#include <bits/stdc++.h>
using namespace std;

#define MAXN 100002
vector<int> adj[MAXN];
set<int> t1, t2;
int n, vis[MAXN];

void dfs(int v, int p)
{
  for(int i =0; i<(int)adj[v].size();i++)
  {
    if(!vis[adj[v][i]])
    {
      vis[adj[v][i]] = 1;
      if(p == 1)
      {
        t1.insert(adj[v][i]);
        dfs(adj[v][i], 2);
      }
      else
      {
        t2.insert(adj[v][i]);
        dfs(adj[v][i], 1);
      }
    }
  }
}

int main()
{
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    int x, a;
    scanf("%d", &x);

    for(int j=0;j<x;j++)
    {
      scanf("%d", &a);
      adj[i].push_back(a);
    }
  }

  dfs(1, 2);
  t1.insert(1);

  for(auto x:t1)printf("%d ", x);
  printf("\n");
  for(auto x:t2)printf("%d ", x);
  printf("\n");
}
