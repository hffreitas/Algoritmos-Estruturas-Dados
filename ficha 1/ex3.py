import math
def imc():
    peso = float(input("inserir peso: "))
    altura = float(input("inserir altura: "))
    imc = peso/altura**2
    print("IMC", imc)



imc()