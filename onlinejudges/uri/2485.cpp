#include <bits/stdc++.h>
using namespace std;

#define MAXN 150


int n, a, b, mapa[MAXN][MAXN], resp =0, vis[MAXN][MAXN];

void floodfill(int x, int y)
{
    if(x==0 or y==0 or x>a or y>b)return;
    if(mapa[x][y]==0)return;


    for(int i=1;i<=a;i++)
    {
      for(int j=1;j<=b;j++)
        printf("%d ", vis[i][j]);
      printf("\n");
    }
    printf("\n");
    if(!vis[x][y])
    {

      vis[x][y]=1;
      floodfill(x+1,y);
      floodfill(x-1,y);
      floodfill(x,y+1);
      floodfill(x,y-1);
      floodfill(x+1,y+1);
      floodfill(x+1,y-1);
      floodfill(x-1, y+1);
      floodfill(x-1,y-1);
      resp++;
    }
}
int main()
{
  scanf("%d",&n);

  for(int i=0;i<n;i++)
  {
    scanf("%d %d", &a, &b);

    for(int j=1;j<=a;j++)
      for(int k=1;k<=b;k++)
      {
        scanf("%d", &mapa[j][k]);
      }
    int x, y;
    scanf("%d %d", &x, &y);

    floodfill(x, y);

    printf("%d\n", resp);

  }
}
