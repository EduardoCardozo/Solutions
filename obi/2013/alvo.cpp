
#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
#define pow2(x) ((x)*(x))

long long int rcirc[MAX], c;


int buscab(long long int x)
{
	int ini = 1, fim = c, meio;
	
	while(ini < fim)
	{
		meio = (ini+fim)/2;

		if(rcirc[meio] >= x)fim = meio;
		else ini = meio+1;
	}
	return fim;
}
int main()
{
	
	long long int d, pont = 0, x, y, t;
	scanf("%lld %lld", &c, &t);
	
	for(int i = 1; i <= c; i++)
	{
		scanf("%lld", &rcirc[i]);

		rcirc[i] = pow2(rcirc[i]);
	}

	for(int i = 0; i < t; i++)
	{
		scanf("%lld %lld", &x, &y);

		d = x*x+y*y;

		if(d <= rcirc[c])
			pont +=	c+1-buscab(d);
	}

	printf("%lld\n", pont);


	return 0;
}