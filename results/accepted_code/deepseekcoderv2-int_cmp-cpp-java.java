import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int a, b;

    if (!scanner.hasNextInt()) {
      System.err.println("could not read the numbers");
      return;
    }
    a = scanner.nextInt();
    if (!scanner.hasNextInt()) {
      System.err.println("could not read the numbers");
      return;
    }
    b = scanner.nextInt();

    // test for less-than
    if (a < b) System.out.println(a + " is less than " + b);

    // test for equality
    if (a == b) System.out.println(a + " is equal to " + b);

    // test for greater-than
    if (a > b) System.out.println(a + " is greater than " + b);
  }
}
