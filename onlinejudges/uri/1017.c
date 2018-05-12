#include <stdio.h>
int main(void)
{
	int tempoGasto, velocidadeM;

	scanf("%d %d", &tempoGasto, &velocidadeM);

	
	printf("%.3lf\n", tempoGasto * velocidadeM / 12.0);
	return 0;
}