#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000

int bit[MAXN], n;

int soma(int x, int s=0){while(x>0){s+=bit[x];x-=(x&-x);}return s;}
void att(int x, int v){while(x<=n){bit[x]+=v;x+=(x&-x);}}

int main()
{
  int q;
  scanf("%d %d", &n, &q);
  for(int i=1;i<=n;i++)
  {
    int a;
    scanf("%d", &a);
    att(i, a);
  }

  for(int i=0;i<q;i++)
  {
    int op;
    scanf("%d", &op);

    if(op){
      int a;
      scanf("%d", &a);
      printf("%d\n", soma(a));
    }
    else{
      int a, b;
      scanf("%d %d", &a, &b);

      att(a, b);
    }
  }
}
