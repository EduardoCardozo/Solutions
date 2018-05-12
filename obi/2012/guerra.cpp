#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define REP(i, a, b) for(int i=int(a);i<=int(b);i++)

#define REPI(i, a, b) for(int i=int(a);i>=int(b);i--)

int main()
{
	int n, soma1 = 0, soma2 = 0, nums[MAXN];

	scanf("%d", &n);

	REP(i, 1, n)
		scanf("%d", &nums[i]);
	
	REPI(j, 1, 1)soma1+=nums[j];
	REP(j, 2, n)soma2+=nums[j];

	if(soma1!=soma2)
		REP(i, 2, n)
		{
			soma1+=nums[i];
			soma2-=nums[i];

			if(soma1==soma2)
			{
				printf("%d\n", i);
				break;
			}
		}
	else
		printf("1\n");
	return 0;
}