notas = []
nomes=[]
medias=[]

maiormedia=0
mediageral=0
print("=== Sistemas de Notas ===")
numalunos=int(input('quantos alunos?'))
numnotas=int(input('quantas notas por alunos? '))
for i in range(numalunos):
    nome=str(input(f"digite o nome do aluno [{i+1}] :"))
    nomes.append(nome)
    linhas_notas=[]
    soma=0
    for j in range(numnotas):
        n=float(input(f'digite a nota [{j+1}] de [{nomes[i]}] : '))
        linhas_notas.append(n)
        soma=soma+n
    notas.append(linhas_notas)
    media=soma/numnotas
    medias.append(media)
    print(f'Media de [{nomes[i]}] = ',medias[i])
    if(medias[i]>maiormedia):
        maiormedia = medias[i]
        posmaior=i
    mediageral=mediageral+medias[i]
mediageral=mediageral/numalunos
print()
print(f'aluno com maior media[{nomes[posmaior]}] ( [{maiormedia}]')
print()
print('Média geral da turma:',mediageral)
print()
print('===  MATRIZ DE notas ===')
for i in range(numalunos):
    print(nomes[i],':')
    for j in range(numnotas):
        print(notas[i][j])
    print()
    
        
   
        
        