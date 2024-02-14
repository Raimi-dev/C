#include <iostream>

struct ficha_de_aluno
{
   char nome[50];
   char disciplina[30];
   float media;
}
aluno;

int main()
{
	printf("\nDigite o nome do aluno: ");
	gets(aluno.nome);
	printf("\nDigite o nome da disciplina: ");
	gets(aluno.disciplina);
	printf("\nDigite a media: ");
	scanf("%f", &aluno.media);
	printf("\n\n **** Dados da Struct ****\n\n");
	printf("Nome do aluno: %s", aluno.nome);
	printf("\nDisciplina ...... %s", aluno.disciplina);
	printf("\nMedia: %f", aluno.media);
}
