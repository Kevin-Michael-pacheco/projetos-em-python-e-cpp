matriz=[]
soma=0
cont=0
linhas=int(input('digite o numero de linha para a matriz : '))
colunas=int(input('digite o numero de colunas para a matriz : '))
for i in range(linhas):
    linha=[]
    for j in range(colunas):
        num=float(input(f'digite o valo da posição[{i+1}] [{j+1}] : '))
        linha.append(num)
        soma=soma+num
        cont=cont+1
    matriz.append(linha)
mediageral=soma/cont
print('=== MATRIZ ===  ')
for i in range(linhas):
    for j in range(colunas):
        print(matriz[i])
print('a soma total de todos numeros da matriz e de ',soma)
print('a media geral de todos os numeros da matriz e de',mediageral)

    
    
        