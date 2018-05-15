#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, a, b;

  scanf("%d %d %d",&n, &b,&a);

  if(a==b)printf("0\n");
  else if(a<b)printf("%d\n",b-a);
  else printf("%d\n",n-a+b);

}
