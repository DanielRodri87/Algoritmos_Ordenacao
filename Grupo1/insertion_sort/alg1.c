#include <stdio.h>

int main() {
    // Array a ser ordenado
    int numeros[] = {38, 3, 16, 31, 34, 46, 25, 42, 14, 14};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // Imprime o array original
    printf("Array original: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Algoritmo de Insertion Sort
    for (int i = 1; i < tamanho; i++) {
        int numeroAtual = numeros[i]; // O número que queremos posicionar corretamente
        int j = i - 1;

        // Move os elementos maiores que o numeroAtual para frente
        while (j >= 0 && numeros[j] > numeroAtual) {
            numeros[j + 1] = numeros[j];
            j = j - 1;
        }
        
        // Coloca o numeroAtual na posição correta
        numeros[j + 1] = numeroAtual;
    }

    // Imprime o array ordenado
    printf("Array ordenado: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
