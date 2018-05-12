#include <bits/stdc++.h>
using namespace std;

#define MAXN 120

int vis[MAXN][MAXN], n, m;
char mapa[MAXN][MAXN];


int main()
{
  scanf("%d %d", &m, &n);

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
      scanf("\n%c", &mapa[i][j]);

  }

  int x = 0, y = 0, flag = 1;
  while(flag==1)
  {
    if(mapa[x][y]=='*')break;
    if(mapa[x][y]=='>')
    {
      if(y+1==m)
      {
        flag =0;
        break;
      }
      while(mapa[x][++y]=='.')
      {
        if(!vis[x][y])vis[x][y]=1;
        else
        {
          flag=0;
          break;
        }
      }
    }
    if(mapa[x][y]=='<')
    {
      if(y-1<0)
      {
        flag = 0;
        break;
      }
      while(mapa[x][--y]=='.')
      {
        if(!vis[x][y])vis[x][y]=1;
        else
        {
          flag=0;
          break;
        }
      }
    }
    if(mapa[x][y]=='v')
    {
      if(x+1 == n)
      {
        flag = 0;
        break;
      }
      while(mapa[++x][y]=='.')
      {
        if(!vis[x][y])vis[x][y]=1;
        else
        {
          flag=0;
          break;
        }
      }
    }
    if(mapa[x][y]=='^')
    {

      if(x-1 < 0)
      {
        flag = 0;
        break;
      }
      while(mapa[--x][y]=='.')
      {
        if(!vis[x][y])vis[x][y]=1;
        else
        {
          flag=0;
          break;
        }
      }
    }


  }
  flag ? printf("*\n"):printf("!\n");
}
