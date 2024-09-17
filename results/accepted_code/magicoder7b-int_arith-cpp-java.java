import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter first integer:");
    int a = scanner.nextInt();

    System.out.println("Enter second integer:");
    int b = scanner.nextInt();

    // Calculate and print the results
    System.out.println("a+b = " + (a + b));
    System.out.println("a-b = " + (a - b));
    System.out.println("a*b = " + (a * b));

    if (b != 0) { // Avoid divide by zero error
      int quotient = a / b;
      int remainder = a % b;

      System.out.println("a/b = " + quotient);
      System.out.println(
          (remainder < 0 && b > 0) || (remainder > 0 && b < 0)
              ? "Remainder sign matches the second operand"
              : "Remainder sign matches the first operand");
    } else {
      System.out.println("a/b = Division by zero is not allowed");
    }
  }
}
