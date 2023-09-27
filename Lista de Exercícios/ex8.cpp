/* Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê-la. Após 
preenchida,
a) Informe qual foi o maior número encontrado na matriz. 
b) Informe qual foi o menor número encontrado na matriz.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][4];
    int maior, menor;

    printf("Preencha a matriz 3x4: \n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite um valor para a matriz: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                maior = matriz[i][j];
                menor = matriz[i][j];
            } else {
                if (matriz[i][j] > maior) {
                    maior = matriz[i][j];
                }
                if (matriz[i][j] < menor) {
                    menor = matriz[i][j];
                }
            }
        }
    }

    printf("O maior número na matriz é: %d\n", maior);
    printf("O menor número na matriz é: %d\n", menor);

    return 0;
}

