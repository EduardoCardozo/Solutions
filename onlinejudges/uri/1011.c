#include <stdio.h>
#define MAX 100
int main(void)
{
	double raio;
	scanf("%lf", &raio);
	printf("VOLUME = %.3lf\n", (4/3.0) * 3.14159 * raio * raio * raio);
	return 0;
}