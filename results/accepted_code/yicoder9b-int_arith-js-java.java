import java.util.Scanner; // Import the Scanner class

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in); // Create a Scanner object
    System.out.println("Enter first number:");
    int a = scanner.nextInt(); // Read user input
    System.out.println("Enter second number:");
    int b = scanner.nextInt(); // Read user input

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int division = a / b; // It rounds towards zero.
    int remainder =
        a % b; // This produces the remainder after dividing 'b' into 'a'. The '%' operator is
    // called the 'modulo' operator. Its sign matches with the first operand, if they
    // are different.

    System.out.println("a + b = " + sum);
    System.out.println("a - b = " + difference);
    System.out.println("a * b = " + product);
    System.out.println("a / b = " + division);
    System.out.println("a % b = " + remainder);
  }
}
