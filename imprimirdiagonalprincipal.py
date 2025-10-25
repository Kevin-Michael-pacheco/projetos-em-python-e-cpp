matriz = []
diagonal = []
nl=int(input('digite quantas linha vai ter a matriz : '))
nc=int(input('digite quantas colunas vai ter a matriz : '))
for i in range(nl):
    linha = []
    for j in range(nc):
        v=int(input(f'digite o valor para [{i}][{j}] : '))
        linha.append(v)
    matriz.append(linha)

for i in range(nl):
    for j in range(nc):
        
       if i==j:
            print(matriz[i][j])
        
