#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAXN 500

int peso[MAXN], valor[MAXN], memo[MAXN][MAXN], n;

int m(int pedido, int cap)
{
	if(memo[pedido][cap] >=0) return memo[pedido][cap];

	if(pedido == n || !cap) return memo[pedido][cap] = 0;

	int nao_pega = m(pedido+1, cap);

	if(peso[pedido] <= cap)
	{
		int pega = valor[pedido] + m(pedido+1, cap - peso[pedido]);

		return memo[pedido][cap] = max(pega, nao_pega);
	}
	return memo[pedido][cap] = nao_pega;
}

int main()
{
	int p;

	while(scanf("%d", &n))
	{
		if(n == 0)break;
		
		scanf("%d", &p);
		
		memset(memo, -1, sizeof(memo));

		for(int i = 0; i < n; i++)
			scanf("%d %d", &valor[i], &peso[i]);

		printf("%d min.\n", m(0, p));
	}
	return 0;
}


