#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010

#define REP(i, a, b) for(int i=int(a);i<=int(b);i++)
#define REPI(i, a, b) for(int i=int(a);i>=int(b);i--)

int n, nums[MAXN];

int buscaB()
{
	int soma1, soma2, lo=1, hi=n, mid;

	while(lo<=hi)
	{
		mid=(lo+hi)/2;
		soma1 = soma2=0;

		for(int i = 1;i<=mid;i++)soma1+=nums[i];
		for(int i = mid+1;i<=n;i++)soma2+=nums[i];

		if(soma1==soma2)return mid;
		else if(soma1>soma2)hi=mid-1;
		else lo=mid+1;
	}
	return mid;
}



int main()
{
	scanf("%d", &n);

	for(int i=1;i<=n;i++)
		scanf("%d", &nums[i]);

	printf("%d\n", buscaB());
	return 0;
}
