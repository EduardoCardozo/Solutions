#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  set<string> resposta;
  while(cin >> s)
  {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    string aux;
    for(int i=0;i<(int)s.size();i++)
    {
      if(s[i]>='a' and s[i]<='z')
          aux+=s[i];
      else
      {
        if(aux.size()>0)resposta.insert(aux);

        aux.clear();
      }
    }
    if(aux.size()>0)resposta.insert(aux);
  }
  for(auto x:resposta)
    cout << x << endl;

}
