#include <bits/stdc++.h>
using namespace std;

#define MAXM 150000
vector<int> p, sz;

void ini(int n)
{
  p.resize(n+1);
  sz.resize(n+1);
  for(int i=0;i<=n;i++)
  {
    p[i]=i;
    sz[i]=1;
  }
}
int find(int x){return p[x]==x?x:p[x]=find(p[x]);}

void join(int a, int b)
{
  a  = find(a);
  b = find(b);

  if(sz[a]>sz[b])swap(a,b);
  p[a]=b;
  sz[b]+=sz[a];
}

struct Aresta
{
  int x, y, w;
  bool operator< (Aresta &o) const {return w<o.w;}
};

Aresta ars[MAXM];

int main()
{
  int n, m;

  scanf("%d %d", &n, &m);

  ini(n);
  for(int i=0;i<m;i++)
    scanf("%d %d %d", &ars[i].x, &ars[i].y,&ars[i].w);

  sort(ars, ars+m);

  int resp = 0;
  for(int i=0;i<m;i++)
  {
    int a = ars[i].x;
    int b = ars[i].y;

    if(find(a)!=find(b))
    {
      join(a, b);
      resp+=ars[i].w;
    }
  }

  printf("%d\n", resp);
}
