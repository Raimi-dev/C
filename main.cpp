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
	
	printf("Digite o valor parax e y");
	scanf("%d%d", &x, &y);
	
	printf("Resultado da potenciação:", x, y, potencia(x, y));
	
	return 0;
}
