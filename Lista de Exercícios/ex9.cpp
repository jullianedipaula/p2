/* Algoritmo para ler um nome completo, com espa�os e acentua��o (aten��o para o formato 
passado para o scanf()). Em seguida exiba o nome de tr�s formas diferentes:
a) texto normal, utilizando a m�scara de formata��o string (%s).
b) exiba cada uma das palavras do nome em linhas diferentes � use o espa�o para separar as 
palavras */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[100]; 
    
    printf("Digite seu nome completo: ");
    scanf(" %[^\n]s", nome);
    printf("Nome completo: %s\n\n", nome);
    printf("Nome completo formatado:\n");
    
    int i = 0;
    while (nome[i] != '\0') {
        
        if (nome[i] == ' ') {
            printf("\n"); 
        } else {
            printf("%c", nome[i]); 
        }
        i++;
    }
    printf("\n"); 

    return 0;
}

