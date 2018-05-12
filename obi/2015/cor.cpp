#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010

int m[MAXN][MAXN], n, vis[MAXN][MAXN];


void colore(int i, int j, int d)
{
  if(i < 1 or j>n or i>n or j<1)
    return;

  if(i==3 and j==1)
    printf("(%d, %d) valor atual:%d  condidato: %d\n", i,j,m[i][j], d);

  vis[i][j]=1;

  if(m[i][j]>0)
  {
    m[i][j] = min(m[i][j], d);

    colore(i+1, j, m[i][j]+1);
    colore(i-1, j, m[i][j]+1);
    colore(i, j-1, m[i][j]+1);
    colore(i, j+1, m[i][j]+1);
  }
  else if(m[i][j]==-1)m[i][j]=d;
  else d=1;

  if(d<9 and m[i][j] != 0)d++;

  colore(i+1, j, d);
  colore(i-1, j, d);
  colore(i, j-1, d);
  colore(i, j+1, d);
}
int main()
{
  scanf("%d\n",&n);
  vector< pair<int, int> > zeros;

  for(int i=0;i<=n;i++)
    memset(m[i], -1, sizeof(m[i]));

  for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
      char c;
      scanf("%c\n", &c);
      if(c=='0')
      {
        zeros.push_back({i, j});
        m[i][j]=0;
      }
    }


  for(auto x:zeros)
  {
    for(int i=0;i<=n;i++)
      memset(vis[i], 0, sizeof(vis[i]));

    colore(x.first, x.second, 0);
  }

  printf("\n");
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}
