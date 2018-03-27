#include <stdio.h>
#define MAXN 10050
int main()
{
	int v[MAXN],total = 0, n, media = 0;
	

	while(scanf("%d", &n) != EOF)
	{
		media = total = 0;
		for(int i = 0; i < n;i++)
		{
			scanf("%d", &v[i]);
			media += v[i];
		}
		if(media%n!= 0)
			printf("-1\n");
		else
		{
			media /= n;
			for(int i = 0; i < n;i++)
				if(v[i] > media)total += v[i]-media;

			printf("%d\n", total+1);
			
		}
	}
	return 0;
}