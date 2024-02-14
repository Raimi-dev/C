#include<iostream>

char altera(char &x, char &y, char &z, char &q)
{
	x = "Fernando";
	y = "Amanda";
	z = "Felipe";
	q = "Paula";
	
}

char main(){
	char a, b, c, d;
	a = "Paula";
	b = "Felipe";
	c = "Amanda";
	d = "Felipe";
	printf("\nValor de a: %s", a);
	printf("\nValor de b: %s", b);
	altera(a,b);
	printf("\nValor de a: %s", a);
	printf("\nValor de b: %s", b);
	system("PAUSE");
}
