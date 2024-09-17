import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter first integer: ");
    int a = scanner.nextInt();
    System.out.print("Enter second integer: ");
    int b = scanner.nextInt();
    System.out.println("a+b = " + (a + b));
    System.out.println("a-b = " + (a - b));
    System.out.println("a*b = " + (a * b));
    // Truncates towards 0
    System.out.println("a/b = " + (a / b));
    // Same sign as first operand
    System.out.println("a%b = " + (a % b));
  }
}
