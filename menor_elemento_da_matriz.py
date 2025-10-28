matriz=[]
menor=float('inf')
cont_linha=0
cont_coluna=0
linha=int(input('digite quantas linhas : '))
coluna=int(input('digite quantas colonas :'))
for i in range(linha):
    linhas=[]
    for j in range(coluna):
        n=int(input(f'digite um numero para a posição [{i+1}] [{j+1}] :'))
        linhas.append(n)
    matriz.append(linhas)
for i in range(linha):
    for j in range(coluna):
        if(matriz[i][j]<menor):
            menor=matriz[i][j]
            cont_linha=i
            cont_coluna=j
print(f' o menor numero da matriz e [{menor}] e esta na posição [{cont_linha+1}] [{cont_coluna+1}]')

        
        