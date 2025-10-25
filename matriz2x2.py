matriz = []
i= 1 
j = 1
for i in range(2):
    linha = []
    for j in range(2):
        valor=int(input(f'digite um valor para [{i}][{j}] : '))
        linha.append(valor)
    matriz.append(linha)
print('\nmatriz completa : !')
for linha in (matriz):
    print(linha)