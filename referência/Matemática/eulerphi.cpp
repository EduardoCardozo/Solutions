
//Usar crivo antes para vector de primos
//Quantidade de numeros menores que N e que gcd(i, N)=1

typedef long long ll;

ll EulerPhi(ll n){
  ll pfid=0, pf=primes[0], ans=n;
  while(pf*pf<=n){
    ll power=0;
    if(!(n%pf))ans-=ans/pf;
    while(!(n%pf))n/=pf;
    pf=primes[++pfid];
  }
  if(n!=-1)ans-=ans/n;
  return ans;
}
