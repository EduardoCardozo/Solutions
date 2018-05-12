#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a, b, f=1, g = 0;

	scanf("%d %d", &n, &m);

	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);

		g-=a;
		g+=b;
		if(g > m)f =0;
	}

	f == 0?printf("S\n") : printf("N\n");
}