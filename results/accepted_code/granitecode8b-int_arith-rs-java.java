import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter first integer: ");
    int a = scanner.nextInt();
    System.out.print("Enter second integer: ");
    int b = scanner.nextInt();

    // Calculate the sum, difference, product, quotient, remainder, and exponentiation
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b; // rounds towards zero
    int remainder = a % b; // same sign as first operand

    System.out.println("Sum: " + sum);
    System.out.println("Difference: " + difference);
    System.out.println("Product: " + product);
    System.out.println("Quotient (rounded towards zero): " + quotient);
    System.out.println("Remainder (same sign as first operand): " + remainder);

    // Calculate exponentiation using the Math class
    double exponent = Math.pow(a, b);
    System.out.println("Exponentiation: " + exponent);
  }
}
