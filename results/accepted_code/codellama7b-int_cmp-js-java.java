import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter first integer: ");
    int a = sc.nextInt();
    System.out.print("Enter second integer: ");
    int b = sc.nextInt();

    if (a == b) {
      System.out.println(a + " equals " + b);
    } else if (a < b) {
      System.out.println(a + " is less than " + b);
    } else if (a > b) {
      System.out.println(a + " is greater than " + b);
    }
  }
}
