#include <bits/stdc++.h>
using namespace std;


char alt[] = {'A', 'B', 'C', 'D', 'E', '*'};
int v[5];
int main()
{
	int n;

	while(true){
		scanf("%d", &n);
		if(!n)break;

		while(n--){
			for(int i=0;i<5;i++)scanf("%d", &v[i]);

			int resp=-1, flag=0;
			for(int i=0;i<5;i++)
			{
				if(v[i]<=127)
				{
					if(resp!=-1)
					{
						printf("*\n");
						flag=1;
						break;
					}else resp = i;
						
				}
			}
			if(flag)continue;
			else if(resp==-1)printf("*\n");
			else printf("%c\n", alt[resp]);
		}	
	}
}
