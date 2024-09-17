import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    int A, B;
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the first integer:");
    A = sc.nextInt();

    System.out.println("Enter the second integer:");
    B = sc.nextInt();

    compare(A, B);

    sc.close();
  }

  public static void compare(int A, int B) {
    if (A == B) System.out.println(A + " equals " + B);
    if (A < B) System.out.println(A + " is less than " + B);
    if (A > B) System.out.println(A + " Is greater than " + B);
  }
}
