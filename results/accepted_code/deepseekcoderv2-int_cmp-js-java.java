import java.util.Scanner;

public class CompareIntegers {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter the first integer: ");
    int a = scanner.nextInt();

    System.out.print("Enter the second integer: ");
    int b = scanner.nextInt();

    compare(a, b);
  }

  public static void compare(int a, int b) {
    if (a == b) {
      System.out.println(a + " equals " + b);
    } else if (a < b) {
      System.out.println(a + " is less than " + b);
    } else if (a > b) {
      System.out.println(a + " is greater than " + b);
    } else {
      // This block will only be reached if a and b are not equal, but this should never happen with
      // integers.
      System.out.println("This case should not occur with integer comparison.");
    }
  }
}
