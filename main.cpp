#include <iostream>

int main()
{
	int x;
	int *pt;
	x = 10;
	pt = &x;
	printf("Valor de x: %d, Endere�o de x: %d\n", x, &x);
	printf("Valor de pt: %d, conte�do de pt:%d\n", pt, *pt);
	system("PAUSE");
}
