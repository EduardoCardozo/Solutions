
//Usar crivo antes para vector de primos
//Quantidade de divisores de N
typedef long long ll;

ll numdiv(ll n){
  ll pfid=0, pf=primes[0], ans=1;
  while(pf*pf<=n){
    ll power=0;
    while(!(n%pf)){n/=pf;power++;}
    ans*=(power+1);
    pf=primes[++pfid];
  }
  if(n!=-1)ans*=2;
  return ans;
}
