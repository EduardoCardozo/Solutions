#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	while(n--){
		int resp=0;
		string a, b;
		cin >> a >> b;

		int sz=int(a.size());
		for(int i=0;i<sz;i++)
		{
			if(a[i] > b[i])
				resp+= 'z'-a[i]+b[i]-'a'+1;
			else if(a[i] < b[i])
				resp+=b[i]-a[i];
		}

		printf("%d\n", resp);
	}

}