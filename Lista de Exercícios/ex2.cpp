/* Ler um número e dizer se ele está contido no intervalo entre 10 e 15, onde 10 e 15 também 
pertencem ao intervalo.*/


#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero >= 10 && numero <= 15) {
        printf("O número %d pertence ao interevalo.\n", numero);
    } else {
        printf("O número %d não pertence ao intervalo.\n", numero);
    }

    return 0;
}

