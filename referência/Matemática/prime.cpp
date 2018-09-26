

typedef long long ll;

bool is_prime(ll num){

  if(num==2)return true;
  if(!(num&1) or num < 2)return false;

  for(ll i=3;i*i<=num;i+=2)
    if(!(num%i))return false;

  return true;
}
