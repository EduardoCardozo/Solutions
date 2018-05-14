#include <bits/stdc++.h>
using namespace std;

#define MAXN 10020
int praia[MAXN];
int main()
{
  int p, s, test=1;

  while(true)
  {

    scanf("%d %d", &p, &s);
    if(!p and !s)break;
    memset(praia, 0, sizeof(praia));

    for(int i=0;i<s;i++)
    {
      int a, b;
      scanf("%d %d", &a, &b);
      for(int j=a;j<=b;j++)praia[j]++;
    }
    printf("Teste %d\n", test++);

    int flag=0, l, r;
    for(int i=0;i<=p;i++)
    {
      if(praia[i]==0)
      {
        if(flag)
        {
          printf("%d\n", i-1);
          flag=0;
        }
      }
      else
      {
        if(flag)
        {
          if(praia[i]!=praia[i-1])
          {
            printf("%d %d\n", l, r);
          }
          flag=1;
          printf("%d ", i);
        }
        else
        {
            l=i;
        }
        if(i==p)printf("%d\n", i);
      }


    }
  }
}
