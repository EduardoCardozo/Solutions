#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) \
	for(int i = int(a); i < int(b); i++)

int main()
{
	string p, r;
	getline(cin, p);

	REP(i, 0, p.size())
	{
		if(p[i] == 'p' and p[i+1]=='p')
		{
			r+='p';
			++i;
		}
		else if(p[i]!='p')
			r+=p[i];

			
	}
	cout << r << endl;
	return 0;
}