#include <stdio.h>

int main(void)
{
	int distanciaTotal;
	double combGasto;
	scanf("%d %lf", &distanciaTotal, &combGasto);
	printf("%.3lf km/l\n", distanciaTotal / combGasto);
	return 0;
}