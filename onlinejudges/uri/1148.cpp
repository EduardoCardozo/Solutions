#include <stdio.h>
#include <algorithm>
using namespace std;
#define MAX 550
#define INFINITO 99999
int distancia[MAX][MAX];
int g[MAX][MAX];
int main(void)
{
	 int E= 1 ,X, Y, H, K, O, D, N = 1;
	 while(E != 0 || N != 0)
	 {
	 	scanf("%d %d", &N, &E);
	 	if(E == 0 && N == 0)break;
	 
	 	for(int i = 0; i <= N+1; i++)
	 		for(int j = 0; j <= N+1; j++)g[i][j] = distancia[i][j]= INFINITO;
	 
	 	for(int i = 0; i < E; i++)
	 	{
	 		scanf("%d %d %d\n", &X, &Y, &H);
	 		if(g[Y][X] != INFINITO)
	 			g[Y][X] = g[X][Y] = distancia[Y][X] = distancia[X][Y]=0;
	 		else g[X][Y] = distancia[X][Y] = H;
	 	}	 	
	 	for(int k = 1; k <= N; k++)
	 		for(int i = 1; i <=N; i++)
	 			for(int j = 1; j <= N; j++) distancia[i][j] = min(distancia[i][j], distancia[i][k] + distancia[k][j]);
	 	scanf("%d", &K);

	 	for(int i = 0; i < K; i++)
	 	{
	 		scanf("%d %d", &O, &D);

	 		if(distancia[O][D] != INFINITO)
	 			printf("%d\n", distancia[O][D]);
	 		else 
	 			printf("Nao e possivel entregar a carta\n");
	 	}
	 	printf("\n");
	}
	return 0;
}