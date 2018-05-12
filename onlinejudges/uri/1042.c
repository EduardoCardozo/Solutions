#include <stdio.h>
#define MAX 3
int main(void)
{
	
	int n1, n2, n3, aux, i, j;
	scanf("%d %d %d", &n1, &n2, &n3);

	int vet[MAX];
	vet[0] = n1;
	vet[1] = n2;
	vet[2] = n3;

	for(i = 0; i < 3; i++)
		for(j = i + 1; j < 3; j++)
		{
			if(vet[j] > vet[i])
			{
				aux = vet[j];
				vet[j] = vet[i];
				vet[i] = aux;
			}
		}

	for(i = 2; i > -1; i--)
		printf("%d\n", vet[i]);

	printf("\n");
	printf("%d\n%d\n%d\n", n1, n2, n3);



	return 0;
}