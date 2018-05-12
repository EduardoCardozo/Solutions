#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;

  while(true)
  {
    scanf("%d %d", &n, &m);
    if(n==0)break;

    set<int> s1, s2;

    while(n--)
    {
      int a;
      scanf("%d", &a);
      s1.insert(a);
    }

    while(m--)
    {
      int a;
      scanf("%d", &a);
      s2.insert(a);
    }
    int resp = 0;
    if(s1.size() < s2.size())
    {
      for(auto x:s1)
        if(s2.find(x)==s2.end())resp++;
    }
    else
    {
      for(auto x:s2)
        if(s1.find(x)==s1.end())resp++;
    }
    printf("%d\n", resp);
  }
}
