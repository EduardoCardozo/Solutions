#include <stdio.h>
int main(void)
{
	int n, i;
	double v1,v2,v3,media;

	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%lf %lf %lf", &v1, &v2, &v3);

		media = v1 * 2 + v2 * 3 + v3 * 5;
		printf("%.1lf\n", media / 10);
	}



		return 0;
}