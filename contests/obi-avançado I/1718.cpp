#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000

int pizza[MAXN], az[MAXN];
int main()
{
	int n, c, p;


	scanf("%d %d", &c, &n);

	p = c/n;

	for(int i=0; i < n;i++)
	{
		scanf("%d", &az[i]);
		pizza[c+az[i]-1]= pizza[az[i]] = 1;
	}

	int paux =p-1;
	int flag=1, i;

	for(i = az[0]+1;i<;i++)
	{
		if(paux==0)
		{
			paux=p;
			flag = 0;
		}
		if(pizza[i]==1)
		{
			if(paux>0)
			{
				if(flag==1)
				{
					printf("N\n");
					break;
				}
				else flag = 1;
			}
		}
		paux--;
	}
	if(i==az[n-1]+1)printf("S\n");
}
