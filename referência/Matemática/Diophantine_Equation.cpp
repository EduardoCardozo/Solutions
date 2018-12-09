bool DioEq(long long a, long long b, long long c, long long &x, long long &y){
    long long d = ExtendedEuclid(abs(a), abs(b));
    if (c % d) return false;
    x *= c / d;
    y *= c / d;
    if (a < 0) x = -x;
    if (b < 0) y = -y;
    return true;
}