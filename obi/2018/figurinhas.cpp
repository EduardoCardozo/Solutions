#include <bits/stdc++.h>
using namespace std;

#define MAXN 10000
int album[MAXN];

int main()
{
  int n, c, m;

  scanf("%d %d %d", &n, &c, &m);

  for(int i=0;i<c;i++)
  {
    int a;
    scanf("%d", &a);
    album[a]=1;
  }
  for(int i=0;i<m;i++)
  {
    int a;
    scanf("%d", &a);
    if(album[a]==1)
    {
      album[a]=0;
      c--;
    }
  }
  printf("%d\n", c);
}
