import java.util.Scanner; // Import the Scanner class

public class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in); // Create a Scanner object

    System.out.println("Enter number: ");
    int n1 = scan.nextInt(); // Read user input

    System.out.println("Enter number: ");
    int n2 = scan.nextInt(); // Read user input

    if (n1 < n2) {
      System.out.printf("%d less than %d\n", n1, n2);
    } else if (n1 == n2) {
      System.out.printf("%d equal to %d\n", n1, n2);
    } else {
      System.out.printf("%d greater than %d\n", n1, n2);
    }
  }
}
