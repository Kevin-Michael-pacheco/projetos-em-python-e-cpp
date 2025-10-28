def media3(nt1,nt2,nt3):
    m=(nt1+nt2+nt3)/3
    if m>=6:
        s=('aprovado')
    elif m>=4:
        s=('recuperação')
    else:
        s=('reprovado')
    print()
    i=('continue estudando ')
    return m,s,i
nota=float(input('digite a primeira nota'))
nota2=float(input('digite a segunda nota'))
nota3=float(input('digite a terceira nota'))
med,situ,j=media3(nota,nota2,nota3)
print('a media das notas digitas e de: ',med)
print()
print(situ)
print()
print(j)

    
        
        