import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter number 1: ");
    int n1 = scanner.nextInt();

    System.out.print("Enter number 2: ");
    int n2 = scanner.nextInt();

    if (n1 < n2) {
      System.out.println(n1 + " less than " + n2);
    } else if (n1 == n2) {
      System.out.println(n1 + " equal to " + n2);
    } else if (n1 > n2) {
      System.out.println(n1 + " greater than " + n2);
    }

    scanner.close();
  }
}
