#include <bits/stdc++.h>
using namespace std;

int tab[6][6], vis[6][6];
int dx[]{1, 0, -1, 0};
int dy[]{0, 1, 0, -1};

bool safe(int i, int j){
  if(i<0 || i>4 || j<0 || j>4)return false;
  if(tab[i][j])return false;
  if(vis[i][j])return false;
  return true;
}

bool backtracking(int i, int j){
  if(i==4 && j==4)return true;

  for(int k=0;k<4;k++){

    int ii=i+dx[k], jj=j+dy[k];

    if(safe(ii, jj)){
      vis[ii][jj]=1;
      if(backtracking(ii, jj))return true;
      vis[ii][jj]=0;
    }
  }
  return false;
}

void solve(){
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
      scanf("%d", &tab[i][j]);

  memset(vis, 0, sizeof vis);
  if(backtracking(0,0))printf("COPS\n");
  else printf("ROBBERS\n");
}
int main(){
  int t;scanf("%d", &t);
  while(t--)solve();
}
