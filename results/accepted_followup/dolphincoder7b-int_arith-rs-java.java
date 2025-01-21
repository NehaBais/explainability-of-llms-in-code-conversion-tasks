import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter two integers: ");
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    System.out.println("sum:               " + (a + b));
    System.out.println("difference:        " + (a - b));
    System.out.println("product:           " + (a * b));
    System.out.println(
        "integer quotient:  " + (a / b) + " (rounded towards zero)"); // truncates towards zero
    System.out.println("remainder:         " + (a % b) + " (same sign as first operand)");
  }
}
