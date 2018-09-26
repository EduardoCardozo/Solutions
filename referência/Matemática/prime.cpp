

typedef long long ll;

bool is_prime(ll num){

  if(num==2)return true;
  if(!(num&1) or num < 2)return false;
  ll sz=sqrt(num)+1;
  for(ll i=3;i<sz;i+=2)
    if(!(num%i))return false;

  return true;
}

bool isPrime(ll n){
  if(n<0)n=-n;
  if(n<5 or !(n&1) or !(n%3))
    return (n==2 or n==3);
  ll sz=sqrt(n)+2;
  for(ll i=5;i<sz;i+=6){
    if(i<n and !(n%i))return false;
    if(i+2<n ans !(n%(i+2)))return false;
  }
  return true;
}
