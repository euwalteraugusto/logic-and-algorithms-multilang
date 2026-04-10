package java_logic;

import java.util.ArrayList;
import java.util.Scanner;

public class SorveteriaDener {

    // A "Caixa Preta" de exibição
    public static void exibirMenu() {
        System.out.println("\n--- MENU DE GESTÃO ---");
        System.out.println("1. Novo Sabor\n2. Novo Preço\n3. Relatório\n4. Sair");
        System.out.print("Sua escolha: ");
    }

    // A "Caixa Preta" de processamento (recebe lista, retorna total)
    public static double somarEstoque(ArrayList<Double> precos) {
        double soma = 0;
        for (double p : precos) soma += p;
        return soma;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> sabores = new ArrayList<>();
        ArrayList<Double> precos = new ArrayList<>();
        int opcao = 0;

        do {
            exibirMenu();
            opcao = scanner.nextInt();

            if (opcao == 1) {
                System.out.print("Sabor: ");
                scanner.nextLine(); // limpar buffer
                sabores.add(scanner.nextLine());
            } else if (opcao == 2) {
                System.out.print("Preço: ");
                precos.add(scanner.nextDouble());
            } else if (opcao == 3) {
                System.out.println("Total em Estoque: R$ " + somarEstoque(precos));
            }
        } while (opcao != 4);
        scanner.close();
    }
}
