nome=input("Atleta: ")
notas = []

for i in range(1, 8):
    nota = float(input(f"Digite a nota do jurado {i}: "))
    notas.append(nota)

melhor_nota = notas[0]
pior_nota = notas[0]
acumulador_nota = 0

for nota in notas:
    if melhor_nota > nota: 
        melhor_nota = nota
    if pior_nota < nota:
        pior_nota = nota
    acumulador_nota += nota

media = (acumulador_nota - melhor_nota - pior_nota)/5

print("Resultado final:")
print(f"Atleta: {nome}")
print(f"Melhor nota: {melhor_nota:.2f}")
print(f"Pior nota: {pior_nota:.2f}")
print(f"Média: {media:.2f}")
