#include <stdio.h>
#include <stdio.h>
#define MAX 3
int main(void)
{
	int hora1, hora2;

	scanf("%d %d", &hora1, &hora2);

	if(hora1 < hora2) printf("O JOGO DUROU %d HORA(S)\n", hora2 - hora1);
	else printf("O JOGO DUROU %d HORA(S)\n",(24 - hora1) + hora2);
	return 0;
}