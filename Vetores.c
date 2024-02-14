#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(int argc, char *argv[]) {

    int vet[TAM] = {10, 20, 30, 40, 50};
    int i;
    
    for(i=0;i<TAM;i++){
    	printf("%d ", vet[i]);
	}
	printf("\n");
	
	system("pause");
	
	return 0;
}
