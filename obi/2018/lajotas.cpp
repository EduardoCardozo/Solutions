#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, c, tipo1, tipo2;

    scanf("%d%d", &l, &c);
    
    tipo1 = l*c +(l-1)*(c-1);
    tipo2 = 2*(l-1)+ 2*(c-1);

    printf("%d\n%d\n", tipo1, tipo2);
}
