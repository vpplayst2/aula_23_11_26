#include <stdio.h>

int main() {
    int N = 3;
    int matriz[3][3]; // N é constante aqui, então dá pra usar tamanho fixo

    // Populando a matriz com a regra mat[i][j] = i + j
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = i + j; // Regra de população
        }
    }

    // Imprimindo a matriz resultante
    printf("Matriz gerada:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}