#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;
#define MAXN 10010
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;

vii g[MAXN];

int dijkstra(int n,int u, int d){

  vi dis(n+1, inf), vis(n+1, 0);
  dis[u]=0;
  vis[u]=1;
  set<pii> s;

  s.insert({0, u});

  while(!s.empty()){
    int davez=s.begin()->second;
    s.erase(s.begin());
    vis[davez]=1;

    for(auto x:g[davez]){
      int v=x.first;
      int w=x.second;
      if(!vis[v] and dis[davez]+w<dis[v]){
        s.erase({dis[v], v});
        dis[v] = dis[davez]+w;
        s.insert({dis[v], v});
      }
    }
  }
  return dis[d];
}

int main()
{
  int n;
  scanf("%d", &n);

  while(n--){
    int v, k;
    scanf("%d %d", &v, &k);

    for(int i=0;i<=v;i++)
      g[i].clear();

    for(int i=0;i<k;i++)
    {
      int a, b, c;
      scanf("%d %d %d", &a, &b, &c);
      g[a].push_back({b, c});
    }
    int a, b;
    scanf("%d %d", &a, &b);
    int resp = dijkstra(v, a, b);
    resp==inf? printf("NO\n"):printf("%d\n", resp);
  }
}
