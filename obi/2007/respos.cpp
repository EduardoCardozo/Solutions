#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i=int(a);i<int(b);i++)

map<int, int> repositorio, resposta;

int main()
{
	int n, m, p, v;

	scanf("%d %d", &n, &m);

	REP(i, 0, n)
	{
		scanf("%d %d", &p, &v);
		repositorio.insert(make_pair(p, v));
	}
	REP(i, 0, m)
	{
		scanf("%d %d", &p, &v);

		if(repositorio.find(p)!=repositorio.end())
		{
			if(v > repositorio[p])
			{
				repositorio[p] = v;
				if(resposta.find(p) != resposta.end())resposta[p] = v;
				else resposta.insert(make_pair(p, v));
			}
		}else
		{
			repositorio.insert(make_pair(p, v));
			resposta.insert(make_pair(p,v));
		}
	}
	for(map<int,int>::iterator it=resposta.begin();it!=resposta.end();it++)
		printf("%d %d\n", it->first, it->second);

	return 0;
}
