
int dp[N],cost[N], w[N];
void solve(int n, int val)//repete os itens
{
  for(int i=0;i<n;i++)
    for(int j=w[i];j<=val;j++)
      dp[j]=max(dp[j], cost[i]+dp[j-w[i]]);
}
void solve(int n, int val)//não repete os itens
{
  for(int i=0;i<n;i++)
    for(int j=val;j>=w[i];j--)
      dp[j]=max(dp[j], cost[i]+dp[j-w[i]]);
}
