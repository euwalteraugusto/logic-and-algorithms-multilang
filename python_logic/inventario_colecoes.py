def sistema_colecoes():
    # Estrutura dinâmica: podemos adicionar quantos sabores quisermos
    sabores = ["Chocolate", "Morango", "Baunilha"]
    precos = []

    while True:
        print(f"\n--- Inventário Dinâmico (Python) ---")
        print(f"Sabores atuais: {', '.join(sabores)}")
        print("1. Adicionar novo sabor")
        print("2. Registrar preço de lote")
        print("3. Ver Relatório e Sair")
        
        opcao = input("Escolha: ")

        if opcao == "1":
            novo_sabor = input("Nome do novo sabor: ")
            sabores.append(novo_sabor) # Aumenta a lista dinamicamente
            print(f"{novo_sabor} adicionado com sucesso!")
        
        elif opcao == "2":
            valor = float(input("Valor do lote: R$ "))
            precos.append(valor) # Armazena no histórico de preços
        
        elif opcao == "3":
            total = sum(precos) # Função nativa para somar coleções
            print(f"\nTotal de sabores: {len(sabores)}")
            print(f"Valor total em estoque: R$ {total:.2f}")
            break

if __name__ == "__main__":
    sistema_colecoes()