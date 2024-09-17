import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter value of a: ");
    int A = sc.nextInt();
    System.out.println("Enter value of b: ");
    int B = sc.nextInt();

    if (A < B) {
      System.out.println("a is less than b");
    } else if (A > B) {
      System.out.println("A is greater than b");
    } else if (A == B) {
      System.out.println("A is equal to b");
    }
  }
}
