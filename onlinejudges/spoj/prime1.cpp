#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
	int n, a, b;

	scanf("%d", &n);
  while(n--)
  {
    scanf("%d %d", &a, &b);

    for(ll j=0;j<=primes.size();j++)
      if(primes[j]>=a and primes[j]<=b)
        printf("%d\n", primes[j]);
  }
}
