class UnionFind{
private:
  vector<int> dad, sz;
public:
  UnionFind(int n){
    sz.assign(n+1, 1);
    dad.assign(n+1, 0);
    for(int i=0;i<=n;i++)dad[i]=i;
  }
  int find(int u){
    if(u==dad[u])return u;
    return dad[u]=find(dad[u]);
  }
  bool sameSet(int u, int v){
    return find(u)==find(v);
  }
  void join(int u, int v){
    u=find(u);v=find(v);
    if(u==v)return;

    if(sz[u]>sz[v])swap(u, v);
    sz[v]+=sz[u];
    dad[u]=v;
  }
};
