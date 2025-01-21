import java.util.Scanner;

public class Main {
  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter first number: ");
    int a = scanner.nextInt();

    System.out.println("Enter second number: ");
    int b = scanner.nextInt();

    int sum = a + b;
    int difference = a - b;
    int product = a * b;

    // In Java, the division operator "/" always rounds towards zero
    int quotient = a / b;

    // The remainder operator "%" in Java has the same sign as the first operand
    int remainder = a % b;

    // Exponentiation doesn't exist directly in Java. Use Math.pow()
    double exponentiation = Math.pow(a, b);

    System.out.println("a + b = " + sum);
    System.out.println("a - b = " + difference);
    System.out.println("a * b = " + product);
    System.out.println("a / b = " + quotient);
    System.out.println("a % b = " + remainder);
    System.out.printf("%.2f ^ %.2f = %.2f", (double) a, (double) b, exponentiation);
  }
}
