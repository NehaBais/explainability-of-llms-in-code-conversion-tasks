import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Get two integers from the user
    int a = Integer.parseInt(args[0]);
    int b = Integer.parseInt(args[1]);

    // Display their sum
    System.out.println("sum:              " + (a + b));

    // Display their difference
    System.out.println("difference:       " + (a - b));

    // Display their product
    System.out.println("product:          " + (a * b));

    // Display their integer quotient (truncates towards zero)
    System.out.println("integer quotient: " + Math.floorDiv(a, b));

    // Display their remainder (same sign as the first operand)
    System.out.println("remainder:        " + (a % b));
  }
}
