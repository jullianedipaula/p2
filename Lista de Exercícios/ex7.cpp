/* Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor. 
a) Exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.
b) Pergunte ao usu�rio qual n�mero ele quer pesquisar e diga quantas vezes este n�mero est� 
presente no vetor. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[10];
    int pesquisar;
    int aparece = 0;


    for (int i = 0; i < 10; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == 3) {
            aparece++;
        }
    }
    printf("O n�mero '3' aparece %d vez/vezes.\n\n", aparece);
    printf("Digite o n�mero o qual voc� quer pesquisar: ");
    scanf("%d", &pesquisar);

    aparece = 0;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == pesquisar) {
            aparece++;
        }
    }
    printf("O n�mero '%d' aparece %d vez/vezes.\n", pesquisar, aparece);

    return 0;
}

