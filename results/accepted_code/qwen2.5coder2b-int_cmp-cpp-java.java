import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int a, b;

    System.out.println("Please enter two numbers:");
    if (scanner.hasNextInt()) {
      a = scanner.nextInt();
    } else {
      System.err.println("Could not read the first number");
      return;
    }

    if (scanner.hasNextInt()) {
      b = scanner.nextInt();
    } else {
      System.err.println("Could not read the second number");
      return;
    }

    // test for less-than
    if (a < b) {
      System.out.println(a + " is less than " + b);
    }

    // test for equality
    if (a == b) {
      System.out.println(a + " is equal to " + b);
    }

    // test for greater-than
    if (a > b) {
      System.out.println(a + " is greater than " + b);
    }

    scanner.close();
  }
}
