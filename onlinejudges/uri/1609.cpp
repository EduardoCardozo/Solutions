#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;

	scanf("%d", &t);
	while(t--)
	{
		set<int> s;
		scanf("%d", &n);

		while(n--){
			int a; 
			scanf("%d", &a);
			s.insert(a);
		}

		printf("%d\n", s.size());
	}
}
