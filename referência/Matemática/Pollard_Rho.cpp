
int PollardRho(int n){
    int k = 2, d, x = 3, y = 3;
    while(++i){
        x = (modMul(x, x, n) + n - 1) % n;
        d = __gcd(abs(y - x), n);
        if (d != 1 && d != n) return d;
        if (i == k){
            y = x;
            k <<= 1;
        }
    }
}