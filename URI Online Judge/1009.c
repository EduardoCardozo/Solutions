#include <stdio.h>
#define MAX 100
int main(void)
{
	char nome[MAX];
	double sal, totalv, total;
	scanf("%s %lf %lf",nome, &sal, &totalv);

	printf("TOTAL = R$ %.2lf\n", sal + (totalv * 0.15));
	return 0;
}