#include <bits/stdc++.h>
using namespace std;


bool compara(string maior, string c)
{
  for(int i =0; i<20;i++)
    if(maior.compare(i, 10, c) == 0)
      return true;

  return false;
}



vector<string> cods;
int main()
{
  int n;
  scanf("%d\n", &n);
  string x;
  for(int i=0;i<n;i++)
  {
    cin >> x;
    cods.push_back(x);
  }
  if(n==1)printf("ok\n");
  else if(n==2)
  {
    if(cods[0].compare(cods[1])==0)
      cout << cods[1] << endl;
    else
      printf("ok\n");
  }
  else
  {
    for(int i=2;i<n;i++)
    {
      for(int j =0;i<i;i++)
      {
        for(int k=)
      }
    }
  }
}
