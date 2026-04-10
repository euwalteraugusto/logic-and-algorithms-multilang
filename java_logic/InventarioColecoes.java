package java_logic;

import java.util.ArrayList;
import java.util.Scanner;

public class InventarioColecoes {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Lista dinâmica de objetos
        ArrayList<String> sabores = new ArrayList<>();
        ArrayList<Double> precos = new ArrayList<>();

        // Adicionando itens iniciais
        sabores.add("Chocolate");
        sabores.add("Morango");

        int opcao = 0;
        do {
            System.out.println("\n--- Gestão de Coleções (Java) ---");
            System.out.println("1. Cadastrar Sabor\n2. Lançar Preço\n3. Relatório e Sair");
            opcao = scanner.nextInt();
            scanner.nextLine(); // Limpar buffer

            if (opcao == 1) {
                System.out.print("Sabor: ");
                sabores.add(scanner.nextLine());
            } else if (opcao == 2) {
                System.out.print("Preço: ");
                precos.add(scanner.nextDouble());
            } else if (opcao == 3) {
                double total = 0;
                for (double p : precos) total += p; // Iterando sobre a coleção
                System.out.println("Total de itens no catálogo: " + sabores.size());
                System.out.println("Soma total: R$ " + total);
            }
        } while (opcao != 3);
        scanner.close();
    }
}
