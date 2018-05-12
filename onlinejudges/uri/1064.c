#include <stdio.h>
int main(void)
{
	int c  = 0, i;
	double num, media = 0;

	for(i = 0; i < 6; i++)
	{
		scanf("%lf", &num);
		if(num > 0.0)
		{
			c++;
		    media += num;
		}
	}
	 printf("%d valores positivos\n%.1lf\n", c, media / c);

		return 0;
}