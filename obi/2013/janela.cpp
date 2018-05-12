#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i=int(a);i<int(b);i++)

int v[1000];
int main()
{
	int f1,f2,f3, resp = 0;

	scanf("%d %d %d", &f1, &f2, &f3);
	
	REP(i, f1, f1+200)v[i]=1;
	REP(i, f2, f2+200)v[i]=1;
	REP(i, f3, f3+200)v[i]=1;


	REP(i, 0, 600)if(v[i]==0)resp++;

	
	printf("%d\n", resp*100);
}