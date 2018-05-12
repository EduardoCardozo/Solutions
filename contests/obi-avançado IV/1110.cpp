#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n;

  while(true)
  {
    scanf("%d", &n);
    if(n==0)break;

    vector<int> r;
    queue<int>q;

    for(int i=1;i<=n;i++)q.push(i);

    while(q.size()>=2)
    {
      r.push_back(q.front());
      q.pop();
      q.push(q.front());
      q.pop();
    }
    printf("Discarded cards:");
    for(int i=0;i<(int)r.size();i++)
    {
      if(i==(int)r.size()-1)
      {
        printf(" %d\n", r[i]);
        break;
      }
      printf(" %d,", r[i]);
    }
    printf("Remaining card: %d\n", q.front());
  }
}
