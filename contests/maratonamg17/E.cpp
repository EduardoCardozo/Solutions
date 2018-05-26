#include <bits/stdc++.h>
using namespace std;

#define MAXN 600001
const int inf = 0x3f3f3f3f;
int v[MAXN], n, aux[MAXN];


int soma(int x){
  int s=0;
  while(x>0){
    s+=aux[x];
    x-=(x&-x);
  }
  return s;
}


void att(int x, int v){
  while(x<=n){
    aux[x]+=v;
    x+=(x&-x);
  }
}

int main()
{
  scanf("%d", &n);


  for(int i=1;i<=n;i++)
    att(i, 1);

  for(int i=0;i<n;i++)
  {
    int a;
    scanf("%d", &a);
    if(i==0)printf("%d", soma(a));
    else printf(" %d", soma(a));
    att(a, -1);
  }
  printf("\n");
}
