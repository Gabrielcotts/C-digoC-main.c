#include <stdio.h>

void imprime(int valor[], int i, int num);

int main(){
	int vet[] = {1,2,3,4,5,6,7,8,9,10};
	
	imprime (vet, 0, 9);
	printf("\n");
}

void imprime(int valor[], int i, int num){
	if(i == num){
		printf("%d, ", valor[i]);
	
	} else {
		imprime(valor, i + 1, num );
		printf("%d, ", valor[i]);
	}
}

