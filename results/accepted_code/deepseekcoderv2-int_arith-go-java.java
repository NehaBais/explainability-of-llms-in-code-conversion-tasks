import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int a, b;

    System.out.print("Enter two integers: ");
    a = scanner.nextInt();
    b = scanner.nextInt();

    System.out.printf("%d + %d = %d\n", a, b, a + b);
    System.out.printf("%d - %d = %d\n", a, b, a - b);
    System.out.printf("%d * %d = %d\n", a, b, a * b);

    // For quotient, use integer division which truncates towards zero in Java as well
    int quotient = a / b;
    System.out.printf("%d / %d = %d\n", a, b, quotient);

    // For remainder, the sign is the same as the first operand if they are different
    int remainder = a % b;
    System.out.printf("%d %% %d = %d\n", a, b, remainder);

    // No exponentiation operator in Java, but you can use Math.pow for this purpose
    double exponentiation = Math.pow(a, b); // This will compute a^b
    System.out.printf("%d ^ %d = %.0f\n", a, b, exponentiation);

    scanner.close();
  }
}
