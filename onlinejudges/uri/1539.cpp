#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010
const double INF = 99999999.0;

typedef pair<double, int> di;
typedef vector<double> vd;

double grafo[MAXN][MAXN], distancias[MAXN][MAXN];

void ini(int n)
{
  for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
      grafo[i][j] = INF;
}

struct Point{
  double x, y, z;

  Point(){}
  Point(double x,double y, double z):x(x), y(y), z(z){}

  double operator% (const Point &o) const {return sqrt((x-o.x)*(x-o.x) + (y-o.y)*(y-o.y));}
};

int cmp(double a, double b, double eps=1e-9)
{
  if(a+eps < b)return -1;
  if(b+eps < a)return 1;
  return 0;
}

int main()
{
  int n, c;

  while(true)
  {
    Point p[MAXN];
    scanf("%d", &n);
    if(n==0)break;

    ini(n);

    for(int i=1;i<=n;i++)
    {
      double x, y, r;
      scanf("%lf %lf %lf", &x, &y, &r);
      Point a(x, y, r);
      p[i] = a;
    }

    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        double dis = p[i]%p[j];

        if(cmp(dis, 0.0)==1 and cmp(dis, p[i].z) != 1)
          grafo[i][j] = dis;
      }
    }

    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        distancias[i][j] = grafo[i][j];

    for(int k=1;k<=n;k++)
      for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
          distancias[i][j] = min(distancias[i][j], distancias[i][k]+distancias[k][j]);

    for(int i =1;i<=n;i++)
      distancias[i][i] = 0.0;

    scanf("%d", &c);

    for(int i=0;i<c;i++)
    {
      int a, b;
      scanf("%d %d", &a, &b);

      cmp(distancias[a][b], INF)==0?printf("-1\n"):printf("%.lf\n", trunc(distancias[a][b]));
    }
  }
}
