#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){


int matriz[20] [10];
int count = 1, i = 0, j = 0;

for (i = 0; i < 20; i++){
	for (j = 0; j < 10; j++){
		matriz [i][j] = count;
		printf("matriz[%i] [%i] = %i \n", i, j, count);
		count++;		
		}
	}
	printf("o valor de matriz[3][5] = %i", matriz[3][5]);
	
	for(i = 0; i < 20; i++){
		printf("\n");
		for(j = 0; j < 10; j++){
			printf("%i ", matriz[i][j]);
		}
	}
	return 0;
	
		int soma (int a, int b){
	return a + b;
	}
	
	resultado = soma(10,3);
	
	printf("Valor da soma de 10 e 3 eh %i: ", resultado);
	
	return 0;
	}
