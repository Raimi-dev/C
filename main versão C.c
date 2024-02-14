#include <stdio.h>
#include <math.h>

int potencia(int x, int y){
	if(y == 0)
	    return 1;
	else
	    return x * potencia(x, y - 1);
	
}

int main (){
	int y, x;
	
	printf("Digite o valor para x e y:");
	scanf("%d%d", &x, &y);
	
	printf("Resultado da potencia de base %d e expoente %d: %d\n", x, y, potencia(x, y));
	
	return 0;
}
