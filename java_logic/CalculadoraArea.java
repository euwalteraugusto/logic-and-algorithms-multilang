package java_logic;

// Versão 2: Modular
public class CalculadoraArea {
    public static double calcularArea(double b, double h) {
        return b * h;
    }

    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Base: ");
        double b = sc.nextDouble();
        System.out.print("Altura: ");
        double h = sc.nextDouble();
        System.out.println("Área: " + calcularArea(b, h));

        sc.close();
    }
}
