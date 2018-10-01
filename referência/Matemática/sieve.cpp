
// Linear Sieve
using ll=long long;
bitset<10000010> bs;
vector<ll> primes;

void sieve(ll n)
{
  bs.reset();bs.flip();
  bs.set(0, false);bs.set(1, false);

  for(ll i=2;i<=n;i++)
  {
    if(bs.test((int)i))primes.push_back(i);

    for(int j=0;j<primes.size() and i*primes[j] <= n;j++)
    {
      bs.set((int)(i*primes[j]), false);
      if(i%primes[j]==0)break;
    }
  }
}
