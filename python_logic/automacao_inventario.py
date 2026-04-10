def automacao_inventario():
    sabores = ["Chocolate", "Morango", "Baunilha", "Pistache"]
    estoque_total = 0

    while True:
        print("\n--- Sistema de Inventário (Python) ---")
        print("1. Listar Sabores")
        print("2. Adicionar Valor ao Estoque")
        print("3. Exibir Total e Sair")
        
        opcao = input("Escolha uma opção: ")

        if opcao == "1":
            print("\nSabores disponíveis:")
            # Laço Incondicional (for)
            for i, sabor in enumerate(sabores, 1):
                print(f"{i}. {sabor}")
        
        elif opcao == "2":
            valor = float(input("Digite o valor do lote de sorvete: R$ "))
            estoque_total += valor
            print("Valor adicionado!")

        elif opcao == "3":
            print(f"\nFechando o dia. Valor total em estoque: R$ {estoque_total:.2f}")
            break # Encerra o laço
        else:
            print("Opção inválida!")

if __name__ == "__main__":
    automacao_inventario()