import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter first number: ");
    int a = sc.nextInt();
    System.out.println();

    System.out.print("Enter second number: ");
    int b = sc.nextInt();
    System.out.println();

    System.out.println("Sum: " + (a + b));
    System.out.println("Difference: " + (a - b));
    System.out.println("Product: " + (a * b));
    System.out.println("Integer Quotient (truncates towards zero): " + (a / b));
    System.out.println("Remainder (same sign as first operand): " + (a % b));
  }
}
