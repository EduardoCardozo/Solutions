#include <bits/stdc++.h>
using namespace std;

#define MAXN 50
int pd[MAXN][MAXN], tp[MAXN], qtp[MAXN], n,p;

int knapsack(int i, int val)
{
  if(pd[i][val]>=0)return pd[i][val];
  if(i==n or val==0)return pd[i][val]=0;

  int nc=knapsack(i+1, val);

  if(qtp[i]<=val)
    return pd[i][val]=max(nc,tp[i]+knapsack(i+1,val-qtp[i]));

  return pd[i][val]=nc;
}
int main()
{
  while(true)
  {
    scanf("%d %d", &n, &p);
    if(n==0)break;

    for(int i=0;i<n+4;i++)
      for(int j=0;j<p+4;j++)
        pd[i][j]=-1;

    for(int i=0; i<n;i++)
      scanf("%d %d", &tp[i], &qtp[i]);

    printf("%d min.\n", knapsack(0,p));
  }
  return 0;
}
