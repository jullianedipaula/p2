/* Escreva um algoritmo que leia 3 n�meros e diga qual � o menor entre os tr�s. */
/* */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3;

    printf("Digite um n�mero: ");
    scanf("%d", &numero1);
    printf("Digite outro n�mero: ");
    scanf("%d", &numero2);
    printf("Digite mais um n�mero: ");
    scanf("%d", &numero3);


    int menor = numero1;

    if (numero2 < menor) {
        menor = numero2;
    }
    if (numero3 < menor) {
        menor = numero3;
    }
    
    printf("O menor n�mero entre %d, %d e %d �: %d\n", numero1, numero2, numero3, menor);

    return 0;
}

