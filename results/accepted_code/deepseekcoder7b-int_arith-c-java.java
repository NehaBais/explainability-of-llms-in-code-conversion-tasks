import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);

    System.out.println("Enter two integers:");
    int a = scan.nextInt();
    int b = scan.nextInt();

    System.out.printf("a+b=%d\n", a + b);
    System.out.printf("a-b=%d\n", a - b);
    System.out.printf("a*b=%d\n", a * b);

    // Integer division in Java truncates towards zero if the divisor is positive and toward
    // negative infinity if it's negative.
    // Also, as per C99 standard, remainder operator (%) gives signed result same as first operand
    // sign.
    System.out.printf("a/b=%d\n", a / b);
    System.out.printf("a%%b=%d\n", a % b);
  }
}
