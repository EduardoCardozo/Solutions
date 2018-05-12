#include <stdio.h>


typedef long long int lli;
#define MAXN 10000
lli memo[MAXN];
lli fat(int n)
{
	if(n <=1)return 1;
	if(n == 2)return 2;

	return memo[n] = fat(n-1) * n;
}
int main()
{
	int n, m;
	while(scanf("%d %d", &n, &m)!= EOF)
		printf("%lld\n", fat(n)+fat(m));
	return 0;
}