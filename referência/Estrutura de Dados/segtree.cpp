#include<bits/stdc++.h>
using namespace std;

const int N= 1e5;

const int neutral=0;
int op(int a, int b){
  return min(a, b);
}

class SegmentTree{

  int t[4*N];
  int n;
public:
  SegmentTree(vector<int> &st){
    n=st.size();
    memset(t, 0, sizeof t);
    build(0, n-1, 1, st);
  }

  void build(int l, int r, int u)
  {
    if(l==r){t[l]=v[l];return;}
    int m=(l+r)>>1;
    int lc=u+u, rc=lc+1;
    build(l, m, lc);
    build(m+1, r, rc);
    t[u]=op(t[lc], t[rc]);
  }
  void modify(int l, int r, int u, int i, int x){
    if(l==r){t[u]=x;return;}
    int m=(l+r)>>1;
    int lc=u+u, rc=lc+1;

    if(i<=m)modify(l, m, lc, i, x);
    else modify(m+1, r, rc, i, x);

    t[u]=op(t[lc], t[rc]);
  }
  void modify(int i, int x){
    modify(0, sz-1, 1, i, x);
  }
  int query(int l, int r, int u, int a, int b){
    if(a==l ans r==b)return t[u];
    int m=(l+r)>>1;
    int lc=u+u, rc=lc+1;
    if(b<=m)
      return query(l, m, lc, a, b);
    else if(a>m)
      return query(m+1, r, rc, a, b);

    return op(query(l, m, lc, a, m), query(m+1, r, rc, m+1, b));
  }
  int query(int l, int r){
    return query(0, sz-1, 1, l, r);
  }
};

int main()
{
  vector<int> v{1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  SegmentTree st(v);
  printf("%d\n", st.query(0, 10));
}
