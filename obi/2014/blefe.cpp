#include <bits/stdc++.h>
using namespace std;

#define MAXN 10010

int a[MAXN], n;


int bb(int x)
{
  int lo=0, hi=n-1;

  while(lo<=hi)
  {
    int mid = (lo+hi)/2;

    if(a[mid] == x)return mid;
    else if(a[mid] < x)lo = mid+1;
    else hi = mid-1;
  }
  return -1;
}

int main()
{
  int m;
  multiset<int> b;
  scanf("%d %d", &n, &m);

  for(int i=0;i<n;i++)
    scanf("%d", &a[i]);

  sort(a, a+n);

  for(int i=0;i<m;i++)
  {
    int x;
    scanf("%d", &x);
    b.insert(x);
  }

  bool resp = true;
  for(multiset<int>::iterator it = b.begin(); it!=b.end();it++)
  {
    if(bb(*it)==-1)
    {
      for(multiset<int>::iterator jt=b.begin(); jt!=b.end();jt++)
      {
        if(b.find(*it-*jt)!=b.end())
        {
          resp=true;
          break;
        }
        else resp = false;
      }
      if(!resp)
      {
        printf("%d\n", *it);
        return 0;
      }
    }
  }
  printf("sim\n");
}
