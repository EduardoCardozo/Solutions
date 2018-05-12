#include <bits/stdc++.h>
using namespace std;

int fat(int n)
{
  if(n == 1)return 1;
  return n*fat(n-1);
}
int main()
{
  int n;
  scanf("%d", &n);
  set<string>dale;
  int s = fat(n);
  string aux;

  for(int i =0;i<s;i++)
  {
    string x, r;
    getline(cin, x);

    for(int i=0;i<(int)x.size();i++)
      if(x[i]!=' ')r+=x[i];
    aux = r;

    dale.insert(r);
  }
  if(n>2)
    while(next_permutation(aux.begin(), aux.end()))
    {
      if(dale.find(aux)==dale.end())
      {
        for(int i=0;i<(int)aux.size();i++)
          printf("%c ", aux[i]);
        break;
      }
    }
  else
  {
    next_permutation(aux.begin(), aux.end());
    printf("%c %c ", aux[0], aux[1]);
  }

  printf("\n");
}
