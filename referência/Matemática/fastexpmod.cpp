


using ll=long long;

ll exp(ll b, ll e, ll mod){
  ll ans=1;
  b%=mod;
  while(e>0){
    if(e&1)ans=(ans*b)%mod;
    e>>=1;
    b=(b*b)%mod;
  }
  return ans;
}
