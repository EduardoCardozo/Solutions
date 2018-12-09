typedef long long ll;

bool isPrime(ll n){
    if(n<0)n=-n;
    if(n<5 or !(n&1) or !(n%3))
      return (n==2 or n==3);

    ll maxp=sqrt(n)+2;
    for(ll p=5;p<maxp;p+=6){
      if(p<n and n%p==0)return 0;
      if(p+2<n and n%(p+2)==0)return 0;
    }
    return 1;
}
