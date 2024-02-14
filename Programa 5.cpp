#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf("digite um numero: ");
    int numero;
    scanf("%d",&numero);
    if(numero < 5) {
    	printf("O número digitado é menor que 5.\n\n");
    } else {
    	printf("O número digitado é maior que 5.\n\n");
	}
	system("PAUSE");
	return 0;
}
