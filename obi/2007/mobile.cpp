#include <bits/stdc++.h>
using namespace std;

#define MAXN 10002

vector<int> adj[MAXN];
int vis[MAXN];

int dfs(int x)
{
  set<int> s;
  int c = 1;

  for(int i=0;i<(int)adj[x].size();i++)
  {
    if(!vis[adj[x][i]])
    {
      int d = dfs(adj[x][i]);
      if(d==-1)return -1;
      c+=d;
      s.insert(d);
    }
  }
  if((int)s.size()>1)return -1;

  return c;
}

int main()
{
  int n;
  scanf("%d", &n);

  for(int i = 0;i<n;i++)
  {
    int a,b;
    scanf("%d %d", &a, &b);
    adj[b].push_back(a);
  }

  dfs(0)!=-1 ? printf("bem\n"):printf("mal\n");
}
