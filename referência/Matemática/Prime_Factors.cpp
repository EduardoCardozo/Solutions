vector<long long> primeFac(long long n){
    vector<int> factors;
    long long idx = 0, prime_factors = primes[idx];
    while (prime_factors * prime_factors <= n){
        while (n % prime_factors == 0) {
            n /= prime_factors;
            factors.push_back(prime_factors);
        }
        prime_factors = primes[++idx];
    }
    if (n != 1) factors.push_back(n);
    return factors;
}