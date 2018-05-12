#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i=int(a);i<=int(b);i++)
#define MAXN 100000
int _size, casas[MAXN];

int buscab(int n)
{
	int ini = 1, fim = _size, meio;

	while(ini <= fim)
	{
		meio = (ini+fim)/2;
		if(casas[meio] == n)return meio;
		else if(casas[meio] > n)fim = meio-1;
		else ini = meio+1;
	}
	return 0;
}

int main()
{
	int m, x, toaq = 1, ondvo, resp = 0;
	scanf("%d %d",&_size, &m);

	REP(i, 1, _size)
		scanf("%d", &casas[i]);

	REP(i, 1, m)
	{
		scanf("%d", &x);
		ondvo = buscab(x);

		if(toaq < ondvo)
			resp += (ondvo-toaq);
		else if(toaq > ondvo)
			resp+=(toaq-ondvo);

		toaq = ondvo;
	}
	printf("%d\n", resp);
}