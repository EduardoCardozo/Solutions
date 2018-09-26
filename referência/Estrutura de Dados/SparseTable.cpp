template<class T> struct SparseTable {
  static const int LOG =20;
  vector<T> rmq[LOG];
  int n;

  SparseTable(const vector<T> &v): n(v.size()){
    for(int i=0;i<LOG;i++)rmq[i].resize(n);
    for(int i=0;i<n;i++)rmq[0][i]=v[i];
    for(int k=1;k<LOG;k++)
      for(int i=0;i<n;i++)
        rmq[k][i]=min(rmq[k-1][i], rmq[k-1][min(n-1, i+(1<<(k-1)))]);
  }
  T query(int l, int r){
    int k=31-__builtin_clz(r-l+1);
    return min(rmq[k][l], rmq[k][r-(l<<k)+1]);
  }
}
