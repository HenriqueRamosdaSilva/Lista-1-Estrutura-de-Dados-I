#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void trocavalor(int *p1,int *p2){
	int salva=*p1;
	*p1=*p2;
	*p2=salva;
}

int main() {
	int x=1,y=2;
	
	printf("Os valores sao %d, %d\n",x,y );
	
	trocavalor(&x,&y);
	printf("Os novos valores sao %d, %d",x,y );
	return 0;
}
