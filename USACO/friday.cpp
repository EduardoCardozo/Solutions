#include <bits/stdc++.h>

using namespace std;
int DiaSemana[8];
int main()
{
	int DiasMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30,31,30,31};
	int n, diaUm = 3;

	scanf("%d", &n);

	for(int i = 0; i <= n-1; i++)
	{
		DiasMes[2] = (i%4==0) ? (29):(28);
		if(i == 2)DiasMes[2] = 29;
		if(i == 0||i == 200 || i == 300) DiasMes[2] = 28;

		for(int j = 1; j <= 12; j++)
		{
			cout << diaUm << endl;

			if(diaUm == 1)		
				DiaSemana[7]++;	
			else
				DiaSemana[diaUm-1]++;
			
			if(DiasMes[j]%7 == 0)continue;
			else if(DiasMes[j]%7 == 1)
			{
				if(diaUm == 7)diaUm = 1;
				else diaUm++;
			}
			else
			{
				diaUm += DiasMes[j]%7;
				if(diaUm > 7)diaUm %= 7;
			}			
		}		
	}

	for(int i = 1; i <=7;i++)
		printf("%d ", DiaSemana[i]);
	
}