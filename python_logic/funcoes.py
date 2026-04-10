# Função: A Caixa Preta que apenas exibe informações
def exibir_menu():
    print("\n" + "="*30)
    print("   SORVETERIA DO DENER   ")
    print("="*30)
    print("1. Cadastrar Sabor")
    print("2. Registrar Preço")
    print("3. Relatório Geral")
    print("4. Sair")
    print("="*30)

# Função com retorno: Ela processa e entrega um valor (Soma)
def calcular_total(lista_precos):
    return sum(lista_precos)

def main():
    sabores = []
    precos = []
    
    while True:
        exibir_menu() # Chamada da função
        opcao = input("Escolha uma opção: ")

        if opcao == "1":
            sabores.append(input("Nome do sabor: "))
        elif opcao == "2":
            precos.append(float(input("Valor do lote: R$ ")))
        elif opcao == "3":
            total = calcular_total(precos)
            print(f"\nTotal de Sabores: {len(sabores)}")
            print(f"Valor em Estoque: R$ {total:.2f}")
        elif opcao == "4":
            break

if __name__ == "__main__":
    main()