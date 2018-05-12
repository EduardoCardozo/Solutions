#include <stdio.h>
int main(void)
{
	int diasv, ano, mes;
	
	scanf("%d", &diasv);
	ano = diasv / 365;
	mes = (diasv % 365) / 30;
	diasv = (diasv % 365) % 30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, diasv);
	return 0;
}