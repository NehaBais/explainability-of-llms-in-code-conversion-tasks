import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Get two integers from the user
    int a = Integer.parseInt(args[0]);
    int b = Integer.parseInt(args[1]);

    // Calculate and display their sum, difference, product, integer quotient, remainder, and
    // exponentiation
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division =
        (double) a / b; // Ensure division is done in floating point for accurate quotient
    int remainder = a % b;
    double exponentiation = Math.pow(a, b); // Calculate exponentiation

    // Output the results
    System.out.println("a + b = " + sum);
    System.out.println("a - b = " + difference);
    System.out.println("a * b = " + product);
    System.out.println("a / b = " + division); // Quotient is displayed as a floating point number
    System.out.println("a % b = " + remainder); // Remainder operation
    System.out.println("a ^ b = " + exponentiation); // Exponentiation operation

    scanner.close();
  }
}
