#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define REP(i, a, b) for(int i=int(a);i<=int(b);i++)

vector<string> nomes;
long long int f[MAXN], n;

int solve()
{
	long long int soma1=0, soma2=0, ini = 1, fim = n, meio;

	while(ini <= fim)
	{
		meio =(ini+fim)/2;

    soma1=soma2=0;

		REP(i, 1, meio)soma1+=(f[i]*(meio-i+1));
		REP(i, meio+1, n)soma2+=(f[i]*(i-meio));

		if(soma2 < soma1)fim=meio-1;
		else if(soma2 > soma1)ini=meio+1;
		else return meio-1;
	}

	return -1;
}

int main()
{
  ios_base::sync_with_stdio(false);
	string nome;

	cin >> n;

	while(n!=0)
	{
		nomes.clear();
		memset(f, 0, sizeof(f));

		REP(i, 1, n)
		{
			cin >> nome;
			nomes.push_back(nome);
			REP(j,0,nome.size()-1)f[i]+=nome[j];
		}

		int resp = solve();

		if(resp == -1)cout << "Impossibilidade de empate.\n";
		else cout << nomes[resp] << endl;

		cin >> n;
	}
	return 0;
}
