#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, m, t;
  scanf("%d", &t);

  for(int i=0;i<t;i++)
  {
    string s, a;
    map<string, string> dic;

    scanf("%d %d", &m, &n);

    cin.ignore();

    for(int j = 0;j<m;j++)
    {
      getline(cin, s);
      getline(cin, a);

      dic[s]=a;
    }

    for(int j = 0;j<n;j++)
    {
      string aux , a, resp;

      getline(cin , a);

      stringstream iss(a);

      bool f=true;

      while(iss>>aux){

        if(f)f=false;
        else cout << ' ';

				if(dic.find(aux)==dic.end())
			      cout << aux;
				else
					cout << dic[aux];
			}
      cout << endl;
    }
    cout << endl;
  }
}
