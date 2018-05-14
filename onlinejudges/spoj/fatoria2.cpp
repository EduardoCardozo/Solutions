#include <bits/stdc++.h>
using namespace std;

int fat(int a){
  if(a < 2)return 1;

  return a*fat(a-1);
}
int main()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", fat(n));
}
