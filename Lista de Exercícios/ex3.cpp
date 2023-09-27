/* Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três. */
/* */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3;

    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite outro número: ");
    scanf("%d", &numero2);
    printf("Digite mais um número: ");
    scanf("%d", &numero3);


    int menor = numero1;

    if (numero2 < menor) {
        menor = numero2;
    }
    if (numero3 < menor) {
        menor = numero3;
    }
    
    printf("O menor número entre %d, %d e %d é: %d\n", numero1, numero2, numero3, menor);

    return 0;
}

