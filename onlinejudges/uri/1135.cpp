#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010


typedef long long ll;
typedef pair<int, ll> pill;
const ll INF = 0x3F3F3F3F3F3F3F3FLL;

vector<pill> adj[MAXN];
vector<ll> distancias[MAXN];
int n;

vector<ll> dj(int x)
{
  vector<ll> dis(n, INF);
  vector<int> vis(n,0);

  dis[x] = 0;
  vis[x] = 1;
  set<pair<ll, int> > s;

  s.insert({0, x});

  while(!s.empty())
  {
    int davez = s.begin()->second;
    s.erase(s.begin());
    vis[davez] = 1;

    for(auto c: adj[davez])
    {
      int v = c.first;
      ll w = c.second;
      if(!vis[v] and dis[davez]+w<dis[v])
      {
        s.erase({dis[v] , v});
        dis[v] = dis[davez]+w;
        s.insert({dis[v], v});
      }
    }
  }
  return dis;
}
int main()
{
  int q;

  while(true)
  {
    scanf("%d", &n);
    if(n==0)break;

    for(int i = 0;i<=n;i++)
    {
      distancias[i].clear();
      adj[i].clear();
    }
    for(int i=1;i<=n-1;i++)
    {
      int a;
      ll b;
      scanf("%d %lld", &a, &b);
      adj[i].push_back({a, b});
      adj[a].push_back({i, b});
    }

    scanf("%d", &q);
    for(int i = 0;i<q;i++)
    {
      int s, t;
      scanf("%d %d", &s, &t);

      if(distancias[s].empty())
          distancias[s] = dj(s);

      printf("%lld ", distancias[s][t]);
    }
    printf("\n");
  }
}
