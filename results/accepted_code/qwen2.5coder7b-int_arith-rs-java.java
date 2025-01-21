import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter the first integer:");
    int a = scanner.nextInt();

    System.out.println("Enter the second integer:");
    int b = scanner.nextInt();

    System.out.println("sum:              " + (a + b));
    System.out.println("difference:       " + (a - b));
    System.out.println("product:          " + (a * b));

    // For division, we need to handle the rounding manually.
    int quotient = a / b;
    System.out.println("integer quotient: " + quotient);

    // For remainder, we need to handle sign manually too
    int remainder = a % b;
    System.out.println("remainder:        " + remainder);

    // Java doesn't have exponentiation operator, but Math.pow method can be used.
    double powerOfAtoB = Math.pow(a, b);
    System.out.println("exponentiation of " + a + " to the power " + b + ": " + powerOfAtoB);
  }
}
