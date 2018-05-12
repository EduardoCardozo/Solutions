#include <cstdio>
double vetor[12];
int main()
{
	int n; char op;
	double media, x;
	scanf("%d %c", &n, &op);

	for(int i = 0; i < 12;i++)
		for(int j = 0; j < 12; j++)
		{
			scanf("%lf", &x);
			vetor[i] += x;
		}

	if(op == 'S')printf("%.1lf\n", vetor[n]);
	else
	{
		media = vetor[n] / 12.0;
		printf("%.1lf\n", media);
	}
	return 0;
}