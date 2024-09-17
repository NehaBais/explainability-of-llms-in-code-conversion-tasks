import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    if (!sc.hasNextInt() || !sc.hasNextInt()) {
      System.err.println("Could not read the numbers");
      return;
    }

    int A = sc.nextInt();
    int b = sc.nextInt();

    // test for less-than
    if (A < b) System.out.println(A + " Is less than " + b);

    // test for equality
    if (A == b) System.out.println(A + " Is equal to " + b);

    // test for greater-than
    if (A > b) System.out.println(A + " Is greater than " + b);

    sc.close();
  }
}
