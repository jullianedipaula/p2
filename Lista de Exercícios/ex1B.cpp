/* Pedir ao usu�rio para digitar um caractere, e em seguida exiba esse caractere na tela. 
b) exiba como inteiro (%d).*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char caractere;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    getchar();
    printf("Voc� digitou: %d\n", caractere);

    return 0;
}
