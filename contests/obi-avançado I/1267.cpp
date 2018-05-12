#include <bits/stdc++.h>
#define MAXN 1000
#define MAXD 5000
int main()
{
	int n, d, tab[MAXN][MAXD], v[MAXN];

	scanf("%d %d",&n,&d);

	while(n!=0 && d!=0)
	{
		memset(v, 0, sizeof(v));

		for(int i = 0; i < d;i++)
			for(int j = 0; j < n; j++)
				scanf("%d",&tab[i][j]);
			

		for(int i = 0; i < n;i++)
			for(int j = 0; j < d; j++)
				v[i]+=tab[j][i];
		int k;
		for(k = 0; k < n; k++)
			if(v[k] == d)
			{
				printf("yes\n");
				break;
			}
		if(k == n)printf("no\n");

		scanf("%d %d\n",&n,&d);
	}	
	return 0;
}