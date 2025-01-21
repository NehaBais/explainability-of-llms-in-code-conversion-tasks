import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter the first integer:");
    int a = scanner.nextInt();

    System.out.println("Enter the second integer:");
    int b = scanner.nextInt();

    System.out.println("Sum: " + (a + b));
    ;
    System.out.println("Difference: " + (a - b));
    ;
    System.out.println("Product: " + (a * b));
    ;

    if (b != 0) {
      System.out.println("Integer Quotient: " + (a / b));
      ;
      int remainder = a % b;
      System.out.println("Remainder: " + remainder);
      ;

      // Java's Math class pow method
      System.out.println("Exponentiation: " + Math.pow(a, b));
      ;
    } else {
      System.out.println("Cannot perform exponentiation when second operand is zero");
    }
  }
}
