#include <bits/stdc++.h>
using namespace std;

int main()
{
  int maxc, n, resp =0;

  while(scanf("%d %d", &maxc, &n) != EOF)
  {
    resp = 0;
    map<int, int> cars;
    vector<int> est(maxc+1, 0);

    for(int i=0;i<n;i++)
    {
      char op;

      scanf("\n%c", &op);
      if(op=='C')
      {
        int x, y;
        scanf("%d %d", &x, &y);

        int zeros=0;
        for(int i=0;i<maxc;i++)
        {
          if(est[i]==0)
          {
            zeros++;
          }
          else
          {
            zeros=0;
            i+=cars[est[i]]-1;
          }
          if(zeros==y)
          {
            est[i-zeros+1]=x;
            cars.insert({x,y});
            resp+=10;
            break;
          }
        }
      }
      else
      {
        int x;
        scanf("%d", &x);
        for(int i=0;i<maxc;i++)
        {
          if(est[i]==x)
          {
            est[i]=0;
            cars.erase(x);
            break;
          }
        }
      }
    }
    printf("%d\n", resp);
  }
}
