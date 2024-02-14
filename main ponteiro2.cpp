#include <stdlib.h>
#include <stdio.h>

int main()
{
int *pt;
pt = (int*)malloc(sizeof(int));

if(pt == NULL)
{
  printf("Memória insuficiente");
}
printf("Endereço de pt: %p\n", pt);
*pt = 5;
printf("Conteúdo de pt: %d\n", *pt);
free(pt);
system("PAUSE");
}

