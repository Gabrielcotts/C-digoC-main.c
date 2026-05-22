#include <stdio.h>

// Função recursiva
long fiboRecursivo(long n){

    printf("Entrou na funcao fibo(%ld)\n", n);

  
    if(n <= 2){
        printf("Retornando 1 da funcao fibo(%ld)\n", n);
        return 1;
    }

    long resultado = fiboRecursivo(n - 1) + fiboRecursivo(n - 2);

    printf("Retornando %ld da funcao fibo(%ld)\n", resultado, n);

    return resultado;
}

// Função interativa
long fiboIterativo(long n){

    long anterior = 1;
    long atual = 1;
    long proximo;
    int i;

    if(n <= 2){
        return 1;
    }

    for(i = 3; i <= n; i++){

        proximo = anterior + atual;

        anterior = atual;

        atual = proximo;
    }

    return atual;
}

int main(){

    long numero;

    printf("Digite um numero: ");
    scanf("%ld", &numero);

    printf("\n=== RECURSIVO ===\n");

    long resultadoRec = fiboRecursivo(numero);

    printf("\nResultado recursivo: %ld\n", resultadoRec);

    printf("\n=== ITERATIVO ===\n");

    long resultadoIt = fiboIterativo(numero);

    printf("Resultado iterativo: %ld\n", resultadoIt);

    return 0;
}
