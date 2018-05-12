#include <bits/stdc++.h>
using namespace std;

#define MAXN 10010


int main()
{
	int n,v[MAXN], picos = 0;
	
	scanf("%d", &n);

	while(n != 0)
	{
		picos = 0;
		for(int i = 1; i <= n; i++)
			scanf("%d",&v[i]);
		v[0] = v[n];
		v[n+1] = v[1];

		for(int i = 1; i <=n;i++)
		{
			if(v[i-1] > v[i] && v[i+1] > v[i])
				picos++;
			else if(v[i-1] < v[i] && v[i+1] < v[i])
				picos++;
		}
		printf("%d\n", picos);

		scanf("%d", &n);
	}
	return 0;
}