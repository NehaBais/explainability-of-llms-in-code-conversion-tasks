import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter first integer (a): ");
    int a = scanner.nextInt();

    System.out.print("Enter second integer (b): ");
    int b = scanner.nextInt();

    if (b == 0) {
      System.out.println("Error: Division by zero is not allowed.");
      return;
    }

    System.out.printf("a + b = %d\n", a + b);
    System.out.printf("a - b = %d\n", a - b);
    System.out.printf("a * b = %d\n", a * b);
    System.out.printf("a / b (integer quotient) = %d\n", a / b); // truncates towards zero
    System.out.printf("a %% b (remainder) = %d\n", a % b); // same sign as the first operand

    scanner.close();
  }
}
