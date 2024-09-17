import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter first integer:");
    int A = scanner.nextInt();
    System.out.println("Enter second integer:");
    int b = scanner.nextInt();

    if (A < b) {
      System.out.println(A + " is less than " + b);
    } else if (A == b) {
      System.out.println(A + " equals " + b);
    } else {
      System.out.println(A + " is greater than " + b);
    }

    scanner.close();
  }
}
