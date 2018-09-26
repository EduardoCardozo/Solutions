
typedef unsigned long long ll;

bool isPrime(ll n){
  if(n<0)n=-n;
  if(n<5 or !(n&1) or !(n%3))
    return (n==2 or n==3);
  ll sz=sqrt(n)+2;
  for(ll i=5;i<sz;i+=6){
    if(i<n and !(n%i))return false;
    if(i+2<n and !(n%(i+2)))return false;
  }
  return true;
}
