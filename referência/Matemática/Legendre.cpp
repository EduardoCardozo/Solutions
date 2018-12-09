
int legendre(int n, int p){
    int ret = 0, prod = p;
    while (prod <= n) {
        ret += n/prod;
        prod *= p;
    }
    return ret;
}