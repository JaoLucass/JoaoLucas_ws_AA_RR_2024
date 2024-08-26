#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 60000  // Definindo o tamanho máximo do array

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
    if (argc < 2) {
        printf("Uso: %s <arquivo_entrada>\n", argv[0]);
        return 1;
    }

    // Abrir o arquivo de entrada para leitura
    FILE *inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        printf("Erro ao abrir o arquivo de entrada %s\n", argv[1]);
        return 1;
    }

    // Abrir o arquivo de resultados para anexar os tempos de execução
    FILE *resultFile = fopen("resultados.txt", "a");
    if (resultFile == NULL) {
        printf("Erro ao abrir o arquivo de resultados resultados.txt\n");
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

    // Salvar o tempo de execução no arquivo de resultados
    fprintf(resultFile, "Tamanho: %d, Tempo: %f segundos\n", n, cpu_time_used);
    fclose(resultFile); // Fechar o arquivo de resultados

    // Mostrar o array ordenado no terminal
    printf("Array ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
