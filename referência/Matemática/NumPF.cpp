long long nPrimeFac(long long n){
    long long idx = 0, prime_factors = primes[idx], ans = 0;
    while (prime_factors * prime_factors <= n){
        while (n % prime_factors == 0) {
            n /= prime_factors;
            ans++;
        }
        prime_factors = primes[++idx];
    }
    if (n != 1) ans++;
    return ans;
}