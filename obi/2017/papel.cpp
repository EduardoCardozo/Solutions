#include <bits/stdc++.h>
using namespace std;

int n;

vector<int> papel;
vector< pair<int, int> > pcvl;

int main()
{
  int h=0;

  scanf("%d", &n);

  papel.push_back(0);

  for(int i=1;i<=n;i++)
  {
    scanf("%d", &h);

    if(h != papel[i-1])
      papel.push_back(h);
  }

  papel.push_back(0);

  for(int i = 1;i<(int)papel.size()-1;i++)
  {
    if(papel[i] > papel[i-1] and papel[i] > papel[i+1])
      pcvl.push_back({papel[i], -1});

    if(papel[i] < papel[i-1] and papel[i] < papel[i+1])
      pcvl.push_back({papel[i], 1});
  }

  sort(pcvl.begin(), pcvl.end());

  int qtdpedacos = 2, resp =2;
  for(int i=0;i<(int)pcvl.size();i++)
  {
    qtdpedacos += pcvl[i].second;
    resp = max(resp, qtdpedacos);
  }

  printf("%d\n", resp);

  return 0;
}
