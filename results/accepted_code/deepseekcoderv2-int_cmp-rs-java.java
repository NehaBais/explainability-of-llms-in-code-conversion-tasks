import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter the first integer:");
    int a = scanner.nextInt();

    System.out.println("Enter the second integer:");
    int b = scanner.nextInt();

    if (a < b) {
      System.out.printf("%d is less than %d\n", a, b);
    } else if (a == b) {
      System.out.printf("%d equals %d\n", a, b);
    } else if (a > b) {
      System.out.printf("%d is greater than %d\n", a, b);
    }

    scanner.close();
  }
}
