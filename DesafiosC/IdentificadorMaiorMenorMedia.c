
#include <stdio.h>
#include <conio.h>

int main() {

int num[10];
int i;
int maior, menor;
float soma = 0, media;

printf("Digite 10 numeros inteiros (nao digite numeros decimais, por gentileza.):\n");

for (i = 0; i < 10; i++) {
    printf("Numero %d: ", i + 1);
    scanf("%d", &num[i]);
}

maior = num[0];
menor = num[0];

for (i = 0; i < 10; i++) {
    if (num[i] > maior) {
        maior = num[i];
    }
    if (num[i] < menor) {
        menor = num[i];
    }
    soma += num[i];
}

media = soma / 10;

printf("\nMaior valor: %d\n", maior);
printf("Menor valor: %d\n", menor);
printf("Media: %.2f\n", media);

printf("Valores acima da media: ");
for (i = 0; i < 10; i++) {
    if (num[i] > media) {
        printf("%d ", num[i]);
    }
}

printf("\n");

return 0;
}