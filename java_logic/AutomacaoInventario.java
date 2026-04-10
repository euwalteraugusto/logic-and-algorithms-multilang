package java_logic;

import java.util.Scanner;

public class AutomacaoInventario {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] sabores = {"Chocolate", "Morango", "Baunilha", "Pistache"};
        double estoqueTotal = 0;
        int opcao;

        // Laço Pós-Condicional (do-while)
        do {
            System.out.println("\n--- Menu da Sorveteria (Java) ---");
            System.out.println("1. Listar Sabores");
            System.out.println("2. Somar Itens ao Estoque");
            System.out.println("3. Sair");
            System.out.print("Opção: ");
            opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    System.out.println("\nCardápio de Sabores:");
                    for (int i = 0; i < sabores.length; i++) {
                        System.out.println("- " + sabores[i]);
                    }
                    break;
                case 2:
                    System.out.print("Digite o valor do item: ");
                    estoqueTotal += scanner.nextDouble();
                    break;
                case 3:
                    System.out.println("Total acumulado: R$ " + estoqueTotal);
                    System.out.println("Saindo...");
                    break;
                default:
                    System.out.println("Opção inválida!");
            }
        } while (opcao != 3);

        scanner.close();
    }
}