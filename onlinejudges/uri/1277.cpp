#include <bits/stdc++.h>
using namespace std;
char nomes[1000][1000], reg[1000][1000];
int main()
{
	int t, n;
	
	scanf("%d", &t);
	double freq = 0, qtdtotal = 0, qtdpresente = 0;
	for(int i = 0; i < t; i++)
	{
		freq = 0, qtdtotal = 0, qtdpresente = 0;
		scanf("%d\n", &n);

		for(int j = 0; j < n; j++)
			scanf("%s ", nomes[j]);
		
		for(int j = 0; j < n; j++)
			scanf("%s ", reg[j]);

		for(int j = 0; j < n;j++)
		{
			qtdtotal = 0, qtdpresente = 0;
			for(int k=0;reg[j][k]!='\0';k++)
			{
				if(reg[j][k] == 'M')continue;

				if(reg[j][k] == 'P')
				{
					qtdpresente++;
					qtdtotal++;
				}
				if(reg[j][k] == 'A')qtdtotal++;

				
			}

			freq = (100.0/qtdtotal) * qtdpresente;

			if(freq < 75.0)
				printf("%s ", nomes[j]);
		}
		printf("\n");
	}
	scanf("%*c");
	return 0;
}