/*
ID: ------1
PROG: ride
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int alfa[1000];

int main()
{
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");



	int comet= 1, group = 1;

	for(int i = 0; i < 26; i++)
		alfa[(int)'A'+i] = i+1;
	

	string p;
	getline(fin, p);

	

	for(int i = 0; i < (int)p.length();i++)
		comet *= alfa[(int)p[i]];


	getline(fin, p);

	for(int i = 0; i < (int)p.length();i++)
		group *= alfa[(int)p[i]];



	comet %= 47;
	group %= 47;
	if(comet == group) fout << "GO\n";
	else fout << "STAY\n";

	return 0;
}