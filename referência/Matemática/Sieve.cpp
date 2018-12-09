
typedef long long ll;

bitset<10000000> bs;
vector<ll> primes;
void crivo(int ub){
  bs.set();bs[0]=bs[1]=0;
  for(ll i=0;i<=ub;i++)if(bs[i]){
    primes.push_back(i);
    for(ll j=i*i;j<=ub;j+=i)bs[j]=0;
  }
}
