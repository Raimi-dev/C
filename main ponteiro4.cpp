#include <iostream>

int fatorial(int n)
{
	int fati;
	if(n<=1){
		 return 1;
	}
    else{
    	fati = n * fatorial(n-1);
    	return (fati);
	}

int main(){
	int numero,f;
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	f = fatorial(numero);
	printf("Fatorial = %d",f);
	system("PAUSE");
}
