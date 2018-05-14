#include <bits/stdc++.h>
using namespace std;

int main()
{
	int v, nota50, nota10,nota5,nota1, teste=1;


	while(true)
	{
		scanf("%d",&v);
		if(v==0)break;

		nota50 = nota10 = nota5 = nota1 = 0;

		nota50=v/50;
		v%=50;
		nota10 = v/10;
		v%=10;
		nota5 = v/5;
		v%=5;
		nota1 = v;

		printf("Teste %d\n",teste++);
		printf("%d %d %d %d\n\n", nota50, nota10, nota5, nota1);
	}
}
