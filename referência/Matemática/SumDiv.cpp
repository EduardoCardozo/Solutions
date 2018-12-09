long long nPrimeFac(long long n){
    long long idx = 0, prime_factors = primes[idx], ans = 1;
    while (prime_factors * prime_factors <= n){
        long long power = 0;
        while (n % prime_factors == 0) {
            n /= prime_factors;
            power++;
        }
        ans *= ((long long)pow((double)prime_factors, power + 1.0) - 1)/ (prime_factors - 1);
        prime_factors = primes[++idx];
    }
    if (n != 1) ans *= ((long long)pow((double)n, 2.0) - 1)/ (n - 1);
    return ans;
}