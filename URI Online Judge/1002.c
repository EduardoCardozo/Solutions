#include <stdio.h>
#include <math.h>
int main(void)
{
	double raio, A;

	scanf("%lf", &raio);
	A = raio * raio * 3.14159;
	printf("A=%.4f\n", A);
    return 0;
}