# 📂 Algoritmos e Lógica de Programação: Do Procedural ao Modular

Este repositório contém uma série de exercícios práticos e roteiros de aprendizagem focados em **Lógica de Programação** e **Algoritmos**, aplicados em três das linguagens mais utilizadas no mercado: **Python, Java e C++**.

O objetivo principal deste projeto é documentar a evolução do pensamento computacional, partindo de scripts sequenciais simples até a construção de sistemas modulares e organizados, utilizando como estudo de caso o "MVP da Sorveteria do Dener".

## 🚀 O que este repositório cobre?

O conteúdo está estruturado para demonstrar a evolução da maturidade do código em quatro grandes marcos:

1.  **Inteligência de Decisão:** Implementação de desvios simples, compostos e múltiplos (`if`, `else`, `switch`) para controle de estoque e validação de dados.
2.  **Estruturas de Repetição:** Criação de menus interativos e persistentes utilizando laços incondicionais (`for`), pré-condicionais (`while`) e pós-condicionais (`do-while`).
3.  **Coleções de Dados:** Manipulação de estruturas de armazenamento fixas (Arrays) e dinâmicas (`ArrayList` em Java e `std::vector` em C++).
4.  **Modularização (Funções):** Refatoração de sistemas para eliminar o "código espaguete", aplicando a metodologia da **Caixa Preta** (Entrada -> Processamento -> Saída).

## 🛠️ Tecnologias Utilizadas

* **Python:** Foco em legibilidade, sintaxe limpa e listas dinâmicas nativas.
* **Java:** Foco em tipagem forte, robustez e uso de classes.
* **C++:** Foco em performance, manipulação de vetores e controle de fluxo.

## 💻 Como Executar os Projetos

Certifique-se de ter os interpretadores e compiladores instalados antes de iniciar.

### 🐍 Python
```bash
# Para rodar qualquer script Python
python nome_do_arquivo.py
```

### ☕ Java
```bash
# 1. Compilar o arquivo .java (gera o bytecode .class)
javac NomeDoArquivo.java

# 2. Executar a classe gerada
java NomeDoArquivo
```

### ⚙️ C++
```bash
# 1. Compilar usando o G++
g++ nome_do_arquivo.cpp -o programa

# 2. Executar o binário
./programa  # (Linux/Mac)
programa.exe # (Windows)
```

## 📈 Metodologia de Desenvolvimento

Cada exercício e desafio foi resolvido seguindo dois padrões distintos para comparação:

* **Versão 1 (Procedural):** Onde toda a lógica é escrita de forma sequencial, ideal para entender o fluxo de execução inicial.
* **Versão 2 (Modular):** Onde o código é refatorado em funções e métodos, promovendo a reutilização, facilidade de manutenção e clareza no método `main`.

## 📝 Boas Práticas Adotadas

* **Nomenclatura Semântica:** Variáveis e funções nomeadas em português/inglês claro para indicar sua função exata.
* **Validação de MVP:** Regras de proteção para impedir entradas de dados inválidos (ex: estoque negativo).
* **Indentação e Clean Code:** Código organizado para facilitar a leitura por outros desenvolvedores.

---

## 👤 Autor

**Walter Fonseca**
*Desenvolvedor em formação, focado em dominar as bases da computação e transformar lógica em soluções reais.*

---
> "A lógica é o princípio da sabedoria, não o fim."
```