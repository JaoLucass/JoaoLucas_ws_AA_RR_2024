import matplotlib.pyplot as plt
import numpy as np

# Função para ler os dados do arquivo resultados.txt
def ler_dados_arquivo(filename):
    tamanhos = []
    tempos = []
    
    with open(filename, 'r') as file:
        for line in file:
            if line.startswith("Tamanho:"):
                parts = line.split(", ")
                tamanho = int(parts[0].split(": ")[1])
                tempo = float(parts[1].split(": ")[1].split()[0])
                tamanhos.append(tamanho)
                tempos.append(tempo)
    
    return tamanhos, tempos

# Lendo os dados do arquivo resultados.txt
tamanhos, tempos = ler_dados_arquivo('resultados.txt')

# Plotando o gráfico
plt.figure(figsize=(10, 6))
plt.plot(tamanhos, tempos, marker='o', linestyle='-', color='b', label='Tempo de execução')

# Análise da tendência de comportamento assintótico
z = np.polyfit(tamanhos, tempos, 2)  # Ajuste de uma curva polinomial de grau 2 (quadrático)
p = np.poly1d(z)
plt.plot(tamanhos, p(tamanhos), linestyle='--', color='r', label='Tendência quadrática')

plt.xlabel('Tamanho do Array')
plt.ylabel('Tempo de Execução (segundos)')
plt.title('Tempo de Execução vs. Tamanho da Entrada (Insertion Sort)')
plt.legend()
plt.grid(True)
plt.show()

