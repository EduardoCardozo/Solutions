#include <stdio.h>
#define MAX 1000
int main()
{
    int j, r, ponto, player[MAX], davez = 1, maior = -1, vencedor = 0;
    
    scanf("%d %d", &j, &r);

    for(int i = 0; i < j*r;i++){
     
        scanf("%d", &ponto);
        player[i%j] += ponto;
       
    }

    for(int i = 0; i < j;i++)
         if(player[i] >= maior)
            {  
                maior = player[i];
                vencedor = i;
            }
    printf("%d\n", vencedor+1);
    
    return 0;
}