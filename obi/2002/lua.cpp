#include <bits/stdc++.h>
using namespace std;


const int inf = 0x3f3f3f3f;
int main()
{
  int n, teste = 1, m;

  while(true){
    scanf("%d %d", &n, &m);

    if(!n and !m)break;

    vector<int> intervalos(n+1, 0);
    for(int i=1;i<=n;i++)
      scanf("%d", &intervalos[i]);
      
    int men = inf, mai=-1;

    for(int i=1; i<=n-m+1;i++)
    {
      int aux=0;
      for(int j=i;j<i+m;j++)
          aux+=intervalos[j];

      men = min(men, aux);
      mai = max(mai, aux);
    }
    double media1 = men/m;
    double media2 = mai/m;
    printf("Teste %d\n", teste++);
    printf("%.lf %.lf\n\n", media1, media2);
  }
}
