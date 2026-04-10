# Versão 1: Procedural
b = float(input("Base: "))
h = float(input("Altura: "))
area = b * h
print(f"Área: {area}")

# Versão 2: Modular
def calcular_area_retangulo(base, altura):
    return base * altura

base = float(input("Base: "))
alt = float(input("Altura: "))
print(f"Área: {calcular_area_retangulo(base, alt)}")