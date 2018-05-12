#include <bits/stdc++.h>
using namespace std;

#define MAXN 1002
int v[MAXN];

int main()
{
  int n, m;

  scanf("%d %d", &n, &m);

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      int x;
      scanf("%d", &x);
      v[j]+=x;
    }
  }
  sort(v, v+m);

  printf("%d\n", v[1]);
}
