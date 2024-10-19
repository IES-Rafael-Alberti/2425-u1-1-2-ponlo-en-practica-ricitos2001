import java.util.Scanner;

public class Main {
    public static String crearSaludo(String nombre) {
        String saludo = "hola " + String.valueOf(nombre) + " este programa esta hecho en el lenguaje de programacion: java";
        return saludo;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("¿como te llamas? ");
        String nombre = scanner.nextLine();
        String saludo = crearSaludo(nombre);
        System.out.println(saludo);
        scanner.close();
    }
}