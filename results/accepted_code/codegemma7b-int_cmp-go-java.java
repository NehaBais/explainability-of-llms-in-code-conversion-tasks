import java.util.Scanner;

public class IntegerComparison {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Get two integers from the user
    System.out.print("Enter the first number: ");
    int n1 = scanner.nextInt();

    System.out.print("Enter the second number: ");
    int n2 = scanner.nextInt();

    // Check the comparison between the two integers
    if (n1 < n2) {
      System.out.println(n1 + " is less than " + n2);
    } else if (n1 == n2) {
      System.out.println(n1 + " is equal to " + n2);
    } else {
      System.out.println(n1 + " is greater than " + n2);
    }
  }
}
