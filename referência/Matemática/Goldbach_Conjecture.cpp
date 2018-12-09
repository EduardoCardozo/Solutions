
vector<pair<int, int> > Goldbach(int n){
    int ret = 0;
    for(int i = 2; i <= n/2; ++i)
        if (primes[i] && primes[n - i]){
               g.emplace_back(i, n - i);
        }
    return g;
}