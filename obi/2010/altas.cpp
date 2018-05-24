#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, resp=0;

  scanf("%d %d", &n, &k);

  if(k==1)
  {
    printf("%d\n", n);
    return 0;
  }
  for(int i=0;i<k-1;i++)
  {
    if(n%2!=0)n++;
    if(n>0)
    {
      n/=2;
      resp++;
    }
    if(n==1)
    {
      printf("%d\n", resp);
      return 0;
    }
  }

  resp+=n/2;
  if(n%2!=0)resp++;
  
  printf("%d\n", resp);
}
