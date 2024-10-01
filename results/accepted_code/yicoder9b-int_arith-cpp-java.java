import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    // sum
    int sum = a + b;
    System.out.println("a+b = " + sum);

    // difference
    int diff = a - b;
    System.out.println("a-b = " + diff);

    // product
    int prod = a * b;
    System.out.println("a*b = " + prod);

    // integer quotient and remainder
    if (b != 0) { // Prevent division by zero
      int quot = a / b;
      int rem = a % b;
      System.out.println("a/b = " + quot + ", remainder " + rem);
    } else {
      System.out.println("Cannot compute quotient and remainder when the second number is zero");
    }
  }
}
