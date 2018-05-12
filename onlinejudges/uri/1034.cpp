#include <bits/stdc++.h>
using namespace std;

#define MAXM 1000001
#define MAXN 30

const int INF = 0x3f3f3f3f;

int memo[MAXM], n, cps[MAXN], m;

int solve(int i, int val)
{
  if(val<0 or i==n)return INF;
  if(val==0)return 0;

  if(memo[val]!=-1)return memo[val];

  return memo[val] = min(1+solve(i,val-cps[i]), solve(i+1,val));
}

int main(){
int t;
scanf("%d",&t);
while(t--)
{
  scanf("%d %d", &n, &m);

  memset(memo, -1, sizeof(memo));

  for(int i=0;i<n;i++)
    scanf("%d",&cps[i]);

  sort(cps, cps+n);

  printf("%d\n", solve(0,m));
}
return 0;
}
