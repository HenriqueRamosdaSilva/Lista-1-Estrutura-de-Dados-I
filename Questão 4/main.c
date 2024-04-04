#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int matriz[10][10];
	int maiorv=matriz[0][0], ml=0,mc=0;
	int x=0;
	int y=0;
	
	printf("Insira os valores da matriz:");
	for(x=0;x<10;x++){
		for(y=0;y<10;y++){
		scanf("%d",&matriz[x][y]);			
		
			if(matriz[x][y]>maiorv){
			maiorv=matriz[x][y];
			ml=x;
			mc=y;
			}
			
		}
	}
	
	printf("O maior valor e %d e esta na linha %d coluna %d.", maiorv,ml+1,mc+1);
	
	
	return 0;
}
