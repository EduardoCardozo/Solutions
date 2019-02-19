#include <bits/stdc++.h>
using namespace std;

const int inf=0x3f3f3f3f;
const int N=1e6+10;

bool solve(){
  int n, hp;
  if(scanf("%d%d", &n, &hp)==EOF)return false;

  vector<int> dano(n), mana(n);
  int maxdano=0;
  for(int i=0;i<n;i++){
    scanf("%d%d", &dano[i], &mana[i]);
    maxdano+=dano[i];
  }

  vector<int> dp(maxdano+1, inf);

  dp[0]=0;
  for(int i=0;i<n;i++){
    for(int j=maxdano;j>=dano[i];j--)
      dp[j]=min(dp[j], mana[i]+dp[j-dano[i]]);
  }

  int ans=inf;
  for(int i=hp;i<=maxdano;i++)
    if(dp[i]!=inf){ans=dp[i];break;}

  if(ans==inf)puts("-1");
  else printf("%d\n", ans);

  return true;
}
int main(){
  while(solve());
}
