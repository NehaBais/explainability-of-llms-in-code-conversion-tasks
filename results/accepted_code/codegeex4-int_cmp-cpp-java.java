import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int a, b;

    try {
      System.out.print("Enter the first integer: ");
      a = scanner.nextInt();
      System.out.print("Enter the second integer: ");
      b = scanner.nextInt();

      // test for less-than
      if (a < b) System.out.println(a + " is less than " + b);

      // test for equality
      if (a == b) System.out.println(a + " is equal to " + b);

      // test for greater-than
      if (a > b) System.out.println(a + " is greater than " + b);
    } catch (Exception e) {
      System.err.println("Could not read the numbers.");
    }
  }
}
