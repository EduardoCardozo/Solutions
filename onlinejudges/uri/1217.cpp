#include <bits/stdc++.h>

using namespace std;
int kgdia[400];
int main()
{
	int n;
	double gasto, gastotal = 0, kgpordia = 0;
	string frutas;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		scanf("%lf\n", &gasto);
		gastotal +=gasto;

		getline(cin, frutas);
		frutas+=' ';
		for(int j = 0; j < (int)frutas.size(); j++)
			if(frutas[j]==' ')
				kgdia[i]++;
	}

	for(int i = 0; i < n; i++)
	{
		kgpordia +=kgdia[i];
		printf("day %d: %d kg\n", i+1, kgdia[i]);
	}

	printf("%.2lf kg by day\n", kgpordia/n);
	printf("R$ %.2lf by day\n", gastotal/n);
	return 0;
}