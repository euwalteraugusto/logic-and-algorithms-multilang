def monitorar_estoque():
    print("--- Inteligência de Estoque (Python) ---")
    
    try:
        quantidade = int(input("Digite a quantidade atual em estoque: "))
        
        # Validação de MVP (Bloqueio de dados inválidos)
        if quantidade < 0:
            print("Erro: A quantidade não pode ser negativa.")
            return

        # Desvios Múltiplos e Composto
        if quantidade == 0:
            status = "EM FALTA"
        elif quantidade <= 5:
            status = "ALERTA: Reposição Necessária"
        else:
            status = "OK"

        print(f"Status do Produto: {status}")
        
    except ValueError:
        print("Erro: Por favor, insira um número inteiro válido.")

if __name__ == "__main__":
    monitorar_estoque()