#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if(n>50)printf("Top 100\n");
  else if(n>25)printf("Top 50\n");
  else if(n > 10)printf("Top 25\n");
  else if(n>5)printf("Top 10\n");
  else if(n>3)printf("Top 5\n" );
  else if(n > 1)printf("Top 3\n");
  else printf("Top 1\n");
}
