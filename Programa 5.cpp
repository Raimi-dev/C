#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf("digite um numero: ");
    int numero;
    scanf("%d",&numero);
    if(numero < 5) {
    	printf("O n�mero digitado � menor que 5.\n\n");
    } else {
    	printf("O n�mero digitado � maior que 5.\n\n");
	}
	system("PAUSE");
	return 0;
}
