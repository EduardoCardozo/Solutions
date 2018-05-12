#include<bits/stdc++.h>
using namespace std;

#define MAXN 1000010
int n;
typedef struct Point
{
  double x, y;

  Point(){}
  Point(double x, double y) : x(x), y(y) {}

  double operator% (const Point &a) const {return (x-a.x)*(x-a.x) + (y-a.y)*(y-a.y);}

}Point;
Point p[MAXN];

struct Aresta
{
  int a, b;
  double dis;
  bool operator<(const Aresta &ar) const{return dis < ar.dis;}
};
Aresta g[MAXN];


vector<int>pai, sz;

void inis(int n){
  pai.resize(n);
  sz.resize(n);
  for(int i=0;i<n;i++)
  {
    pai[i]=i;
    sz[i] = 1;
  }
}
int find(int x){return (pai[x]==x)? x : pai[x]=find(pai[x]);}
void join(int a, int b)
{
  a = find(a);
  b = find(b);

  if(sz[a] > sz[b])swap(a, b);

  pai[a] = b;
  sz[b]+=sz[a];
}
int main()
{
  while(scanf("%d", &n)!=EOF)
  {
    inis(n);
    for(int i=0;i<n;i++)
    {
      double x, y;
      scanf("%lf %lf", &x, &y);
      p[i] = Point(x, y);
    }

    int szg=0;
    for(int i=0; i<n-1;i++)
    {
      for(int j=i+1; j<n;j++)
      {
        g[szg].a = i;
        g[szg].b = j;
        g[szg].dis = p[i]%p[j];
        szg++;
       }
    }
    sort(g, g+szg);

    double resp=0;

    for(int i =0;i<szg;i++)
    {
      int x = g[i].a;
      int y = g[i].b;
      if(find(x) != find(y))
      {
        resp+= sqrt(g[i].dis);
        join(x, y);
      }
    }
    printf("%.2lf\n", resp);
  }
}
