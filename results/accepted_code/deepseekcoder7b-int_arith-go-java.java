import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);

    System.out.print("Enter two integers: ");
    int a = scan.nextInt();
    int b = scan.nextInt();

    System.out.printf("%d + %d = %d%n", a, b, a + b);
    System.out.printf("%d - %d = %d%n", a, b, a - b);
    System.out.printf("%d * %d = %d%n", a, b, a * b);
    System.out.printf("%d / %d = %d (rounded towards zero)%n", a, b, a / b); // truncates towards 0
    System.out.printf(
        "%d %% %d = %d (same sign as first operand)%n", a, b, a % b); // same sign as first operand

    scan.close();
  }
}
