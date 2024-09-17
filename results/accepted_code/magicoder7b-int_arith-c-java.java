import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int a, b, sum, difference, product, quotient, remainder;

    System.out.println("Enter first integer:");
    a = scanner.nextInt();

    System.out.println("Enter second integer:");
    b = scanner.nextInt();

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b; // Will truncate towards zero by default in Java.
    remainder = a % b; // Remainder will have the same sign as first operand by default.

    System.out.println("Sum: " + sum);
    System.out.println("Difference: " + difference);
    System.out.println("Product: " + product);
    System.out.println("Quotient (truncated towards zero): " + quotient);
    System.out.println("Remainder (same sign as first operand): " + remainder);
  }
}
