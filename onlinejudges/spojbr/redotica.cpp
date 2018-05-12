#include <bits/stdc++.h>
using namespace std;

#define MAXN 100100

struct edge{
	int x, y, dis;
  bool operator<(const edge &o)const{return dis < o.dis;}
};

edges arestas[MAXN];
edges mst[MAXN];

int pai[MAXN];
int peso[MAXN];

int find(int x)
{
	if(pai[x] == x) return x;

	return pai[x] = find(pai[x]);
}
void join(int a, int b)
{
	a = find(a);
	b = find(b);

	if(peso[a] < peso[b])pai[a] = b;
	else if(peso[a] > peso[b])pai[b] = a;
	else
	{
		pai[a] = b;
		peso[b]++;
	}
}
int main()
{
	int n, m, test = 1;


	while(scanf("%d %d", &n, &m))
	{
		if(n == 0)break;

		for(int i = 1; i <= n;i++)pai[i] = i;
		for(int i = 0; i <= m;i++)
			{
				arestas[i].x = arestas[i].y = arestas[i].dis = 0;
				mst[i].x = mst[i].y = mst[i].dis = 0;
			}



		for(int i = 0; i<m; i++)
			scanf("%d %d %d", &arestas[i].x, &arestas[i].y, &arestas[i].dis);


		sort(arestas, arestas+m);

		int size = 0;

		for(int i = 0; i < m; i++)
			if(find(arestas[i].x) != find(arestas[i].y))
			{
				join(arestas[i].x, arestas[i].y);
				mst[++size] = arestas[i];
			}
		printf("Teste %d\n", test);

		for(int i =1; i<=size; i++)
			if(mst[i].x <= mst[i].y)
				printf("%d %d\n", mst[i].x, mst[i].y);
			else
				printf("%d %d\n", mst[i].y, mst[i].x);

		printf("\n");
		test++;
	}
	return 0;
}
