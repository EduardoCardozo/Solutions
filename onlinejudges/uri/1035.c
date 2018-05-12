#include <stdio.h>
int main(void)
{
	int a, b, c, d, x = 1;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a % 2 == 0)
	{
		if(c > 0 && d > 0)
			if(c + d > a + b)
				if(b > c && d > a);
				else x = 0;
			else x = 0;
		else x = 0;	
	}
	else x = 0;

	if(!x)printf("Valores nao aceitos\n");
	else printf("Valores aceitos\n");
	return 0;
}