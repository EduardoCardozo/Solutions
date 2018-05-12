#include <bits/stdc++.h>
using namespace std;

int j(int n,int m)
{
	if(n == 1)return 1;

	return (j(n-1, m)+m-1)%n+1;
}
int main()
{
	int n, k;
	int nc;
	scanf("%d", &nc);


	for(int i = 0; i < nc; i++)
	{
		scanf("%d %d", &n, &k);
		printf("Case %d: %d\n", i+1, j(n, k));

	}
	return 0;
}