#include <bits/stdc++.h>
using namespace std;

#define MAXN 5010
int pd[MAXN][MAXN], coins[MAXN], qtd[MAXN], n;
const int INF=0x3f3f3f3f;

void solve(int val)
{
  pd[0][0]=1;
  for(int i = 0; i<=val;i++)
  {
    for(int j=0; j<6;j++)
    {
      if(i-coins[j]>=0 and qtd[coins[j]]>0)
      {
        if(pd[i][]>0)
          --qtd[coins[i]];
        pd[i][j] += pd[i-1][j-i];
      }
    }
  }
}
int main()
{
  int resp =0;
  scanf("%d", &n);

  coins[1]=2;
  coins[2]=5;
  coins[3]=10;
  coins[4]=20;
  coins[5]=50;
  coins[6]=100;

  scanf("%d %d %d %d %d %d", &qtd[2],&qtd[5],&qtd[10],&qtd[20],&qtd[50],&qtd[100]);

  solve(n);

  for(int i=0;i<6;i++)
  {
    for(int j=0;j<=n;j++)
      printf("%d ", pd[i][j]);
    printf("\n");
  }
  printf("%d %d %d %d %d %d\n", qtd[2],qtd[5],qtd[10],qtd[20],qtd[50],qtd[100]);
  printf("%d\n", pd[5][n]);
}
