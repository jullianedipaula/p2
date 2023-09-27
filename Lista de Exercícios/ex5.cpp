/* Leia dois valores, e exiba sua soma. Em seguida pergunte ao usuário: “Novo Cálculo 
(S/N)?”. Deve-se ler a resposta e se a resposta for ‘S’ (sim), deve-se repetir todos os 
comandos (instruções) novamente, mas se for qualquer outra resposta, o algoritmo deve 
ser finalizado escrevendo a mensagem “Fim dos Cálculos”. Escolha a opção mais 
adequada de comando de loop para resolver este problema. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char resposta;
    
    do {
        double numero1, numero2, soma;
        
        printf("Digite um valor: ");
        scanf("%lf", &numero1);
        printf("Digite outro valor: ");
        scanf("%lf", &numero2);
        
        
        soma = numero1 + numero2;
        
        printf("A soma é: %.2lf\n", soma);
        printf("Novo Cálculo (S/N)?: ");
        scanf(" %c", &resposta); 
        
    } while (resposta == 'S' || resposta == 's'); 
    printf("Fim dos Cálculos.\n");
    
    return 0;
}

