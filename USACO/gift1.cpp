/*
ID: eduardo31
PROG: gift1
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;
#define MAXN 100
int main()
{
	ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");



	map<string, int> grupo;
	string nomes[MAXN];
    string p, nome;
	int n, q, r;
	fin >> n;

	for(int i = 0; i < n; i++)
	{
		fin >> p;
		grupo.insert(make_pair(p, 0));
		nomes[i] = p;
	}
	
	
	
	q = r = 1;
		
	while(fin >>  p >> q >> r)
	{
		if(q != 0)
		{
			int result = q/r;
			int mod =  q%r;
			for(int i = 0; i < r; i++)
			{
				fin >> nome;
				grupo[nome] += result;
			}
			grupo[p] += (mod-q);
		}
	}

	


	for(int i = 0; i < n; i++)
		fout << nomes[i] << " " << grupo[nomes[i]] << endl; 
	

	return 0;
}