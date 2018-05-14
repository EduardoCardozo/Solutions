#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  while(true){
    scanf("%d", &n);

    if(!n)break;

    map<int, int> resp;

    int v=0, k=0;
    while(n--){
      int a;
      scanf("%d", &a);
      resp[a]+=1;

      if(resp[a]>v)
      {
        v=resp[a];
        k=a;
      }
    }
    printf("%d\n", k);
  }
}
