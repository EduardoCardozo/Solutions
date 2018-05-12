#include <bits/stdc++.h>

int main()
{
	double salario;
	scanf("%lf",&salario);

	if(salario > 2000.0)
	{
		printf("Novo salario: %.2lf\n", salario+salario*0.04);
		printf("Reajuste ganho: %.2lf\n", salario*0.04);
		printf("Em percentual: 4 %\n");
	}
	else if(salario >= 1200.01)
	{
		printf("Novo salario: %.2lf\n", salario+salario*0.07);
		printf("Reajuste ganho: %.2lf\n", salario*0.07);
		printf("Em percentual: 7 %\n");
	}
	else if(salario >= 800.01)
	{
		printf("Novo salario: %.2lf\n", salario+salario*0.1);
		printf("Reajuste ganho: %.2lf\n", salario*0.1);
		printf("Em percentual: 10 %\n");
	}
	else if(salario >=400.01)
	{
		printf("Novo salario: %.2lf\n", salario+salario*0.12);
		printf("Reajuste ganho: %.2lf\n", salario*0.12);
		printf("Em percentual: 12 %\n");
	}
	else
	{
		printf("Novo salario: %.2lf\n", salario+salario*0.15);
		printf("Reajuste ganho: %.2lf\n", salario*0.15);
		printf("Em percentual: 15 %\n");
	}
}