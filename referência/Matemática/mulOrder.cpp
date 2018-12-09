
int mulOrder(int x, int y){
    if (__gcd(x, y) != 1) return -1;
    int ret = 1, k = 1;
    while (k < y){
        ret = (ret * x) % y;
        if (ret == 1) return k;
        ++k;
    }
    return -1;
}