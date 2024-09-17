import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("enter two integers: ");
    int A = sc.nextInt();
    int b = sc.nextInt();

    // Print sum
    System.out.printf("%d + %d = %d\n", A, b, A + b);

    // Print difference
    System.out.printf("%d - %d = %d\n", A, b, A - b);

    // Print product
    System.out.printf("%d * %d = %d\n", A, b, A * b);

    // Print integer quotient (floor division)
    System.out.printf("%d / %d = %d\n", A, b, A / b);

    // Print remainder (same sign as the first operand)
    int remainder = A % b;
    System.out.printf("%d %% %d = %d\n", A, b, remainder);
  }
}
