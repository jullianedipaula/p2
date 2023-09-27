/* Leia o ano de nascimento de um nadador, calcule sua idade, e classifique-o em uma das 
categorias: 
 * Infantil A --- de 5 a 7 anos 
 * Infantil B --- de 8 a 10 anos 
 * Juvenil A --- de 11 a 13 anos 
 * Juvenil B --- de 14 a 17 anos 
 * Sênior --- maiores de 17 ano */


#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int anoNasc, idade;
    const int anoAtual = 2023;

    printf("Digite a data de nascimento: ");
    scanf("%d", &anoNasc);

    idade = anoAtual - anoNasc;

    if (idade >= 5 && idade <= 7) {
        printf("Nadador pertence a categoria Infantil A, pois tem %d anos.\n", idade);
    } else if (idade >= 8 && idade <= 10) {
        printf("Nadador pertence a categoria Infantil B, pois tem %d anos.\n", idade);
    } else if (idade >= 11 && idade <= 13) {
        printf("Nadador pertence a categoria Juvenil A, pois tem %d anos.\n", idade);
    } else if (idade >= 14 && idade <= 17) {
        printf("Nadador pertence a categoria Juvenil B, pois tem %d anos.\n", idade);
    } else if (idade > 17) {
        printf("Nadador pertence a categoria Sênior, pois tem %d anos.\n", idade);
    } 

    return 0;
}

