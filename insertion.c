#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 1000  // Definindo o tamanho máximo do array

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Uso: %s <arquivo_entrada> <arquivo_saida>\n", argv[0]);
        return 1;
    }

    // Abrir o arquivo de entrada para leitura
    FILE *inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        printf("Erro ao abrir o arquivo de entrada %s\n", argv[1]);
        return 1;
    }

    // Abrir o arquivo de saída para escrita
    FILE *outputFile = fopen(argv[2], "w");
    if (outputFile == NULL) {
        printf("Erro ao abrir o arquivo de saída %s\n", argv[2]);
        fclose(inputFile);
        return 1;
    }

    int arr[MAX_SIZE];
    int n = 0;

    // Ler números do arquivo de entrada
    while (fscanf(inputFile, "%d", &arr[n]) == 1 && n < MAX_SIZE) {
        n++;
    }

    fclose(inputFile); // Fechar o arquivo de entrada

    // Medir o tempo de execução
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    insertionSort(arr, n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Salvar os resultados no arquivo de saída
    fprintf(outputFile, "Tamanho: %d, Tempo: %f segundos\n", n, cpu_time_used);
    fprintf(outputFile, "Array ordenado:\n");
    for (int i = 0; i < n; i++) {
        fprintf(outputFile, "%d ", arr[i]);
    }
    fprintf(outputFile, "\n");

    fclose(outputFile); // Fechar o arquivo de saída

    printf("Resultados salvos em %s\n", argv[2]);

    return 0;
}
