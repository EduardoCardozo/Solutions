#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000
int main()
{
	int n, b, v[MAXN][5], x;


	scanf("%d %d", &n, &b);

	while(n!=0 && b != 0)
	{
		memset(v, -1, sizeof(v));

		for(int i = 0; i < b; i++)
		{
			scanf("%d", &x);
			v[x][0] = v[x][1] = 1;
		}

		if(b == n+1)
			printf("Y\n");
		else
		{
			for(int i = 0; i < n; i++)
			{
				if(v[i][0] == 1)
					for(int j = i+1; j <= n; j++)
						if(v[i][0] == 1 && v[j][0] == 1)
							v[abs(i-j)][1] = 1;
			}

			int k, flag = 1;		
			for(k = 0; k <=n ; k++)
				if(v[k][1] == -1)
					flag = 0;
					
			if(flag == 1)
				printf("Y\n");
			else
				printf("N\n");
		}
		scanf("%d %d", &n, &b);
	}
	
	return 0;
}
