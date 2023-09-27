/* Pergunte ao usuário qual o tamanho do quadrado que ele quer que seja desenhado; Por 
exemplo, se ele informar 5 por 5, o desenho ficará assim:
X X X X X
X X X X X
X X X X X
X X X X X
X X X X X */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tamanho;

    printf("Informe o tamanho do quadrado: ");
    scanf("%d", &tamanho);

    for (int linha = 1; linha <= tamanho; linha++) {
        for (int coluna = 1; coluna <= tamanho; coluna++) {
            printf("? ");
        }
        printf("\n"); 
    }

    return 0;
}


