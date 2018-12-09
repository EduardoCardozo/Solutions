class BIT {
private:
  vector<int> bit;
public:
  BIT(int n){bit.assign(n+1, 0);}
  void update(int i, int v){
    for(;i<=n;i+=i&-i)bit[i]+=v;
  }
  int query(int i)
  {
    int ans=0;
    for(;i;i-=i&-i)ans+=bit[i];
    return ans;
  }
  int query(int l, int r){return query(r)-query(l-1);}
  }
};
