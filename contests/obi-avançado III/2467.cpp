#include <bits/stdc++.h>
using namespace std;


#define REP(i, a, b) for(int i=int(a);i<=int(b);i++)

const long MAXN = 10000;
int tab[MAXN][MAXN];

int main()
{
	int n, q,op, x, r, freq=-1;

	multiset<int> help;
	scanf("%d %d", &n, &q);

	REP(i, 1, q)
	{
		scanf("%d", &op);
		if(op==1)
		{
			scanf("%d %d", &x, &r);
			REP(i, 1, n)
				tab[x][i]+=r;
		}
		else if(op==2)
		{
			scanf("%d %d", &x, &r);
			REP(i, 1, n)
				tab[i][x]+=r;
		}
		else if(op==3)
		{
			scanf("%d", &x);
			REP(i, 1, n)
				help.insert(tab[x][i]);

			int maior = -1;freq=-1;
			for(auto it=help.begin(); it!=help.end();it++)
			{
				int elemento = *it;
				int qtd = help.count(elemento);
				if(qtd>maior && elemento>freq)
				{
					freq = elemento;
					maior = qtd;
				}
			}
			help.clear();
			printf("%d\n", freq);
		}
		else
		{
			scanf("%d", &x);
			REP(i, 1, n)
				help.insert(tab[i][x]);

			int maior = -1;freq=-1;
			for(auto it=help.begin(); it!=help.end();it++)
			{
				int elemento = *it;
				int qtd = help.count(elemento);
				if(qtd>maior && elemento > freq)
				{
					freq = elemento;
					maior = qtd;
				}
			}
			help.clear();
			printf("%d\n", freq);
		}
	}

	return 0;
}