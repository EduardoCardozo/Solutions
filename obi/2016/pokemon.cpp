#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, v[10];

  scanf("%d %d %d %d", &n, &v[0], &v[1], &v[2]);

  sort(v, v+3);
  int qtd=0;


  if(n<v[0])
  {
    printf("0\n");
    return 0;
  }
  n-=v[0];
  if(n>=0)qtd++;

  n-=v[1];
  if(n>=0)qtd++;
  n-=v[2];
  if(n>=0)qtd++;

  printf("%d\n", qtd);
}
