#include <stdio.h>
int main(void)
{
	int seg, hora, minuto;
	scanf("%d", &seg);

	hora = seg / 3600;
	minuto = (seg % 3600) / 60;
	seg = (seg % 3600) % 60;

	printf("%d:%d:%d\n", hora, minuto, seg);
	return 0;
}