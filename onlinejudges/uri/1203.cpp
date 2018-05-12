#include <bits/stdc++.h>
using namespace std;

#define MAXN 5000

int pd[MAXN][MAXN], graus[MAXN], r, k;

int solve(int i, int val)
{
  if(i==0 or val < 0)return 1;

  if(val == 0)return pd[i][val]=0;

  if(pd[i][val]!=-1)return pd[i][val];

  return pd[i][val] = min(solve(i-1,val-graus[i]), solve(i-1, val));
}

int main()
{
  while(scanf("%d %d\n", &r,&k) != EOF)
  {
    for(int i = 0;i<=r;i++)
      memset(pd[i], -1, sizeof(pd[i]));

    memset(graus, 0, sizeof(graus));

    for(int i = 0;i<k;i++)
    {
      int a, b;
      scanf("%d %d", &a, &b);
      graus[a]++;
      graus[b]++;
    }

    if(solve(r,k)==0)printf("S\n");
    else printf("N\n");

  }
  return 0;
}
