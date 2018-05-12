#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int n, qtd;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    qtd =0;
    queue<char> q;
    cin >> s;

    for(int j=0;j<(int)s.size();j++)
    {
      if(s[j]=='<')
        q.push(s[j]);
      else if(s[j]=='>' and q.size()>0)
      {
          q.pop();
          qtd++;
      }
    }
    printf("%d\n", qtd);
  }
}
