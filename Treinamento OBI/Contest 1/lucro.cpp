#include<bits/stdc++.h>
using namespace std;

bool solve(){
  int n;
  if(scanf("%d", &n)==EOF)return false;

  vector<int> v(n+1);

  int cpd;scanf("%d", &cpd);

  for(int i=1;i<=n;i++)scanf("%d",&v[i]);

  int ans=0;
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
      int sum=0, qtd=0;
      for(int k=i;k<=j;k++){sum+=v[k];qtd++;}
      ans=max(ans, sum-qtd*cpd);
    }
  }
  printf("%d\n", ans);
  return true;
}
int main(){
  while(solve());
}
