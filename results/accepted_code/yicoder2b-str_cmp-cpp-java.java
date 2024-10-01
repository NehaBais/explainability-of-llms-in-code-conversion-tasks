import java.util.Scanner;

public class Main {
  // Main method to run the program
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter two strings:");
    String a = scanner.nextLine();
    String b = scanner.nextLine();
    System.out.println("Comparing strings: " + a + " and " + b);
    if (a.equals(b)) {
      System.out.println(a + " is exactly equal to " + b);
    } else {
      System.out.println(a + " is not exactly equal to " + b);
    }

    // Using java toLowerCase method for case insensitive comparison
    String aLower = a.toLowerCase();
    String bLower = b.toLowerCase();
    if (aLower.equals(bLower)) {
      System.out.println(a + " is case insensitive equal to " + b);
    } else {
      System.out.println(a + " is not case insensitive equal to " + b);
    }
    scanner.close();
  }
}
