#include <stdio.h>

int main()
{
	int n, x, resp = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		resp+=(x-1);
	}
	printf("%d\n", resp);
}