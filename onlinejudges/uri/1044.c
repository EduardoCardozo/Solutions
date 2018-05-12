#include <stdio.h>
#define MAX 3
int main(void)
{
	
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b)
	{
		if(a % b == 0)printf("Sao Multiplos\n");
		else printf("Nao sao Multiplos\n");
	}
	if(b > a)
	{
		if(b % a == 0)printf("Sao Multiplos\n");
		else printf("Nao sao Multiplos\n");
	}
	if(b == a)printf("Sao Multiplos\n");
	return 0;
}