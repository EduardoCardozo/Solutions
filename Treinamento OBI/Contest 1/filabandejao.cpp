#include <bits/stdc++.h>
using namespace std;

bool solve(){
  int n,k;
  if(scanf("%d%d", &n, &k)==EOF)return false;

  vector<int> v(n,0);
  for(int i=1;i<n;i++)
    scanf("%d", &v[i]);

  vector<int> difs(n,0);
  for(int i=1;i<n;i++)
    difs[i]=v[i]-v[i-1];

  sort(difs.begin(), difs.end());

  int ans=0;
  for(int i=0;i<=n-k;i++)
    ans+=difs[i];

  printf("%d\n", ans);
  return true;
}

int main(){
  while(solve());
}
