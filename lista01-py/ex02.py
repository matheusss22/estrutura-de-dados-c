tamanho_lista=int(input("Digite o tamanho da lista: "))

produtos=[]
quantidades=[]
valores=[]

# Python é mais simples/conveniente pois ele faz alocação de memória automaticamente
# Diferente de C, em Python não precisamos de nós preocupar e alocar e liberar a memória

print("="*50)
for i in range(tamanho_lista):
    nome_produto = input(f"Digite o nome do produto {i + 1}: ")
    produtos.append(nome_produto)

print("="*50)
for i in range(tamanho_lista):
    quantidade_produto = int(input(f"Digite a quantidade de {produtos[i]}: "))
    quantidades.append(quantidade_produto)

print("="*50)
for i in range(tamanho_lista):
    valores_produto = float(input(f"Digite o valor unitário de {produtos[i]}: R$"))
    valores.append(valores_produto)

print("="*50)
print("Relatório de compra:")
total = 0
for i in range(tamanho_lista):
    print(f"{quantidades[i]} x {produtos[i]} = {quantidades[i] * valores[i]}")
    total += quantidades[i] * valores[i]
print(f"Total = R${total}")