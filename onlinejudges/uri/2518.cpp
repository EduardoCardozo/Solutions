#include <bits/stdc++.h>
using namespace std;

int main()
{
  double h, c, l;
  int n;

  while(scanf("%d", &n)!=EOF){
    scanf("%lf %lf %lf", &h, &c, &l);
    printf("%.4lf\n", sqrt(c*c+h*h) * n * l / 10000);
  }

}
