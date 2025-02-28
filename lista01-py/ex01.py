while True:
    x=int(input("Digite o primeiro número: "))
    y=int(input("Digite o segundo número: "))

    if x==y:
        print("Não entre com valores iguais!")
        continue
    break

print(f"Resultado de {x} ^ {y} = {x**y}")