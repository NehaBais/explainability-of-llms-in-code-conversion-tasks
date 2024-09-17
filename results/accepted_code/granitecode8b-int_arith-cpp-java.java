import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter first integer: ");
    int a = input.nextInt();
    System.out.print("Enter second integer: ");
    int b = input.nextInt();
    System.out.println("a+b = " + (a + b));
    System.out.println("a-b = " + (a - b));
    System.out.println("a*b = " + (a * b));
    // Quotient rounds towards zero
    System.out.print("a/b = ");
    if (a % b < 0) {
      // Remainder has the same sign as the second operand
      System.out.printf("%d, remainder %d", a / b - 1, a % b);
    } else {
      // Remainder has the same sign as the first operand
      System.out.printf("%d, remainder %d", a / b, a % b);
    }
    System.out.println();
  }
}
