/* Algoritmo para ler um nome completo, com espaços e acentuação (atenção para o formato 
passado para o scanf()). Em seguida exiba o nome de três formas diferentes:
a) texto normal, utilizando a máscara de formatação string (%s).
b) exiba cada uma das palavras do nome em linhas diferentes – use o espaço para separar as 
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

