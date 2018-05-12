#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  set<int> s;

  int n;
  scanf("%d", &n);

  for(int i =0; i<n;i++)
  {
    int a;
    scanf("%d", &a);
    s.insert(a);
  }
  printf("%d\n", (int)s.size());
}
