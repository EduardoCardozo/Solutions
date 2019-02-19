#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y;
  scanf("%d%d", &x, &y);
  int ans=1;
  while(ans<=y){
    if(ans%x==0)printf("%d\n",ans);
    else printf("%d ", ans);
    ans++;
  }
}
