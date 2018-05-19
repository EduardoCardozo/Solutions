#include <bits/stdc++.h>
using namespace std;


bool cmp(int a, int b){return a>b;}

int main()
{
	int t;
	scanf("%d", &t);

	while(t--){
		int n, m, c;
		vector<int> andares;
		scanf("%d %d %d", &n, &c, &m);

		for(int i=0;i<m;i++)
		{
			int a;
			scanf("%d", &a);
			andares.push_back(a);
		}

		sort(andares.begin(), andares.end(), cmp);

		int resp=0;
		for(int i=0;i<m;i+=c)
		{
			resp+=(2*andares[i]);
		}
		printf("%d\n", resp);
	}
}
