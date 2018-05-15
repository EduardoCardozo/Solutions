#include <bits/stdc++.h>
using namespace std;

#define MAXN 150
char mapa[MAXN][MAXN];
int vis[MAXN][MAXN];
int main()
{
  int l,c,x, y;

  scanf("%d %d", &l, &c);

  for(int i=1;i<=l;i++)
    for(int j=1;j<=c;j++)
    {
      scanf(" %c",&mapa[i][j]);
      if(mapa[i][j]=='o')x=i,y=j;
    }
  while(true){
    if(mapa[x+1][y]=='H')mapa[x++][y]='x';
    else if(mapa[x-1][y]=='H')mapa[x--][y]='x';
    else if(mapa[x][y+1]=='H')mapa[x][y++]='x';
    else if(mapa[x][y-1]=='H')mapa[x][y--]='x';
    else break;
  }
  printf("%d %d\n", x, y);
}
