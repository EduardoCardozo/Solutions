long long modExp(long long a, long long e, long long m){
    long long ret = 1;
    a %= m;
    while (e > 0){
        if (e & 1) ret = (ret * a) % m;
        e >>= 1;
        a = (a * a) % m;
    }
    return ret;
}