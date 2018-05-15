#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t=0, c=0;
  scanf("%d",&n);
  while(n--){
    int a;
    scanf("%d", &a);
    if(a<50)t++;
    else if(a<85)c++;
  }
  printf("%d %d\n",t, c);
}
