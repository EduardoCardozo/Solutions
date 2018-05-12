#include <bits/stdc++.h>
using namespace std;

int main()
cin >> a >> b;
{
  string a, b;


  if(a==b)printf("0\n");
  else{
    if(a=="norte"){
      if(b=="sul")printf("180\n");
      else printf("90\n");
    }
    else if(a=="sul"){
      if(b=="norte")printf("180\n");
      else printf("90\n");
    }
    else if(a=="leste"){
      if(b=="oeste")printf("180\n");
      else printf("90\n");
    }
    else{
      if(b=="leste")printf("180\n");
      else printf("90\n");
    }
  }
}
