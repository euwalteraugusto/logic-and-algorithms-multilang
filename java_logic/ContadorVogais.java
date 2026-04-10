package java_logic;

// Versão 2: Modular
public class ContadorVogais {
    public static int contarVogais(String texto) {
        int cont = 0;
        String t = texto.toLowerCase();
        for (int i = 0; i < t.length(); i++) {
            char c = t.charAt(i);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                cont++;
            }
        }
        return cont;
    }

    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Frase: ");
        String entrada = sc.nextLine();
        System.out.println("Total de vogais: " + contarVogais(entrada));

        sc.close();
    }
}
