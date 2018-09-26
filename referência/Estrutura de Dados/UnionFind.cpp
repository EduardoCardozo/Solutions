

class UnionFind{

private:
  vector<int> dad, sz;
public:
  UnionFind(int n){
    sz.assign(n+1, 1);
    dad.assign(n+1, 0);

    for(int i=0;i<=n;i++)dad[i]=i;
  }
  int find(int x){
    if(x==dad[x])return x;
    return dad[x]=find(dad[x]);
  }
  bool sameSet(int u, int v){
    return find(u)==find(v);
  }
  void join(int a, int b){
    a=find(a);b=find(b);
    if(a==b)return;

    if(sz[a]>sz[b])swap(a, b);
    sz[b]+=sz[a];
    dad[a]=b;
  }
};
