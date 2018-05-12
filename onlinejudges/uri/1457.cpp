#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>
using namespace std;
#define MAXN 150
int k;
unsigned long long int pd[MAXN][MAXN];
unsigned long long int fatg(unsigned long long int n)
{
	if(n < 1)
		return 1;

	if(pd[n][k] == -1)
		pd[n][k] = n * fatg(n - k);
	
	return pd[n][k];
}

int main(void)
{
	int t;
	unsigned long long int n;
	string num, nstring;	

	std::fill_n(&pd[0][0], MAXN*MAXN, -1);

	for(int i = 1; i <= 20; i++)
		for(int j = 20; j >= i-1; j--)
			pd[i][j] = i;
	
	
	scanf("%d\n", &t);


	for(int i = 0; i < t; i++)
	{
		num = nstring = "";
		k = 0;
		getline(cin, num);

		
		for(unsigned int i = 0; i < num.length(); i++)
		{
			if(num[i] != '!')
				nstring += num[i]; 
			else
				k++;
		}

		stringstream(nstring) >> n;	
		printf("%llu\n", fatg(n));
	}
}