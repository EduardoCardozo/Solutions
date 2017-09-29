#include <stdio.h>

int main(void)
{
	int n_func, horas;
	double salph;
	scanf("%d %d %lf", &n_func, &horas, &salph);

	printf("NUMBER = %d\n",n_func);
	printf("SALARY = U$ %.2lf\n",salph * horas);
	return 0;
}