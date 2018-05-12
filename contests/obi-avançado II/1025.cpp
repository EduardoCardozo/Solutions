#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define REP(i,a,b) for(int i=int(a);i<int(b);i++)

vector<int> v;
set<int> help;
int main()
{
	int q, _case = 1, x, a, n;

	scanf("%d %d", &n, &q);

	while(n!=0 and q!=0)
	{
		v.resize(n); v.clear();
		help.clear();
		REP(i, 0, n)
		{
			scanf("%d", &a);
			v.push_back(a);
			help.insert(a);
		}
		vector<int>::iterator it;
		sort(v.begin(), v.end());

		printf("CASE# %d:\n", _case++);
		REP(i, 0, q)
		{

			scanf("%d", &x);
			it = lower_bound(v.begin(),v.end(), x);
			int r = it-v.begin();
			if(help.find(x) == help.end())
				printf("%d not found\n", x);
			else if (it == v.end())
				printf("%d not found\n", x);
			else printf("%d found at %d\n", x, r+1);
		}
		scanf("%d %d", &n, &q);
	}

	return 0;
}
