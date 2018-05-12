#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i=int(a);i<int(b);i++)
#define REPI(i, a, b) for(int i=int(a);i>int(b);i--)

vector<int> v;
int main()
{
	int n, x, p, qtd;

	scanf("%d %d", &n, &p);


	REP(i, 0, p)
	{
		scanf("%d", &x);
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	
	REPI(i, v[p-1], 0)
	{
		qtd = 0;
		REPI(j, p-1, 0)
			qtd += v[j]/i;

		if(qtd >= n)
		{
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}