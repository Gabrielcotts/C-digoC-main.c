#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	
 float nota;
	printf("Digite sua nota: ");
	scanf("%f", &nota);
	
	
	if(nota >= 9 && nota <= 10){
		printf("ss \n");
	} else if (nota <= 8.9 && nota >= 7){
		printf("ms\n");	
	} else if (nota <= 6.9 && nota >= 5) {
		printf("mm\n");
	} else if (nota <= 4.9 && nota >= 2){
		printf("mi\n");
	}else if (nota <= 1.9 && nota >= 0.1){
		printf("ii\n");
	} else if (nota == 0 ){
	printf ("sr\n");}
	else {
		printf("Nota invalida! Tente novamente");
	}
		return 0 ;
}
