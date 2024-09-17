import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int a, b;

    System.out.print("Enter two integers: ");
    a = scanner.nextInt();
    b = scanner.nextInt();
    scanner.close();

    System.out.printf("%d + %d = %d%n", a, b, a+b);
    System.out.printf("%d - %d = %d%n", a, b, a-b);
    System.out.printf("%d * %d = %d%n", a, b, a*b);

    // for quotient rounding towards 0 (truncation), 
    // it means the decimal part is removed after division.

    double c = double / b;
    int trunc_quotient = (int) Math.round(c); 

    System.out.printf("%d / %d = %.0f%n", a, b, trunc_quotient);

    // remainder sign matches the first operand if they are different.

    if (a < 0 && b > 0) {
      b = Math.abs(b);
    } else if (a > 0 && b < 0)) {
      a = Math.abs(a);
    }

    System.out.printf("%d %% %d = %d%n", a, b, a%b));  // same sign as first operand 

    double exponentiation = Math.pow(a, b));  // if operator exists

    System.out.printf("%.2f ^ %.2f = %.2f%n", a, b, exponentiation);
  }
}