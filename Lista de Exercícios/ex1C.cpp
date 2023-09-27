/* Pedir ao usuário para digitar um caractere, e em seguida exiba esse caractere na tela. 
c) exiba como hexadecimal (%x). */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char caractere;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    getchar();
    printf("Você digitou: %x\n", caractere);

    return 0;
}

