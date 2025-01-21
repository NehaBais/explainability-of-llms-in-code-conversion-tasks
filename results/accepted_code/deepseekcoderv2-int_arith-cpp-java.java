import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int a = scanner.nextInt();
    int b = scanner.nextInt();

    System.out.println("a+b = " + (a + b));
    System.out.println("a-b = " + (a - b));
    System.out.println("a*b = " + (a * b));

    // For quotient and remainder, we need to handle integer division differently in Java
    int quotient = a / b;
    int remainder = a % b;

    System.out.println("a/b = " + quotient + ", remainder " + remainder);

    scanner.close();
  }
}
