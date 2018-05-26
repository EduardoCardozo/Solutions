#include <bits/stdc++.h>
using namespace std;

#define MAXN 10000
typedef pair<int, int> ii;
const int inf = 0x3f3f3f3f;
int main()
{
  int n;


  vector<ii> vii;

  scanf("%d", &n);

  for(int i=0;i<n;i++)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    vii.push_back({a, b});
  }
  vii.push_back({inf, 0});
  sort(vii.begin(), vii.end());
  for(int i=0;i<n;i++)
  {
    if(vii[i].second < vii[i+1].second)
    {
      printf("N\n");
      return 0;
    }
  }
  printf("S\n");
}
