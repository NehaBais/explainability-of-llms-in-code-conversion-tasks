import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in));

        int n1, n2;

        System.out.println("Enter first number:");
        n1 = scanner.nextInt();

        System.out.println("Enter second number:");
        n2 = scanner.nextInt();

        if (n1 < n2) {
            System.out.println(n1 + " less than " + n2));
        } else if (n1 == n2)) {
            System.out.println(n1 + " equal to " + n2));
        } else if (n1 > n2)) {
            System.out.println(n1 + " greater than " + n2));
        }

        scanner.close();
    }
}