#include <stdio.h>
//endereço de memória da variável
int main(){
	 int x = 5;
	 int y = 7;
	 printf("Antes do scanf: x = %d\n",x);
	 printf("Digite um numero: ");
	 scanf("%d", &x);
	 printf("Depois do scanf: x = %d\n",x);
	 
	 printf("Valor do conteudo de x = %d\n", x);
	 printf("Valor do endereco x %d\n", &x);
	 
	 printf("Valor do conteudo de y = %d\n", y);
	 printf("Valor do endereco y %d\n", &y);
	 
	 
	 return 0;
}
