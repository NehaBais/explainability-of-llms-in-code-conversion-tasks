import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter first integer: ");
    int a = scanner.nextInt();
    System.out.print("Enter second integer: ");
    int b = scanner.nextInt();

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division =
        (double) a
            / b; // Note that division in Java is always floating-point, so we cast 'a' to a double
    // before dividing
    int remainder = a % b;

    System.out.println("a + b = " + sum);
    System.out.println("a - b = " + difference);
    System.out.println("a * b = " + product);
    System.out.println(
        "a / b = "
            + division); // Note that the quotient is always floating-point, so we print it as a
    // double instead of an integer
    System.out.println(
        "a % b = "
            + remainder); // The modulo operator in Java returns the remainder after dividing 'a' by
    // 'b', which has the same sign as 'a' or 'b' depending on which one is
    // bigger
  }
}
