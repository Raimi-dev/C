#include <stdlib.h>
#include <stdio.h>

int main()
{
int *pt;
pt = (int*)malloc(sizeof(int));

if(pt == NULL)
{
  printf("Mem�ria insuficiente");
}
printf("Endere�o de pt: %p\n", pt);
*pt = 5;
printf("Conte�do de pt: %d\n", *pt);
free(pt);
system("PAUSE");
}

