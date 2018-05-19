#include <bits/stdc++.h>
using namespace std;

#define MAXN 10000

struct Point{
  double x, y;
  Point(){}
  Point(int x, int y):x(x),y(y){}
};

double cmp_double(double a, double b, double eps=1e-9){
  if(a+eps<b)return -1;
  if(b+eps<a)return 1;
  return 0;
}

double checa(Point p, Point q){
  double a = (q.y-p.y)/(q.x-p.x);
  return q.y-(a*q.x);
}

int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    double epx, epy;
    int p;

    vector<pair<double, double> > paredes;
    scanf("%lf %lf", &epx, &epy);

    Point epc= Point(epx,epy);

    scanf("%d", &p);

    for(int i=0;i<p;i++)
    {
      double y1, y2;
      scanf("%lf %lf", &y1, &y2);
      paredes.push_back({y1,y2});
    }

    sort(paredes.begin(), paredes.end());

    int g, resp=0;
    scanf("%d", &g);

    for(int i=0;i<g;i++)
    {
      double x, y;
      scanf("%lf %lf", &x, &y);

      double r = checa(epc, Point(x, y));

      int lo=0,hi=p-1;

      while(lo<=hi)
      {
        int mid=(lo+hi)/2;
        double a = paredes[mid].first;
        double b = paredes[mid].second;

        if(cmp_double(r, a)==1 and cmp_double(r,b)==-1)
        {
          resp++;
          break;
        }
        if(cmp_double(r, a)==-1)hi = mid-1;
        else lo = mid+1;
      }
    }
    printf("%d\n", resp);
  }
}
