#include <bits/stdc++.h>
using namespace std;

#define MAXM 10000
#define MAXN 1000

int pai[MAXN], sz[MAXN];
int n, m;

void iniset(int n)
{
  for(int i=1;i<=n;i++)
  {
    pai[i]=i;
    sz[i] = 1;
  }
}
int find(int n){
  if(pai[n]==n)return n;
  return pai[n]= find(pai[n]);
}
void unionpai(int a, int b)
{
  a=find(a);
  b=find(b);

  if(a==b)return;
  if(sz[a]>=sz[b]){
    pai[b]=a;
    sz[a] += sz[b];
  }
  else if(sz[a]<sz[b]){
    pai[a]=b;
    sz[b] += sz[a];
  }

}
typedef struct aresta
{
  int x, y, w;

  bool operator <(aresta a){return w < a.w;};
}aresta;

aresta arestas[MAXM];

//bool cmp(aresta a, aresta b){return a.w <= b.w;}
int main()
{
  int test =1;

  while(true)
  {
    scanf("%d %d", &n,&m);
    if(n==0)break;

    iniset(n);
    for(int i = 0; i < m;i++)
      arestas[i].x = arestas[i].y = arestas[i].w = 0;


    for(int i=0; i<m;i++)
      scanf("%d %d %d", &arestas[i].x, &arestas[i].y, &arestas[i].w);

    sort(arestas, arestas+m);

    printf("Teste %d\n", test++);

    for(int i=0;i<m;i++)
    {
      int a = arestas[i].x;
      int b = arestas[i].y;

      if(find(a)!=find(b))
      {
        printf("%d %d\n", min(a, b),max(a,b));
        unionpai(a, b);
      }
    }
    printf("\n");
  }
  return 0;
}
