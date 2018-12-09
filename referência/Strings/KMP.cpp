const int N = 1e5 + 5;
char T[N], P[N];
int n, m;
vector<int> b;

void kmpPre(){
    int i = 0, j = -1;
    b.push_back(-1);
    while (i < m){
        while (j >= 0 && P[i] != P[j]) j = b[j];
        ++i;
        ++j;
        b[i] = j;
    }
}
void kmpSearch(){
    int i = 0, j = 0;
    while (i < n){
        while (j >= 0 && T[i] != P[j]) j = b[j];
        i++;
        j++;
        if (j == m){
            printf("P is found at index %d int Text\n", i - j);
            j = b[j];
        }
    }
}
