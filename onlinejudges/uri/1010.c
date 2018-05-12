#include <stdio.h>
#define MAX 100
int main(void)
{
	int pecaid, numpeca;
	double valorpeca, total;
	scanf("%d %d %lf",&pecaid, &numpeca, &valorpeca);
	total = numpeca * valorpeca;
	scanf("%d %d %lf",&pecaid, &numpeca, &valorpeca);
	total += numpeca * valorpeca;
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	return 0;
}