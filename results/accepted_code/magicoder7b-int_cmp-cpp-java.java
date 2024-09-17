import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Get two integers from user
    System.out.println("Enter the first number: ");
    int a = scanner.nextInt();

    System.out.println("Enter the second number: ");
    int b = scanner.nextInt();

    // Display message based on comparison of integers
    if (a < b) {
      System.out.printf("%d is less than %d\n", a, b);
    } else if (a == b) {
      System.out.printf("%d is equal to %d\n", a, b);
    } else if (a > b) {
      System.out.printf("%d is greater than %d\n", a, b);
    }

    scanner.close(); // Close the scanner once done with it.
  }
}
