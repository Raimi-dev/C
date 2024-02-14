#include<iostream>

int area(int base,int altura);

int main() {
	int a,b,ret;
	printf("\nDigite o valor da base do retângulo:""");
	scanf("%d", &b);
	printf("\nDigite o valor da altura do retâqngulo: ");
	scanf("%d", &a);
	
	ret = area (b,a);
	printf("\nArea do retânguloo = %d", ret);
	system("PAUSE");
}

int area(int base, int altura){
	int a;
	a = base * altura;
	return a;
}
