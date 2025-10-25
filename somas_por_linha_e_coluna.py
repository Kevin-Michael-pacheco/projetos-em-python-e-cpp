matriz=[]

for i in range(3):
    linha=[]
    for j in range(3):
        valor=float(input(f'digite o valor para a posição[{i+1}][{j+1}] : '))
        linha.append(valor)
    matriz.append(linha)
for i in range(3):
    soma_linha=0
    soma_coluna=0
    for j in range(3):
        soma_linha += matriz[i][j]
    print(f"Soma da linha {i+1} = {soma_linha}")
print()
for j in range(3):
    soma_coluna=0
    for i in range(3):
        soma_coluna+=matriz[i][j]
    print(f"Soma da coluna {j+1} = {soma_coluna}")
print('diagonal principal')
for i in range(3):
    print(matriz[i][i])
print()
print('diagonal secundaria')
for i in range(3):
    print(matriz[i][2 - i])

    

    

        