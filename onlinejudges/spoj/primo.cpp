#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool ehprimo(ll a)
{
  if(a==2)return true;
  if(a<2)return false;
  if(a%2==0)return false;

  for(ll i=3;i*i<=a;i+=2)
    if(a%i==0)return false;
  return true;
}
int main()
{
  int n;
  scanf("%d", &n);
  ehprimo(n)?printf("sim\n"):printf("nao\n");
}
