#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	
	
	// task string


	char str1[100], str2[100], str3[100];
	printf("Digite uma string:");
	gets(str1);
	strcpy(str2, str1);
	strcpy(str3, "Voce digitou: ");
	printf("%s%s.\n", str3, str2);
	
	printf("tamanho de string digitada: %d", strlen(str1));
	
	return 0;
	
}
	
