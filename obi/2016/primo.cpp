#include <bits/stdc++.h>
using namespace std;

#define MAXN 50;

int v[MAXN], pd[MAXN][MAXN], n;

int solve(int i, int j, int f);
{

  if(j==m-1)return pd[i][j] = n/f*v[i];
  if(pd[i][j]!=-1)return pd[i][j];

  pd[i][j] = n/f*v[i] - solve(i, j+1, f*v[i]);
}

int main()
{
  int k;

  for(int i=0;i<k;i++)
    scanf("%d", &v[i]);

  for(int )
}
