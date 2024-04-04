#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct banda{
	
	char nome[100];
	char tipodemusica[100];
	int numerodeintegrantes;
	int posicaodoranking;
	
};
int main() {

	struct banda minhabanda={"Neffex","Hip-Hop/rap",2,3};
	
	printf("Nome da banda: %s\n",minhabanda.nome);
	printf("Tipo de Musica: %s\n",minhabanda.tipodemusica);
	printf("Numero de Integrantes: %d\n",minhabanda.numerodeintegrantes);
	printf("Posicao no Ranking das minhas bandas favoritas: %d",minhabanda.posicaodoranking);
	return 0;
}
