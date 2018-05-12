#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
bool cmp(int a, int b){return a>b;}

int digx[20], digy[20];

bool cmpdig(ll y)
{
    memset(digy, 0, sizeof(digy));

    string ys = to_string(y);

    for(int i = 0; i < (int)ys.size();i++)
        digy[ys[i]-'0']++;

    for(int i = 0; i < (int)ys.size();i++)
        if(digy[i] != digx[i])return false;

    return true;
}


int main()
{
    ll ix, lo, hi;
    int resp = 0;

    string x;

    cin >> x;
    for(int i = 0; i <  (int)x.size();i++)
        digx[x[i]-'0']++;

    ix = stoll (x);

    sort(x.begin(), x.end(), cmp);

    hi = ix + stoll (x);

    sort(x.begin(), x.end());

    if(x[0] =='0')
    {
        int i;
        for(i =1; i<(int)x.size() and x[i]=='0';i++);
        swap(x[0], x[i]);
    }
    lo = ix+stoll(x);

    for(ll i = floor(sqrt(lo)); i <= ceil(sqrt(hi));i++)
        if(i*i>=lo and i*i <= hi)
            if(cmpdig(i*i-ix)==1)resp++

    printf("%d\n", resp);


}
