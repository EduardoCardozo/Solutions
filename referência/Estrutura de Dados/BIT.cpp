class BIT {
private:
  vector<int> bit;
public:
  BIT(int n){bit.assign(n+1, 0);}
  int query(int i, int ans=0)
  {
    for(;i>0;i-=i&-i)ans+=bit[i];
    return ans;
  }
  int query(int i, int j){return query(j)-query(i-1);}
  void update(int i, int v){
      for(;i<=n;i+=i&-i)bit[i]+=v;
    }
  }
};
