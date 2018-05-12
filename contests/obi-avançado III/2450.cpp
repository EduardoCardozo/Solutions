#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i=int(a);i<int(b);i++)
#define REPI(i, a, b) for(int i=int(a);i>=int(b);i--)
#define MAXN 1000
int tab[MAXN][MAXN];
int main()
{
	int n, m;

	scanf("%d %d", &n,&m);
	REP(i, 0, n)
		REP(j, 0, m)
			scanf("%d", &tab[i][j]);

	int flagresp = 1;
	REP(i, 0, n)
	{
		REP(j, 0, m)
		{	
			if(tab[i][j] != 0)
			{
				REP(k, i+1, n)
				{
					if(tab[k][j]!=0)
						flagresp = 0;
				}
				break;
			}
		}
		
	}

	if(flagresp)printf("S\n");
	else printf("N\n");
	return 0;
}