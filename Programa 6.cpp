#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculo(void) {
	int valor= 20 / 4;
	printf("O resultado da divisão é %d\n\n",valor);
	system("PAUSE");
	return 0;
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	calculo();
	system("PAUSE");
	return 0;
}
