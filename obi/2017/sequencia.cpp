#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000
int A[MAXN];

int main()
{
	priority_queue<int> resp;

	int n;
	scanf("%d", &n);

	for(int i=0; i < n;i++)
		scanf("%d", &A[i]);

	int seq = 1;
	if(n==1)printf("1\n");
	else
	{
		for(int i=0; i < n-1;i++)
		{
			if(abs(A[i]-A[i+1]) <= 1)seq++;
			else
			{
				resp.push(seq);
				seq = 1;
			}
		}
		resp.push(seq);
		printf("%d\n", resp.top());
	}
	return 0;
}
