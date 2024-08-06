#include <stdio.h>

int main() {
    // Array a ser ordenado
    int numeros[] = {29, 10, 14, 37, 13};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // Imprime o array original
    printf("Array original: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Algoritmo de Selection Sort
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMenorValor = i; // Índice do menor valor encontrado
        for (int j = i + 1; j < tamanho; j++) {
            if (numeros[j] < numeros[indiceMenorValor]) {
                indiceMenorValor = j;
            }
        }
        // Troca o menor valor encontrado com o valor na posição inicial da iteração
        if (indiceMenorValor != i) {
            int temp = numeros[i];
            numeros[i] = numeros[indiceMenorValor];
            numeros[indiceMenorValor] = temp;
        }
    }

    // Imprime o array ordenado
    printf("Array ordenado: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
