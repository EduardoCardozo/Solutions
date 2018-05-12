#include <stdio.h>
#define MAX 100000

int pai[MAX];
int find(int filho)
{
	if(pai[filho] == filho) return  filho;

	return pai[filho] = find(pai[filho]);
}
void join(int filho, int filho2)
{
	pai[find(filho)] = find(filho2);
}
int main(void)
{
	int N, K, x, y;
	char op;

	scanf("%d %d\n", &N, &K);
	for(int i = 0; i <= N; i++) pai[i] = i;

	for(int i = 0; i < K; i++)
	{
		scanf("%c %d %d\n", &op, &x, &y);

		if(op=='C')
			if(find(x) == find(y))printf("S\n");
			else printf("N\n");
		else
			join(x, y);
	}
	return 0;
}
