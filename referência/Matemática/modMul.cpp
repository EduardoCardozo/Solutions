long long modMul(long long a, long long b, long long m){
    long long ret = 0;
    a %= m;
    while (b){
        if (b & 1) ret = (ret + a) % m;
        a = (2 * a) % m;
        b >>= 1;
    }
    return ret;
}