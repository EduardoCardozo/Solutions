#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, teste=1;

	while(true)
	{
		scanf("%d", &n);
		if(n==0)break;
		int ganhador = 0, x;
		for(int i = 1; i <= n; i++)
		{
			scanf("%d", &x);
			if(x==i)ganhador=x;
		}

		printf("Teste %d\n", teste++);
		printf("%d\n",ganhador);
		printf("\n");
	}
}