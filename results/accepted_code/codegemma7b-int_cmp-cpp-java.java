import java.util.Scanner;

public class IntegerComparison {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int a, b;

    if (!scanner.hasNextInt() || !scanner.hasNextInt()) {
      System.err.println("Could not read the numbers.");
      return;
    }

    a = scanner.nextInt();
    b = scanner.nextInt();

    scanner.close();

    if (a < b) {
      System.out.println(a + " is less than " + b);
    }

    if (a == b) {
      System.out.println(a + " is equal to " + b);
    }

    if (a > b) {
      System.out.println(a + " is greater than " + b);
    }
  }
}
