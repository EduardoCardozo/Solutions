bool MillerRabin(long long n, long long a){
    if (n < 1) return 0;
    long long s = __builtin_ctzll(n-1);
    long long d = (n - 1) >> d, x = modExp(a, d, n);
    if (x == 1) return true;
    for (int i = 0; i < s; ++i){
        if (x == 1) return false;
        if (x == n - 1) return true;
        x = modMul(x, x, n);
    }
    return false;
}