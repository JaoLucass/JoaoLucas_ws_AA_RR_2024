# JoaoLucas_ws_AA_RR_2024

Seminário de Análise de algoritmos

# Insertion Sort com Medição de Tempo e Geração de Gráficos

Este projeto demonstra o uso do algoritmo de ordenação Insertion Sort, medindo o tempo de execução para diferentes tamanhos de entrada e visualizando os resultados usando gráficos.

## Arquivos

- `insertion.c`: Código em C que lê números de um arquivo de entrada, ordena-os usando Insertion Sort, mede o tempo de execução e salva os resultados em um arquivo de saída.
- `plot_grafico.py`: Script Python que lê os resultados do arquivo de saída gerado pelo código C e gera um gráfico de linha mostrando o tempo de execução em relação ao tamanho da entrada.

## Requisitos

- Compilador C (por exemplo, `gcc`)
- Python 3
- Biblioteca `matplotlib` para Python (instale com `pip install matplotlib`)

## Como Usar

### 1. Preparar o Arquivo de Entrada

Crie um arquivo de texto com um nome, por exemplo, `entrada.txt`(pode escolher o nome que quiser) contendo uma lista de números inteiros separados por espaços ou novas linhas. Exemplo de conteúdo:

12 11 13 5 6 20 15


### 2. Compilar o Código C

# Compile o código C usando o compilador GCC:

```bash
gcc -o insertion insertion.c

Execute o programa C, fornecendo o arquivo de entrada como argumento:

./insertion entrada.txt
```

O arquivo resultados.txt conterá O tempo de execução e o tamanho do array. Ele terá o seguinte formato:
```bash
Tamanho: [tamanho_do_array], Tempo: [tempo_de_execução] segundos
```

# Use o script Python para gerar um gráfico de linha baseado nos resultados do arquivo de saída:

python plot_insertion_sort.py

### O algoritmo lê resultados.txt e gera um gráfico mostrando como o tempo de execução varia com o tamanho do array.

O gráfico abaixo mostra o tempo de execução do algoritmo Insertion Sort em relação ao tamanho do array de entrada:

![Gráfico de Tempo de Execução](/grafico.png)
