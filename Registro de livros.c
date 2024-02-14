#include <stdio.h>
#include <string.h>

int main(){
    char nome[15];
    int codigo[30];
    int qtd_paginas[30];

printf("Digite o nome do livro: ");
scanf("%s", nome);
printf("Digite seu codigo: ");
scanf("%d", &codigo);
printf("Digite a quantidade de paginas: ");
scanf("%d", &qtd_paginas);

printf("EXIBIR:");
printf("\nNome do livro: %s", nome);
printf("\nCodigo do livro: %d", codigo);
printf("\nQuantidade de paginas: %d", qtd_paginas);
}
