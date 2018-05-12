#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, resp = 7;

	cin >> a;

	if(a > 30)
	{
		resp+=20;
		if(a > 100)
		{
			resp+=140;
			resp+=5*(a-100);
		}
		else if(resp+=2*(a-30));
	}
	else if(a > 10)resp+=(a-10);
	printf("%d\n",resp);

	


	return 0;
}