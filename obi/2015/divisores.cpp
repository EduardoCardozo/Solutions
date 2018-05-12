#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, resp =0;
  scanf("%d", &n);

  for(int i=1;i<=n;i++)
    if(n%i==0)resp++;

  printf("%d\n", resp);
}
