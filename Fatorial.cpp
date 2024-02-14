int fatorial(int n)//Função recursiva que calcula o fatorial
{
	int fati;
	if(n<=1){//Caso base: fatorial de n <= 1 retorna 1
		return 1;
	else{
		fati = n * fatorial(n-1);//Chamada recursiva
		return (fati);
	}
}

int main()
{
  int numero,f;
  printf("Digite um numero: ")
  scanf("%d",&numero);
  f = fatorial(numero); //chamada da função fatorial
  printf("Fatorial = %d",f);
  system("PAUSE");
}
