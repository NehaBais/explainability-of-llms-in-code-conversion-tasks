import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int a, b;

    System.out.println("Enter two integers:");

    if (scanner.hasNextInt()) {
      a = scanner.nextInt();

      if (scanner.hasNextInt()) {
        b = scanner.nextInt();

        // test for less-than
        if (a < b) System.out.println(a + " is less than " + b);

        // test for equality
        else if (a == b) System.out.println(a + " is equal to " + b);

        // test for greater-than
        else System.out.println(a + " is greater than " + b);
      } else {
        System.err.println("Could not read the second number");
        return;
      }
    } else {
      System.err.println("Could not read the first number");
    }

    scanner.close();
  }
}
