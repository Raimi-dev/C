void invertePilha(PILHA* p){

PILHA pAux;

inicializarPilha(&pAux);

int aux=0;

if(pilhaVazia(p)){

printf("Pilha Vazia!\n");

return;

}

printf("\nPilha Invertida > ");

while(!pilhaVazia(p)){

push(&pAux,pop(p));

}

while(!pilhaVazia(&pAux)){

aux = pop(&pAux);

printf(" %d ",aux);

push(p,aux);

}

}
