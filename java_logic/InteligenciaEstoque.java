package java_logic;

import java.util.Scanner;

public class InteligenciaEstoque {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("--- Inteligência de Estoque (Java) ---");
        System.out.print("Digite a quantidade em estoque: ");
        
        if (!scanner.hasNextInt()) {
            System.out.println("Erro: Entrada inválida.");
            
        }

        int quantidade = scanner.nextInt();

        // Validação de MVP
        if (quantidade < 0) {
            System.out.println("Erro: Estoque negativo detectado. Operação bloqueada.");
        } else {
            // Desvios Múltiplos
            String status;
            if (quantidade == 0) {
                status = "EM FALTA";
            } else if (quantidade <= 5) {
                status = "ALERTA";
            } else {
                status = "OK";
            }
            
            System.out.println("Status do Sistema: " + status);
        }
        scanner.close();
    }
}