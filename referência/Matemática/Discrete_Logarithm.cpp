int baby(int x, int y, int mod){
    int n = sqrt(m + .0) + 1;
    int xn = 1;
    for(int i = 0; i < n; ++i)
        xn = (xn * x) % mod;
    map<int, int> vals;
    for(int i = 1, cur = xn; i <= n; ++i){
        if (!vals.count(cur))
            vals[cur] = i;
        cur = (cur * xn) % mod;
    }
    for (int i = 0; cur = y, i <= n; ++i){
        if (vals.count(cur)){
            int ret = vals[cur] * n - i;
            if (ret < m) return ret;
        }
        cur = (cur * x) % mod;
    }
    return -1;
}