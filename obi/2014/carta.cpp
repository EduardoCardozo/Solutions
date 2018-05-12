#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b,c,d,e;

	cin >> a >> b >> c >> d >> e;

	if(a > b)
	{
		if(b > c)
			if(c > d)
				if(d > e)
					printf("D\n");
				else printf("N\n");
			else printf("N\n");
		else printf("N\n");
	}
	else
	{
		if(b < c)
			if(c < d)
				if(d < e)
					printf("C\n");
				else printf("N\n");
			else printf("N\n");
		else printf("N\n");
	}

	return 0;
}