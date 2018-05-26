#include <bits/stdc++.h>
using namespace std;

const int inf =0x3f3f3f3f;

int main()
{
  int n;
  scanf("%d", &n);

  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int a;
    scanf("%d",&a);
    v.push_back(a);
  }

  int menor =inf;
  for(int i=1;i<=6;i++)
  {
    int qtd=0;
    for(int j=0;j<n;j++)
    {
      if(v[j]==i)continue;
      if(v[j]+i==7)qtd+=2;
      else qtd++;
    }
    menor = min(menor, qtd);
  }
  printf("%d\n", menor);
}
