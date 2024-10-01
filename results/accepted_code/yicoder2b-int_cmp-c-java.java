import java.util.Scanner; // Importing Scanner class to take input from user

public class Main {
  public static void main(String[] args) {
    // Initialising variables
    int a, b;
    Scanner scanner = new Scanner(System.in);

    // Taking inputs from user
    a = scanner.nextInt();
    b = scanner.nextInt();

    // Comparing the integers and printing the result
    if (a < b) {
      System.out.println(a + " is less than " + b);
    } else if (a == b) {
      System.out.println(a + " is equal to " + b);
    } else {
      System.out.println(a + " is greater than " + b);
    }
  }
}
