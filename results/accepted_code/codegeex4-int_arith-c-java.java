import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter the first integer:");
    int a = scanner.nextInt();

    System.out.println("Enter the second integer:");
    int b = scanner.nextInt();

    if (b == 0) {
      System.out.println("Error: Division by zero is not allowed.");
      return;
    }

    System.out.println("Sum: " + (a + b));
    System.out.println("Difference: " + (a - b));
    System.out.println("Product: " + (a * b));
    System.out.println("Integer Quotient: " + (a / b)); // truncates towards 0
    System.out.println("Remainder: " + (a % b)); // same sign as first operand

    scanner.close();
  }
}
