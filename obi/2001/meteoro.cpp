#include <bits/stdc++.h>
using namespace std;

int main()
{
  int teste = 1;
  while(true)
  {
    int x1,x2,y1,y2,n,resp = 0;

    scanf("%d %d %d %d", &x1,&y1,&x2,&y2);

    if(!x1 and !x2 and !y1 and !y2)break;
    scanf("%d", &n);

    while(n--)
    {
      int x, y;
      scanf("%d %d", &x, &y);
      if(x >= x1 and y<=y1 and x<=x2 and y>=y2)
        resp++;
    }
    printf("Teste %d\n", teste++);
    printf("%d\n", resp);
  }
}
