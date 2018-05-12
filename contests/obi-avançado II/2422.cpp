#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define REP(i, a, b) for(int i=int(a);i<=int(b);i++)

int _size, rua[MAXN];

int buscab(int n)
{
	int ini = 1, fim = _size, meio;
	
	while(ini <= fim)
	{
		meio = (ini+fim)/2;
		if(rua[meio]==n)return meio;
		else if(rua[meio] > n)fim=meio-1;
		else ini = meio+1;
	}
	return -1;
}

int main()
{

	int n, k, aux;

	scanf("%d", &n);
	_size = n;

	REP(i, 1, n)
		scanf("%d",&rua[i]);
		
	scanf("%d",&k);

	REP(i, 1, n)
	{
		aux = buscab(k-rua[i]);
		if(aux != -1)
		{
			printf("%d %d\n", rua[i],rua[aux]);
			break;
		}
				
	}
	return 0;
}