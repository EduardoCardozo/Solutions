#include <stdio.h>
int main(void)
{
	int valor;
	scanf("%d", &valor);
	int resto[7];
	resto[0] = valor % 100;
	resto[1] = resto[0] % 50;
	resto[2] = resto[1] % 20;
	resto[3] = resto[2] % 10;
	resto[4] = resto[3] % 5;
	resto[5] = resto[4] % 2;
	resto[6] = resto[5] % 1;

	printf("%d\n", valor);
	printf("%d nota(s) de R$ 100,00\n", valor / 100);
	printf("%d nota(s) de R$ 50,00\n", resto[0] / 50);
	printf("%d nota(s) de R$ 20,00\n", resto[1] / 20);
	printf("%d nota(s) de R$ 10,00\n", resto[2] / 10);
	printf("%d nota(s) de R$ 5,00\n", resto[3] / 5);
	printf("%d nota(s) de R$ 2,00\n", resto[4] / 2);
	printf("%d nota(s) de R$ 1,00\n", resto[5] / 1);

	

	return 0;
}