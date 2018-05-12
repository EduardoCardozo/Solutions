#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Point{
  int x, y;
  Point(){}
  Point(int x, int y):x(x), y(y){}

  ll operator% (const Point &o) const {return (x-o.x)*(x-o.x) + (y-o.y)*(y-o.y);}
};

int main()
{
  int n;
  multiset<ll> dist;
  Point origem(0, 0), a;

  scanf("%d", &n);

  int p=0;
  for(int i=0;i<n;i++)
  {
    int x, y;
    scanf("%d %d", &x, &y);
    x+=p;
    y+=p;
    Point a(x, y);

    ll d = a%origem;

    p=0;
    for(multiset<ll>::iterator it = dist.begin(); it!=dist.end();it++)
      if(*it<=d)p++;
    dist.insert(d);

    printf("%d\n", p);
  }
}
