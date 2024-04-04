#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n =0;
	int vetor[n];
	int i =0;
	char resultado;
	printf("Insira a quantidade de numeros que deseja analizar?");
	scanf("%d",&n);
	
	printf("Inserir os numeros que deseja analizar:");
		for (i=0; i < n ;i++){
			scanf("%d",&vetor[i]);
		};
		
	for (i=0; i < n ;i++){
		if(vetor[i]> vetor[i+1]){
			printf("Sim");
			break;
		}
		else {
			printf("Nao");
			break;
		}
	};
	
	
	return 0;
}
