#include <bits/stdc++.h>
#define MAXT 1000
int main()
{
	int n, t, tiros[MAXT];
	char pulos[MAXT];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int atingido = 0;
		scanf("%d", &t);
		for(int j = 0; j < t; j++)
			scanf("%d", &tiros[j]);

		
		for(int j = 0; j < t; j++)
			scanf("\n%c", &pulos[j]);
	
		for(int j = 0; j < t; j++)
		{
			if(tiros[j] <= 2 && pulos[j] == 'S')
				atingido++;
			if(tiros[j] > 2 && pulos[j] == 'J')
				atingido++;
		}

		printf("%d\n", atingido);
		
	}
	return 0;
}