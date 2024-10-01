import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("enter two integers: ");
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    System.out.printf("%d + %d = %d\n", a, b, a + b);
    System.out.printf("%d - %d = %d\n", a, b, a - b);
    System.out.printf("%d * %d = %d\n", a, b, a * b);
    System.out.printf("%d / %d = %d\n", a, b, a / b); // truncates towards 0
    System.out.printf("%d %% %d = %d\n", a, b, a % b); // same sign as first operand
    // no exponentiation operator in Java similar to GoLang
  }
}
