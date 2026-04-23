#include <stdio.h>
#include <conio.h>

int main() {

 int opcao = 0;

float saldo = 1500;
float saque;
float deposito;

while (opcao != 4) {

    printf("\n---- Menu caixa eletronico ----\n");

    printf("Escolha uma das opcoes a seguir:\n");

    printf("1 - Consultar saldo\n");
    printf("2 - Sacar valor\n");
    printf("3 - Depositar valor\n");
    printf("4 - Sair\n");

    scanf("%d", &opcao);

    if (opcao == 4) {
        printf("Voce escolheu sair!\n");
        printf("Encerrando o programa...\n");
        break;
    }

    switch (opcao) {

        case 1:
            printf("Seu saldo e igual a: %.2f\n", saldo);
            break;

        case 2:
        	printf("Digite o valor que deseja sacar:\n");
   		     scanf("%f", &saque);

		if (saque > saldo) {
                    printf("Saldo insuficiente!\n");
                } else {
                    saldo -= saque;
                    printf("Saque realizado! Novo saldo: R$ %.2f\n", saldo);
                }
            break;

        case 3:
            printf("\nDigite o valor que deseja depositar:\n");
               scanf("%f", &deposito);
               
               if (deposito > 0) {
              saldo += deposito;
                    printf("Deposito realizado! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido!\n");
                }
                break;
                
        default:
            printf("Opcao invalida!\n");
    }
}
   return 0;
}
