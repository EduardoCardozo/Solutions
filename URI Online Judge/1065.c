#include <stdio.h>
int main(void)
{
	int c  = 0, i;
	int num;

	for(i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		if(num % 2 == 0)c++;
	}
	 printf("%d valores pares\n", c);
	




		return 0;
}