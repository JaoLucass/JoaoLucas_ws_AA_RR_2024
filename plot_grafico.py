import matplotlib.pyplot as plt

# Listas para armazenar os dados
tamanhos = []
tempos = []

# Ler o arquivo de resultados
with open("resultados.txt", "r") as file:
    for line in file:
        tamanho, tempo = line.split()
        tamanhos.append(int(tamanho))
        tempos.append(float(tempo))

# Gerar o gráfico
plt.plot(tamanhos, tempos, marker='o', linestyle='-')
plt.title("Tempo de Execução do Insertion Sort")
plt.xlabel("Tamanho do Array")
plt.ylabel("Tempo (segundos)")
plt.grid(True)
plt.show()
