#include<iostream>

int altera(int x, int y)
{
	x = 5;
	y = 15;
}

int main(){
	int a, b;
	a = 10;
	b = 20;
	printf("\nValor de a: %d", a);
	printf("\nValor de b: %d", b);
	altera(a,b);
	printf("\nValor de a: %d", a);
	printf("\nValor de b: %d", b);
	system("PAUSE");
}
