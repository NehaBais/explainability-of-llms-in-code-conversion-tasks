import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in); // Create a Scanner object for reading from the user

    System.out.println("Enter two integers:");

    int a = scan.nextInt(); // read first integer input by the user
    int b = scan.nextInt(); // read second integer input by the user

    if (a < b) { // test condition for less than case
      System.out.printf("%d is less than %d\n", a, b);
    } else if (a == b) { // test condition for equals to case
      System.out.printf("%d equals %d\n", a, b);
    } else if (a > b) { // test condition for greater than case
      System.out.printf("%d is greater than %d\n", a, b);
    }

    scan.close(); // close the Scanner object after use to prevent resource leak
  }
}
