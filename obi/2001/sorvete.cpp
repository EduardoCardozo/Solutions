#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int n,m;

int main(){

	int teste=1;

	scanf("%d %d",&n,&m);

	while(true){
		scanf("%d %d",&n,&m);
		if(!n and !m)break;

		set<pii> praia;
		
		while(m--){
			int u,v;
			scanf("%d%d",&u,&v);
			praia.insert({u,v});
		}

		int in=praia.begin()->first;
		
		int mf=praia.begin()->second;

		printf("Teste %d\n",teste++);
		for(auto it:praia){
			if(it.first>mf){
				printf("%d %d\n", in,mf);
				in=it.first;
				mf=it.second;
			}
			else if(mf < it.second)mf=it.second;	
		}
		printf("%d %d\n\n", in,mf);
		
		scanf("%d%d",&n,&m);
	}	

	
}