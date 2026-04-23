#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

    int opcao;
    float equacao1;
    float equacao2;
    float result = 0;

    while (true) {

        printf("---- Menu calculadora ----\n");

        printf("Digite um numero: ");
        scanf("%f", &equacao1);

        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Voce escolheu sair!\n");
            printf("Saindo do programa...\n");
            break;
        }

        printf("Digite outro numero: ");
        scanf("%f", &equacao2);

        switch (opcao) {

            case 1:
                result = equacao1 + equacao2;
                printf("Resultado da soma: %.2f\n", result);
                break;

            case 2:
                result = equacao1 - equacao2;
                printf("Resultado da subtraçao: %.2f\n", result);
                break;

            case 3:
                result = equacao1 * equacao2;
                printf("Resultado da multiplicacao: %.2f\n", result);
                break;

            case 4:
                if (equacao2 != 0) {
                    result = equacao1 / equacao2;
                    printf("Resultado da divisao: %.2f\n", result);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;

            default:
                printf("Opcao invalida!\n");
        }
         return 0;

   }
}
