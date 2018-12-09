// A and M must be coprimes.
int modInverse(int a, int m){
    int _m = m;
    int y = 0, x = 1;

    if (m == 1) return 0;
    while (a > 1){
        int q = a/m;
        int t = m;

        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0) x += _m;
    return x;
}