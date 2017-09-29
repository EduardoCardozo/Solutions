#include <stdio.h>

int abs(int num) {
  if (num < 0)
    return -num;
  else 
    return num;  
}
int main(void)
{
	int A,B,C, maior;
	scanf("%d %d %d", &A, &B, &C);
	maior = (A + B + abs(A - B)) / 2;

	printf("%d eh o maior\n", (maior + C + abs(maior - C))/2);
	return 0;
}