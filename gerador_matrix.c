#include <stdio.h>

int main() {
    int M, N;

    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &M);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &N);

    // Declarando a matriz com as dimensões informadas (VLA, C99)
    int mat[M][N];

    // Usando laços aninhados para ler os dados
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < M; i++) { // Laço para percorrer as linhas
        for (int j = 0; j < N; j++) { // Laço para percorrer as colunas
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Usando laços aninhados para imprimir a matriz
    printf("\nMATRIZ DIGITADA:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]); // Imprime o elemento e um espaço
        }
        printf("\n"); // Pula para a próxima linha ao final de cada linha da matriz
    }

    return 0;
}

