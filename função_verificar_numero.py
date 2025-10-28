def verificar_numero(n):
    if n>0:
        print('numero positivo')
    elif n<0:
        print('numero negativo')
    else:
        print('o numero e 0')

num=int(input('digite um numero : '))     
verificar_numero(num)
