import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    int n1, n2;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter number:");
    n1 = sc.nextInt();
    System.out.println("Enter number:");
    n2 = sc.nextInt();

    if (n1 < n2) {
      System.out.println(n1 + " is less than " + n2);
    } else if (n1 == n2) {
      System.out.println(n1 + " is equal to " + n2);
    } else {
      System.out.println(n1 + " is greater than " + n2);
    }
  }
}
