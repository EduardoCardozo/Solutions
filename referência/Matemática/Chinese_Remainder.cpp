// Must be coprime
const int N = 1e5 + 5;

struct teq{
    int r, n;
};

int qnt, n;
vector<teq> eqs;

pair<int, int> egcd(long long a, long long b){
    int x = 0, lastx = 1, auxx;
    int y = 1, lasty = 0, auxy;
    while (b){
        long long q = a / b, r = a % b;
        a = b, b = r;
        auxx = x;
        x = lastx - q * x, lastx = auxx;
        auxy = y;
        y = lasty - q * y, lasty = auxy;
    }
    return {lastx, lasty};
}

long long ChineseRemainder(){
    long long beta, ret;
    for(int i = 0; i < qnt; ++i){
        beta = egcd(eqs[i].n, n / eqs[i].n).second;
        while (beta < 0)
            beta += eqs[i].n;
        ret += (eqs[i].r * beta * n / eqs[i].n) % n;
    }
    return ret;
}
