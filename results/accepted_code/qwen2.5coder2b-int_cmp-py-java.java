import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Ask user to enter the values of a and b
    System.out.print("Enter value of a: ");
    int a = scanner.nextInt();

    System.out.print("Enter value of b: ");
    int b = scanner.nextInt();

    // Use if-else statements to check the conditions
    if (a < b) {
      System.out.println("a is less than b");
    } else if (a > b) {
      System.out.println("a is greater than b");
    } else if (a == b) {
      System.out.println("a is equal to b");
    }

    scanner.close();
  }
}
