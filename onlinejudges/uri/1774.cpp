#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAXN 200010
#define INF 99999999
struct t_aresta{
	int x, y, dis;
};
t_aresta mst[MAXN];
t_aresta aresta[MAXN];

bool comp(t_aresta a, t_aresta b){return a.dis < b.dis;}
int n, m;

int pai[MAXN];
int peso[MAXN];

void zera()
{
	for(int i = 0; i <= m; i++)pai[i] = i;
	memset(peso, 0, sizeof(int));
	
	for(int i = 0; i <= n; i++)
	{
		aresta[i].x = aresta[i].y = aresta[i].dis = 0;
		mst[i].x = mst[i].y = mst[i].dis = 0;
	}

}
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
	if(peso[a] > peso[b])pai[b] = a;
	else
	{
		pai[a] = b;
		peso[b]++;
	}
}

int main(void)
{
	int r, c;
	scanf("%d %d", &r, &c);

	for(int i = 0; i <= r; i++)pai[i] = i;
	
	for(int i = 0; i < c; i++)
		scanf("%d %d %d", &aresta[i].x, &aresta[i].y, &aresta[i].dis);
		
	
	
	sort(aresta, aresta+c, comp);

	int size = 0;
	for(int i = 0; i < c; i++)
	{
		if(find(aresta[i].x) != find(aresta[i].y))
		{
			join(aresta[i].x, aresta[i].y);
			mst[++size] = aresta[i];
		}
	}
	int resp = 0;
	for(int i = 1; i <= size; i++)
		resp += mst[i].dis;

	printf("%d\n", resp);
	return 0;
}