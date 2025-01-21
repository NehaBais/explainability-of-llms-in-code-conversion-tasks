import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b;

        System.out.print("Enter two integers: ");
        a = scanner.nextInt();
        b = scanner.nextInt();
        scanner.close();

        System.out.printf("%d + %d = %d%n", a, b, a+b);
        System.out.printf("%d - %d = %d%n", a, b, a-b);
        System.out.printf("%d * %d = %d%n", a, b, a*b)); // same sign as first operand

        double c = double / (double) b;
        int trunc_quotient = (int) Math.round(c);

        System.out.printf("%d / %d = %.0f%n", a, b, trunc_quotient);

        if ((a < 0 && b > 0) || (a > 0 && b < 0))) {
            double exponentiation = Math.pow(Math.abs(a), Math.abs(b))); // if operator exists

            System.out.printf("%.2f ^ %.2f = %.2f%n", a, b, exponentiation);
        }
    }
}