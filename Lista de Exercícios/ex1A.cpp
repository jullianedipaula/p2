/* Pedir ao usuário para digitar um caractere, e em seguida exiba esse caractere na tela. 
a) exiba como caractere (%c).*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char caractere;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    getchar();
    printf("Você digitou: %c\n", caractere);

    return 0;
}

