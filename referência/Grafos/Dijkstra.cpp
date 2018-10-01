
#define nd second
#define st first

using vi=vector<int>;
const int inf=0x3f3f3f3f, N=100001;

vector<pair<int, int> > adj[N];
int n;//número de vértices

vi dijkstra(int s)
{
  vi dis(n+1, inf), vis(n+1, 0);
  set<pair<int, int> > st;
  dis[s]=0;
  vis[s]=1;
  st.insert({0, s});

  while(!st.empty()){
    int u=st.begin()->nd;
    st.erase(st.begin());
    vis[u]=1;
    for(auto x:adj[u]){
      int v=x.nd;
      int w=x.st;
      if(!vis[v] and dis[u]+w<dis[v])
      {
        st.erase({dis[v], v});
        dis[v]=dis[u]+w;
        st.insert({dis[v], v});
      }
    }
  }
  return dis;
}
