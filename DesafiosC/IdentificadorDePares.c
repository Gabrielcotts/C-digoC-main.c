
#include <stdio.h>
#include <conio.h>

int num1, num2;
int i = 0;
int cont = 0;

int main(){
printf("--- DIGITE A SEGUIR, DOIS NUMEROS INTEIROS ---\n");
printf("Digite o numero de inicio (menor valor):\n");
scanf("%d", &num1);

printf("Digite o numero final (maior valor):\n");
scanf("%d", &num2);

printf("Numeros pares encontrados:");

for (i = num1; i <= num2; i++){
	if(i % 2 == 0){
	printf("%d ", i);
	cont++;
		}
	}
	printf("\nTotal de pares: %d\n", cont);	
	return 0;
}
