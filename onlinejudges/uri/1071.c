#include <stdio.h>
int main(void)
{
	int x, y, soma = 0, aux, i;

	scanf("%d %d", &x, &y);

	if(x < y)
	{
		aux = x;
		x = y;
		y = aux;
	}

	for(i = y + 1; i < x; i++)	
		if(i % 2 != 0)	
			soma += i;
		
	
	printf("%d\n", soma);
	




		return 0;
}