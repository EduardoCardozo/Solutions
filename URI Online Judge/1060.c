#include <stdio.h>
int main(void)
{
	int i, c = 0;
	double num;

	for(i = 0; i <6; i++)
	{
		scanf("%lf", &num);
		if(num > 0.0) c++;
	}

	printf("%d valores positivos\n", c);

		return 0;
}