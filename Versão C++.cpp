#include<iostream>

int area(int base,int altura);

int main() {
	int a,b,ret;
	printf("\nDigite o valor da base do ret�ngulo:""");
	scanf("%d", &b);
	printf("\nDigite o valor da altura do ret�qngulo: ");
	scanf("%d", &a);
	
	ret = area (b,a);
	printf("\nArea do ret�nguloo = %d", ret);
	system("PAUSE");
}

int area(int base, int altura){
	int a;
	a = base * altura;
	return a;
}
