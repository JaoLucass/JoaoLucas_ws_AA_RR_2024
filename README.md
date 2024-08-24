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

Crie um arquivo de texto chamado `entrada.txt` contendo uma lista de números inteiros separados por espaços ou novas linhas. Exemplo de conteúdo:

12 11 13 5 6 20 15


### 2. Compilar o Código C

# Compile o código C usando o compilador GCC:

```bash
gcc -o insertion insertion.c

Execute o programa C, fornecendo o arquivo de entrada e o arquivo de saída como argumentos:

./insertion entrada.txt resultados.txt
```

O arquivo resultados.txt conterá os resultados do Insertion Sort. Ele terá o seguinte formato:
```bash
Tamanho: [tamanho_do_array], Tempo: [tempo_de_execução] segundos
Array ordenado:
[número1] [número2] [número3]
```

# Use o script Python para gerar um gráfico de linha baseado nos resultados do arquivo de saída:

python plot_insertion_sort.py

### O script lê saida.txt e gera um gráfico mostrando como o tempo de execução varia com o tamanho do array.

# Interpretar o Gráfico

Eixo X (Tamanho do Array): Mostra o tamanho do array usado para a ordenação.
Eixo Y (Tempo em Segundos): Mostra o tempo de execução do Insertion Sort para o respectivo tamanho de array.

O gráfico deve mostrar uma tendência ascendente, refletindo o comportamento quadrático do Insertion Sort, especialmente para entradas desordenadas grandes.
