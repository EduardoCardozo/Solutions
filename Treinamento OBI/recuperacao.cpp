#include <bits/stdc++.h>
using namespace std;

bool solve(int test){
  int n;
  if(scanf("%d", &n)==EOF)return false;
  vector<int> v(n);
  for(int i=0;i<n;i++)scanf("%d", &v[i]);

  printf("Instancia %d\n", test);
  int sum=0;
  for(int i=0;i<n;i++){
    if(sum==v[i]){
      printf("%d\n\n", v[i]);
      return true;
    }
    sum+=v[i];
  }
  printf("nao achei\n\n");
  return true;
}
int main(){
  int test=1;
  while(solve(test++));
}
