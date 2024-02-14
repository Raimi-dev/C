#include <iostream>

struct registro_de_livro
{
	char nome[25];
	int codigo[25];
	int qnt_paginas[500];
}
livro;

int main()
{
	printf("Exibir");
	printf("\nDigite o nome do livro: ");
	gets(livro.nome);
	printf("\nDigite o codigo do livro: ");
	gets("%d");
	printf("\nDigite a quantidade de paginas: ");
	gets("%d");
}
