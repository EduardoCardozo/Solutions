#include <bits/stdc++.h>
using namespace std;

#define MAXN 150
const int inf=0x3f3f3f3f;
int g[MAXN][MAXN], d[MAXN][MAXN];

int main()
{
  int n, test = 1;

  while(true){
    scanf("%d", &n);
    if(!n)break;

    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        g[i][j] = inf;


    for(int i=0;i<n-1;i++)
    {
      int a, b;
      scanf("%d %d", &a, &b);
      g[a][b] = 1;
      g[b][a]= 1;
    }

    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
          d[i][j]=g[i][j];


    for(int k=1;k<=n;k++)
      for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
          d[i][j] = min(d[i][j], d[i][k]+d[k][j]);

    set<pair<int, int>> s;

    for(int i=1;i<=n;i++)
    {
      int maior=0, j=1;
      for(;j<=n;j++)
        maior = max(maior, d[i][j]);
      s.insert({maior, i});
    }
    printf("Teste %d\n", test++);
    printf("%d\n\n", s.begin()->second);

  }
}
