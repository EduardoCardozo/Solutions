#include <stdio.h>

int main()
{
  int c1;

  for(int i=1;i<=4;i++)
    {
      scanf("%d", &c1);
      if(c1)printf("%d\n", i);
    }
}
