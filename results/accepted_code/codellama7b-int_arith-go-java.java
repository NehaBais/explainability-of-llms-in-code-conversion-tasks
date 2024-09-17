import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter two integers: ");
    int a = scanner.nextInt();
    int b = scanner.nextInt();
    System.out.printf("%d + %d = %d\n", a, b, a + b);
    System.out.printf("%d - %d = %d\n", a, b, a - b);
    System.out.printf("%d * %d = %d\n", a, b, a * b);
    System.out.printf("%d / %d = %d (truncates towards 0)\n", a, b, a / b);
    System.out.printf("%d %% %d = %d (same sign as first operand)", a, b, a % b);
  }
}
