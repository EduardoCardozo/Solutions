#include <bits/stdc++.h>
using namespace std;

#define MAXN 1020

int v[MAXN];

int main()
{
  int n, m, resp=0;
  scanf("%d %d", &n, &m);

  for(int i=0;i<n;i++)
    scanf("%d", &v[i]);
    
  for(int i=0;i<n-1;i++)
  {
    if(v[i]<m)
    {
      resp+=m-v[i];
      v[i+1]+=m-v[i];
    }
    else if(v[i]>m)
    {
      resp+=v[i]-m;
      v[i+1]-= v[i]-m;
    }
  }
  printf("%d\n", resp);
}
