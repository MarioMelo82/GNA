#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
const int a = 34;
const int b = 91;
const int m = 78;
int Congruencial(int num, int qtd){
	int /*a = 34, b = 91, m = 78,*/ x, aux;
	puts("\n          **GNA-CONGRUENCIAL**");
	for(int i=0; i<qtd; i++){
		if(i==0){
			x = (a * num + b) % m;
			printf("\n\t    --Semente: %d--\n",num);
			printf("\n\t    x\t  nE\t NA\n");
			printf("\n\t    x%d\t %d\t %d",i+1,num,x);
		}
		else{
			aux=x;
			x = (a * aux + b) % m;
			printf("\n\t    x%d\t %d\t %d",i+1,aux,x);
		}
	}
	puts("\n\t  ********************\n\t\t Dados:");
	printf("     |a  = %d | \t|b  = %d |\n     |m  = %d | \t|SE = %d|",a,b,m,num);
}

int main( ){
	setlocale(LC_ALL,"ptb");
	int n, qtd;
	printf("\nInforme uma Semente (SE): ");
	scanf("%d",&n);
	printf("Qnt de n�meros aleat�rios: ");
	scanf("%d",&qtd);
	system("cls");
	Congruencial(n, qtd);

	return 0;	 
}

