#include <bits/stdc++.h>
using namespace std;

#define MAXN 1002
int mar[MAXN][MAXN];


int main()
{
	int xi,yi,xf,yf, n;

	scanf("%d", &n);

	for(int i = 0; i < n;i++)
	{
		scanf("%d %d %d %d", &xi,&xf,&yi,&yf);

		for(int j = yi; j < yf;j++)
			for(int k = xi; k<xf;k++)
				mar[j][k] =1;

	}
	int resp = 0;
	for(int i = 1; i < MAXN;i++)
		for(int j = 1; j < MAXN;j++)
			if(mar[i][j]==1)resp++;


	printf("%d\n", resp);
}
