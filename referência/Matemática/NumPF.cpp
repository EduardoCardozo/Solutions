
//Usar crivo antes para vector de primos
//Quantidade de Fatores primos de N

using ll=long long;


ll numpf(ll n){
  ll pfid=0, pf=primes[0], ans=0;

  while(pf*pf<=n){
    while(!(n%pf)){n/=pf;ans++;}
    pf=primes[++pfid];
  }
  if(n!=-1)ans++;
  return ans;
}
