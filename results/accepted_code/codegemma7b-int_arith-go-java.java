import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Get two integers from the user
    System.out.print("Enter two integers: ");
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    // Calculate the sum, difference, product, quotient, and remainder
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b; // Truncates towards zero
    int remainder = a % b; // Same sign as the first operand

    // Print the results
    System.out.println(a + " + " + b + " = " + sum);
    System.out.println(a + " - " + b + " = " + difference);
    System.out.println(a + " * " + b + " = " + product);
    System.out.println(a + " / " + b + " = " + quotient);
    System.out.println(a + " %% " + b + " = " + remainder);

    scanner.close();
  }
}
