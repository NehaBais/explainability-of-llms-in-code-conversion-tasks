import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter first integer:");
    int a = scanner.nextInt();
    System.out.println("Enter second integer:");
    int b = scanner.nextInt();

    if (a < b) {
      System.out.println(a + " is less than " + b);
    } else if (a == b) {
      System.out.println(a + " equals " + b);
    } else if (a > b) {
      System.out.println(a + " is greater than " + b);
    }
  }
}
