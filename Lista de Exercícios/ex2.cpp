/* Ler um n�mero e dizer se ele est� contido no intervalo entre 10 e 15, onde 10 e 15 tamb�m 
pertencem ao intervalo.*/


#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    if (numero >= 10 && numero <= 15) {
        printf("O n�mero %d pertence ao interevalo.\n", numero);
    } else {
        printf("O n�mero %d n�o pertence ao intervalo.\n", numero);
    }

    return 0;
}

