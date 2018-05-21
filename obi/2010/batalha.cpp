#include <bits/stdc++.h>
using namespace std;

#define MAXN 200

int tab[MAXN][MAXN], vis[MAXN][MAXN], n, m;
bool flag;


void ff(int i, int j)
{
  if(!tab[i][j] or !i or !j or i>n or j>m)return;

  if(tab[i][j]==1)
  {
    flag=false;
    return;
  }
  if(!vis[i][j] and tab[i][j]==2)
  {
    vis[i][j]=1;
    ff(i+1, j);
    ff(i-1, j);
    ff(i, j+1);
    ff(i, j-1);
  }
}

int main()
{
    int k, resp=0;

    scanf("%d %d", &n, &m);

    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++){
        char a;
        scanf(" %c", &a);
        if(a=='#')tab[i][j]=1;
      }

    scanf("%d", &k);
    while(k--){
      int a,b;
      scanf("%d %d", &a, &b);
      if(tab[a][b])tab[a][b]++;
    }

    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++)
      {
        if(!vis[i][j] and tab[i][j]==2)
        {
          flag=true;
          ff(i, j);
          if(flag)resp++;
        }
      }
    printf("%d\n", resp);
}
