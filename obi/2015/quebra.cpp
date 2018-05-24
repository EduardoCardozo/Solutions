#include <bits/stdc++.h>
using namespace std;

#define nd second
#define st first

string resp;
map<int, pair<char, int> > m;

string monta(int x)
{
  if(x==1)return resp;
  resp+=m[x].st;
  return monta(m[x].nd);
}

int main()
{
  int n;
  scanf("%d", &n);

  for(int i=0;i<n;i++)
  {
    int a,b;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    m.insert({a, {c, b}});
  }
  cout << monta(0) << endl;
}
