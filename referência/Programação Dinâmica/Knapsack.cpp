



int dp[N];
int cost[N];
int w[N];
void solve(int n, int capacidade)//repete os itens
{
  for(int i=0;i<n;i++)
    for(int j=w[i];j<=val;j++)
      dp[j]=max(dp[j], cost[i]+dp[j-w[i]]);
}
void solve(int n, int capacidade)//não repete os itens
{
  for(int i=0;i<n;i++)
    for(int j=val;j>=w[i];j--)
      dp[j]=max(dp[j], cost[i]+dp[j-w[i]]);
}
