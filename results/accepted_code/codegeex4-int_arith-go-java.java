import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter two integers: ");
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    System.out.printf("%d + %d = %d\n", a, b, a + b);
    System.out.printf("%d - %d = %d\n", a, b, a - b);
    System.out.printf("%d * %d = %d\n", a, b, a * b);
    System.out.printf("%d / %d = %d\n", a, b, a / b); // truncates towards zero
    System.out.printf("%d %% %d = %d\n", a, b, a % b); // same sign as first operand

    // Exponentiation (if the operator exists)
    System.out.printf("(%d)^%d = %.0f\n", a, b, Math.pow(a, b));
  }
}
