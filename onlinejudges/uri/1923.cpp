#include <bits/stdc++.h>
using namespace std;

#define MAXN

vector<int> g[MAXN];
map<string, vector<string>> v;


int main()
{
  int n, g, m =0;

  scanf("%d %d", &n,&g);

  for(int i =0;i<n;i++)
  {
    string s, p;
    cin >> s >> p;

    if(v.find(s)==v.end())
      v.insert({s, m++});
    if(v.find(p)==v.end())
      v.insert({p, m++});
  }
  printf("%d", m);
}
