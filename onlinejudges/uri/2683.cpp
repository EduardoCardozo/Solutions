#include <bits/stdc++.h>
using namespace std;

#define MAXN 10000001
vector<int> pai, sz;

void inis()
{
  pai.resize(1003);
  sz.resize(1003);

  for(int i=0;i<1003;i++)
  {
    pai[i] = i;
    sz[i]=1;
  }
}

int find(int x){return (pai[x]==x) ? (x) : pai[x]=find(pai[x]);}

void join(int a, int b)
{
  a = find(a);
  b = find(b);

  if(sz[a] > sz[b])swap(a, b);

  pai[a] = b;
  sz[b]+=sz[a];
}

struct Aresta{
  int x, y, w;
};
Aresta g[MAXN];

bool cmp(Aresta a, Aresta b){return a.w < b.w;}

int main()
{
  int n;
  scanf("%d", &n);

  for(int i=0;i<n;i++)
  {
    scanf("%d %d %d", &g[i].x, &g[i].y, &g[i].w);
  }

  inis();
  sort(g, g+n, cmp);

  int minc=0;

  for(int i=0;i<n;i++)
  {
    int a = g[i].x;
    int b = g[i].y;

    if(find(a)!=find(b))
    {
      minc+=g[i].w;
      join(a, b);
    }
  }


  inis();
  int maxc = 0;
  for(int i=n-1;i>=0;i--)
  {
    int a = g[i].x;
    int b = g[i].y;

    if(find(a)!=find(b))
    {
      maxc+=g[i].w;
      join(a, b);
    }
  }
  printf("%d\n%d\n", maxc, minc);
}
