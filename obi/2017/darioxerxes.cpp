#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, d, x, pd=0, px=0;
  scanf("%d", &n);

  while(n--){
    scanf("%d %d", &d,&x);
    if(x==(d+1)%5 or x==(d+2)%5)pd++;
    else px++;
  }
  px<pd?printf("dario\n"):printf("xerxes\n");
}
