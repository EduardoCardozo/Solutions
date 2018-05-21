#include <bits/stdc++.h>
using namespace std;

#define MAXN 150
#define st first
#define nd second
typedef pair<int, int> ii;

const int inf = 0x3f3f3f3f;


int g[MAXN][MAXN], dis[MAXN][MAXN], vis[MAXN][MAXN];

int djk(int n)
{
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      dis[i][j]=inf;

  dis[0][0] = 0;
  vis[0][0] = 1;

  set<pair<int,ii> > s;

  s.insert({0, {0, 0}});

  while(!s.empty())
  {
    ii davez = s.begin()->nd;
    s.erase(s.begin());
    vis[davez.st][davez.nd] = 1;
    vector<ii> temp;
    temp.push_back({davez.st-1, davez.nd});
    temp.push_back({davez.st+1, davez.nd});
    temp.push_back({davez.st, davez.nd+1});
    temp.push_back({davez.st, davez.nd-1});

    for(auto x:temp)
    {
      if(x.st < 0 or x.st==n or x.nd<0 or x.nd == n)continue;

      ii v = x;
      int w = g[v.st][v.nd];

      if(!vis[v.st][v.nd] and dis[davez.st][davez.nd]+w < dis[v.st][v.nd])
      {
        s.erase({dis[v.st][v.nd], v});
        dis[v.st][v.nd] = dis[davez.st][davez.nd]+w;
        s.insert({dis[v.st][v.nd], v});
      }
    }
  }
  return dis[n-1][n-1];
}

int main()
{
  int n;
  scanf("%d", &n);

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      scanf("%d", &g[i][j]);


  printf("%d\n", djk(n));
}
