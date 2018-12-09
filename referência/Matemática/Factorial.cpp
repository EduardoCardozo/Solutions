const int N = 1e7 + 7;
vector<long long> fat;
void preFat(long long m){
    fat.push_back(1);
    for (long long i = 1; i < N; ++i)
        fat.push_back((i * fat[i-1]) % m);
}