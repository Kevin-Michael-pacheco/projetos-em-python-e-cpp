matriz = []
soma= 0
i= 1 
j= 1
nl=int(input('digite quantas linhas vai ter a matriz'))
nc=int(input('digite quantas colunas vai ter a matriz'))
for i in range(nl):
    linhas = []
    for j in range(nc):
        v=int(input(f'digite um valor para [{i}][{j}] : '))
        linhas.append(v)
        soma+=v
    matriz.append(linhas)
print('a soma de todos os numeros da matriz e de',soma)
        
        
