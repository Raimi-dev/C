#include <iostream>
int altera (int &x, int &y)
{
	x = 15;
	y = 20;
}
int main()
{
	int a, b;
	a = 5;
	b = 10;
	printf("\nValor de a: %d ", a);
	printf("\nValor de b: %d ", b);
	altera (a,b);
	printf("\nValor de a: %d", a);
	printf("\nValor de b: %d", b);
	system ("PAUSE");
}
