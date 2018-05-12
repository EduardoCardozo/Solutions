#include <stdio.h>
#include <string.h>

#define MAXN 10000
int main()
{

	int n, num, v[MAXN];
	memset(v, 0, sizeof(v));

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		v[num]++;
	}

	for(int i = 1; i <= 2000;i++)
		if(v[i] != 0)
			printf("%d aparece %d vez(es)\n", i, v[i]);

	return 0;
}