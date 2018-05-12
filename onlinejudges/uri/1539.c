 #include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 1100
#define INFINITO 9999
#define min(a, b) ((a < b)? (a) : (b))
#define DIST(a, b) sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y))
typedef struct INFO{
	int x, y, r;
}INFO;
INFO infos[MAX];
double g[MAX][MAX];
double dist[MAX][MAX];
int processados[MAX];
int n;

void dijkstra(int v)
{
	memset(processados, 0, sizeof(processados));

	for (int i = 1; i <= n; i++)dist[v][i] = g[v][i];

	dist[v][v] = 0;
	processados[v] = 1;

	while(true)
	{
		int u = -1;
		double menorDis = INFINITO;

		for (int i = 1; i <= n; i++)
		{
			if(!processados[i] && dist[v][i] < menorDis)
			{
				menorDis = dist[v][i];
				u = i;
			}
		}

		if(u == -1) break;

		processados[u] = 1;


		for (int i = 1; i <= n; i++)dist[v][i] = min(dist[v][i], dist[v][u] + g[u][i]);
		 
	}	
}
int main(void)
{
	int  c, a1, a2;
	double d;
	scanf("%d", &n);

	while(n != 0)
	{
		for(int i = 1; i <= n; i++)	
			scanf("%d %d %d", &infos[i].x, &infos[i].y, &infos[i].r);		

		for (int i = 0; i <= n; i++)
			for(int j = 0; j <= n; j++)g[i][j] = dist[i][j] = INFINITO;
		
	
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
			{
				d = DIST(infos[i], infos[j]);
				
				if(d <= infos[i].r)g[i][j] = d;
				if(d <= infos[j].r)g[j][i] = d;
				
			}
		scanf("%d", &c);

		for(int i = 0; i < c; i++)
		{
			scanf("%d %d", &a1, &a2);


			if(dist[a1][a1] == INFINITO)
				dijkstra(a1);		
			

			if(dist[a1][a2] == INFINITO) printf("-1\n");
			else printf("%d\n", (int)dist[a1][a2]);

		}

		scanf("%d", &n);
	}

	return 0;
}