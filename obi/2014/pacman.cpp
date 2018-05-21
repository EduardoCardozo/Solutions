#include <bits/stdc++.h>
using namespace std;

#define MAXN 150
char tab[MAXN][MAXN];

int main()
{
	int n;
	scanf("%d", &n);

	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf(" %c", &tab[i][j]);

	int comida = 0, resp=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0){
			for(int j=n;j>0;j--)
				if(tab[i][j] == 'o')comida++;
				else if(tab[i][j] == 'A')
				{
					resp=max(resp, comida);
					comida = 0;
				}
			}
		else{
			for(int j=1;j<=n;j++)
				if(tab[i][j] == 'o')comida++;
				else if(tab[i][j] == 'A')
				{
					resp=max(resp, comida);
					comida = 0;
				}
			}
	}
	printf("%d\n", max(resp, comida));
	return 0;
}
