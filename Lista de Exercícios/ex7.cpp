/* Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor. 
a) Exibir a quantidade de vezes que o número 3 está presente no vetor.
b) Pergunte ao usuário qual número ele quer pesquisar e diga quantas vezes este número está 
presente no vetor. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[10];
    int pesquisar;
    int aparece = 0;


    for (int i = 0; i < 10; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == 3) {
            aparece++;
        }
    }
    printf("O número '3' aparece %d vez/vezes.\n\n", aparece);
    printf("Digite o número o qual você quer pesquisar: ");
    scanf("%d", &pesquisar);

    aparece = 0;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == pesquisar) {
            aparece++;
        }
    }
    printf("O número '%d' aparece %d vez/vezes.\n", pesquisar, aparece);

    return 0;
}

