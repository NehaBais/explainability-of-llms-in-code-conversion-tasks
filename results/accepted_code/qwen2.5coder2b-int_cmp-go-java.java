import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter number: ");
    int n1 = scanner.nextInt();

    System.out.print("Enter another number: ");
    int n2 = scanner.nextInt();

    if (n1 < n2) {
      System.out.println(n1 + " is less than " + n2);
    } else if (n1 == n2) {
      System.out.println(n1 + " is equal to " + n2);
    } else {
      System.out.println(n1 + " is greater than " + n2);
    }

    scanner.close();
  }
}
