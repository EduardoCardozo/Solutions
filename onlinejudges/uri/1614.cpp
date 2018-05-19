#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;

  scanf("%d", &t);
  while(t--)
  {
    int n, m;
    scanf("%d %d", &n, &m);
    map<int, int>c;
    int maior=0;
    int vencedor=-1;
    for(int i=0;i<m;i++){
      int a;
      scanf("%d", &a);

      if(c.find(a)!=c.end())c[a]++;
      else c.insert({a,1});

      if(c[a]>maior){maior=c[a];vencedor=a;}
    }

    if(c[vencedor]>m/2)printf("%d\n", vencedor);
    else printf("-1\n");
  }
}
