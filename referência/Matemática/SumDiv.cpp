

//Usar crivo antes para vector de primos
//Soma dos divisores de N

using ll=long long;

ll sumdiv(ll n){
  ll pfid=0, pf=primes[0], ans=1;
  while(pf*pf<=n){
    ll power=0;
    while(!(n%pf)){n/=pf;power++;}
    ans*=((ll)pow((double)pf, power+1.0)-1)/(pf-1);
    pf=primes[++pfid];
  }
  if(n!=-1)ans*=((ll)pow((double)n, 2.0)-1)/(n-1);
  return ans;
}
