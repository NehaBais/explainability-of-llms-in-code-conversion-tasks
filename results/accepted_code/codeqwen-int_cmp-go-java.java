import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter number: ");
    int n1 = sc.nextInt();

    System.out.println("Enter number: ");
    int n2 = sc.nextInt();

    if (n1 < n2) {
      System.out.println(n1 + " less than " + n2);
    } else if (n1 == n2) {
      System.out.println(n1 + " equal to " + n2);
    } else {
      System.out.println(n1 + " greater than " + n2);
    }
  }
}
