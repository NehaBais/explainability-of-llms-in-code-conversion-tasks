import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter first integer: ");
    int a = input.nextInt();
    System.out.print("Enter second integer: ");
    int b = input.nextInt();

    // Sum
    int sum = a + b;
    System.out.println(a + " + " + b + " = " + sum);

    // Difference
    int difference = a - b;
    System.out.println(a + " - " + b + " = " + difference);

    // Product
    int product = a * b;
    System.out.println(a + " * " + b + " = " + product);

    // Quotient and Remainder (truncated towards 0)
    int quotient = a / b;
    int remainder = a % b;
    System.out.println(a + " / " + b + " = " + quotient);
    System.out.println(a + " % " + b + " = " + remainder);

    // Exponentiation (no operator in Java)
    int exponentiation = (int) Math.pow(a, b);
    System.out.println(a + " ^ " + b + " = " + exponentiation);
  }
}
