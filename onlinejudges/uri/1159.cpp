#include <cstdio>

using namespace std;

int main()
{
	int x;

	while(scanf("%d", &x))
	{
		if(!x)break;

		int resp = 0;
		
		if(x % 2 != 0)x++;

		resp = 5*x + 20;


		printf("%d\n", resp);
	}
}