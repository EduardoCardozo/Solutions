

typedef long long ll;

ll exp(ll b, ll e){
  ll ans=1;
  while(e>0){
    if(e&1)ans*=b;
    e>>=1;
    b*=b;
  }
  return ans;
}
