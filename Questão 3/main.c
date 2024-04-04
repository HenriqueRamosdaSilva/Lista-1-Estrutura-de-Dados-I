#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void imprimirTabuleiro(char tabuleiro[][3]) {
    int i=0,j=0;
    
	printf("\n  1 2 3\n");
    for (i=0; i<3; i++) {
        printf("%d ", i+1);
        for (j=0; j<3; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
} 

int main() {
	int l,c,m=-1;
	char j1='X' , j2='O';
	char tabuleiro[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
	while( m < 8 ){
	
	 printf("Inserir a linha e a coluna dando um espaco entre elas  %c :", j1);
        scanf("%d %d", &l, &c);
        
        if (tabuleiro[l-1][c-1]==' '){
        	tabuleiro[l-1][c-1] = j1;
        	;
		};
        
		imprimirTabuleiro(tabuleiro);
		
		
			 printf("Inserir a linha e a coluna dando um espaco entre elas  %c :", j2);
        scanf("%d %d", &l, &c);
        
        if (tabuleiro[l-1][c-1]==' '){
        	tabuleiro[l-1][c-1] = j2;
        	;
        	
		}
			else{
				printf(" Lugar oculpado \nInserir a linha e a coluna dando um espaco entre elas  %c :", j2);
        	scanf("%d %d", &l, &c);
        
        	if (tabuleiro[l-1][c-1]==' '){
        		tabuleiro[l-1][c-1] = j2;
        		;
			};
			}
		imprimirTabuleiro(tabuleiro);
		m = m+2
		;
	};
	return 0;
	
}
