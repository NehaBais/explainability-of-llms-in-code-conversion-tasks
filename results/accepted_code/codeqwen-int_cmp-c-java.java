import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int A, b;
    A = sc.nextInt();
    b = sc.nextInt();
    sc.close();

    if (A < b) {
      System.out.println(A + " is less than " + b);
    } else if (A == b) {
      System.out.println(A + " is equal to " + b);
    } else {
      System.out.println(A + " Is greater than " + b);
    }
  }
}
