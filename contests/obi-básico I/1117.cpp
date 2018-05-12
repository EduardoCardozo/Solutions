	#include <stdio.h>
	using namespace std;

	int main()
	{
		int n=0;
		double nota, media = 0;

		while(true)
		{
			scanf("%lf", &nota);
			if(nota<0.0 or nota >10.1)
				printf("nota invalida\n");
			else
			{
				n++;
				media +=nota;
				if(n == 2)
				{
					printf("media = %.2lf\n", media/2);
					break;
				}
			}
			
		}
	}