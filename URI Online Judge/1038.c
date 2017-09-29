#include <stdio.h>
int main(void)
{
	int id, qtd;

	scanf("%d %d", &id, &qtd);

	if(id == 1)printf("Total: R$ %.2lf\n",qtd * 4.0);
	else if(id == 2)printf("Total: R$ %.2lf\n",qtd * 4.50);
	else if(id == 3)printf("Total: R$ %.2lf\n",qtd * 5.0);
	else if(id == 4)printf("Total: R$ %.2lf\n",qtd * 2.0);
	else printf("Total: R$ %.2lf\n",qtd * 1.5);
	return 0;
}