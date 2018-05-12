#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b;
	char op;
	long long resp;
	scanf("%d %d %c %d", &n, &a, &op, &b);

	if(op == '+')
	{
		resp = a+b;
		if(resp <= n)printf("OK\n");
		else printf("OVERFLOW\n");
	}
	else{
		resp = a*b;
		if(resp <= n)printf("OK\n");
		else printf("OVERFLOW\n");
	}

	return 0;
}