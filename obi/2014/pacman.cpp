#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) \
	for(int i = int(a); i <= int(b);i++)

#define REPI(i, a, b) \
	for(int i = int(a); i >= int(b);i--)

#define MAXN 150
int tab[MAXN][MAXN];
int qtdC[MAXN];
int main()
{
	int n;
	scanf("%d\n", &n);
	char x;

	REP(i, 1, n)
	{
		REP(j, 1, n)
		{
			scanf("%c\n", &x);
			
			if(x == 'o')
				tab[i][j]=1;
			else if(x  == 'A')
				tab[i][j]=2;			
		}
	}

	priority_queue<int> qtdmax;
	int comida = 0;
	REP(i, 1, n)
	{
		if(i%2==0)
		{
			REPI(j, n, 1)
			{
				if(tab[i][j] == 1)
				{	
					comida++;
				}
				else if(tab[i][j] == 2)
				{
					
					qtdmax.push(comida);
					comida = 0;
				}
			}
		}
		else
		{
			REP(j, 1, n)
			{
				if(tab[i][j] == 1)
				{
					comida++;
					
				}
				else if(tab[i][j] == 2)
				{
					
					qtdmax.push(comida);
					comida = 0;
				}
			}
		}
	}
	qtdmax.push(comida);
	printf("%d\n", qtdmax.top());

	return 0;
}