import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get two integers from user input
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        // Calculate and display the results
        System.out.println("a+b = " + (a + b)));
        System.out.println("a-b = " + (a - b)));
        System.out.println("a*b = " + (a * b)));

        // Calculate and display the results for division and modulus operations
        System.out.println("a/b = " + ((double) a / b))));
        System.out.println("a%%b = " + (a % b)));
    }
}