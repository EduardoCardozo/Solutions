#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool ehPrimo(ll num)
{
	if(num==2) return true;
	if(num < 2)return false;

	if(num%2==0)return false;
	
	for(int i = 3; i*i < num; i+=2)
		if(num%i==0)return false;
	
	return true;
}
int main(){
	int n;
	ll a;

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%lld", &a);
		ehPrimo(n)?printf("Prime\n"):printf("Not Prime\n");
	}
}