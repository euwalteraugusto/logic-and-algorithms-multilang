# Versão 2: Modular
def classificar_nota(nota):
    if nota >= 90: return 'A'
    elif nota >= 80: return 'B'
    elif nota >= 70: return 'C'
    elif nota >= 60: return 'D'
    else: return 'E'

valor = float(input("Nota (0-100): "))
print(f"Conceito: {classificar_nota(valor)}")