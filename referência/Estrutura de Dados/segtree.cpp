#include<bits/stdc++.h>
using namespace std;

const int N= 1e5;

const int neutral=0;
int comp(int a, int b){
  return min(a, b);
}

class SegmentTree{

  vector<int> a;
  int n;
public:
  SegmentTree(vector<int> &st){
    n=st.size();
    a.assign(N<<1, neutral);

    for(int i=0;i<n;i++)a[i+n]=st[i];

    for(int i=n-1;i>0;i--)
      a[i]=comp(a[i<<1], a[i<<1|1]);
  }
  void modify(int i, int x){
    for(a[i+=n]=x; i>>=1;)
      a[i]=comp(a[i<<1], a[i<<1|1]);
    }
  int query(int l, int r){
    int ansl=neutral;
    int ansr=neutral;
    for(l+=n, r+=n;l<r;l>>=1, r>>=1){
      if(l&1)ansl=comp(ansl, a[l++]);
      if(r&1)ansr=comp(ansr, a[--r]);
    }
    return comp(ansl, ansr);
  }
};

int main()
{
  vector<int> v{1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  SegmentTree st(v);

  printf("%d\n", st.query(0, 10));
}
