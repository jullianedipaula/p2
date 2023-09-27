/* Fazer um programa que codifica uma string pelo método ZENIT-POLAR 
 Z E N I T 
 P O L A R 
Ou seja, onde aparece um 'Z' no string de entrada, aparecerá um 'P' na saída; e, 
semelhantemente, onde aparece um 'P' no string de entrada, aparecerá um 'Z' na saída. Isto 
deve ocorrer para todos os pares em ZENIT-POLAR, maiúsculas e minúsculas. As outras 
letras não são alteradas. 
Por exemplo, o string "Parabens a voce" é codificado para "Zitibols i veco". Ao se 
aplicar duas vezes a transformação, obtém-se o mesmo string, ou seja, a codificação de 
"Zitibols i veco" é "Parabens a voce". */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char string[100]; 


    printf("Digite uma frase: ");
    scanf(" %[^\n]s", string);

    for (int i = 0; string[i] != '\0'; i++) {
        switch (string[i]) {
            case 'Z':
                string[i] = 'P';
                break;
            case 'z':
                string[i] = 'p';
                break;
            case 'P':
                string[i] = 'Z';
                break;
            case 'p':
                string[i] = 'z';
                break;
            case 'E':
                string[i] = 'O';
                break;    
            case 'e':
                string[i] = 'o';
                break;
            case 'O':
                string[i] = 'E';
                break;
            case 'o':
                string[i] = 'e';
                break;
            case 'N':
                string[i] = 'L';
                break;
            case 'n':
                string[i] = 'l';
                break;
            case 'L':
                string[i] = 'N';
                break;
            case 'l':
                string[i] = 'n';
                break;
            case 'I':
                string[i] = 'A';
                break;
            case 'i':
                string[i] = 'a';
                break;
            case 'A':
                string[i] = 'I';
                break;
            case 'a':
                string[i] = 'i';
                break;
            case 'T':
                string[i] = 'R';
                break;
            case 't':
                string[i] = 'r';
                break;
            case 'R':
                string[i] = 'T';
                break;
            case 'r':
                string[i] = 't';
                break;
        }
    }

    printf("A frase codificada é: %s\n", string);

    return 0;
}
