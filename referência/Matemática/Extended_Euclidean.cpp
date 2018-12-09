long long ExtendedEuclid(long long a, long long b, long long &x, long long &y) {
    if (a == 0) {
        x = 0, y = 1;
        return b;
    }
    else {
        long long ret = ExtendedEuclid(b % a, a, y, x);
        x -= y * (b / a);
        return ret;
    }
}