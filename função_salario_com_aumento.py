def novo_salario(salario,porcentagem):
    salario_n=(salario*porcentagem)/100
    salario_n=salario_n+salario
    return salario_n
sal=float(input('digite o valor do salario: '))
per=float(input('digite o percentual de aumento do salario :'))
s=novo_salario(sal,per)
print('o novo salario e de :',s)  
    

    
        
        