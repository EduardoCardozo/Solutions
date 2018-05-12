#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int n;
  scanf("%d\n", &n);
  queue<char> chaves;
  int flag = 1;

  while(n--)
  {
    getline(cin, s);
    for(int i=0;i<(int)s.size();i++)
    {
      if(s[i] == '{')chaves.push('{');
      else if(s[i] == '}')
      {
        if(chaves.size()>0)chaves.pop();
        else flag = 0;
      }
    }
  }
  if(flag)
  {
    if(chaves.size()==0)printf("S\n");
    else printf("N\n");
  }
  else printf("N\n");
}
