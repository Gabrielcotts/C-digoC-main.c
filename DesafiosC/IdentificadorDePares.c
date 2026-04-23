#include <stdio.h>
#include <conio.h>

int main(){
float notaDeLogica, notaDeBanco, notaDeEngenharia;

printf("Digite sua nota de logica de programacao (0 a 10):\n");
scanf("%f", &notaDeLogica);

if (notaDeLogica < 0 || notaDeLogica > 10){
	printf("Nota invalida!");
	return 0;
}

printf("Digite sua nota de banco de dados(0 a 10):\n");
scanf("%f", &notaDeBanco);

if(notaDeBanco < 0 || notaDeBanco > 10){
	printf("Nota invalida!");
	return 0;
}

printf("Digite sua nota de engenharia de software (0 a 10):\n");
scanf("%f", &notaDeEngenharia);

  if (notaDeEngenharia < 0 || notaDeEngenharia > 10){
printf("Nota invalida!");
return 0;
}

float media = (notaDeLogica + notaDeBanco + notaDeEngenharia)/3;
printf("\nMedia: %.2f\n", media);

if(media >= 7){
printf("Aprovado!\n");

} else if (media >= 5 ){
printf("Recuperacao!\n");
	 } else  {
printf("Reprovado!");
}
return 0 ;
}