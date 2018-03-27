#include <bits/stdc++.h>

using namespace std;
#define MAXN 20010
int main()
{
	int n, m, v[MAXN], t;

	scanf("%d %d", &n, &m);

	while(n != 0 && m != 0)
	{
		memset(v, 0, sizeof(v));
		int resp = 0;
	
	
		for(int i = 0; i < m;i++)
		{
			scanf("%d", &t);
			v[t]++;		
		}

		for(int i = 1; i <= n; i++)
			if(v[i] > 1)resp++;

		printf("%d\n", resp);
		
		scanf("%d %d", &n, &m);
	}
	return 0;
}