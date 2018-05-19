#include <bits/stdc++.h>
using namespace std;

#define MAXN 150

int main(){

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int d, k, b, pre[MAXN]; 
		scanf("%d %d %d", &d, &k, &b);

		for(int i=0;i<k;i++)scanf("%d", &pre[i]);
		int max = 0;
		for(int i=0;i<b;i++)
		{
			int a, pbolo = 0;
			scanf("%d", &a);
			for(int j=0;j<a;j++)
			{
				int x, y;
				scanf("%d %d", &x, &y);
				pbolo+=(pre[x]*y);
			}
			if(d/pbolo > max)
				max = d/pbolo;
		}

		printf("%d\n", max);
	}
}