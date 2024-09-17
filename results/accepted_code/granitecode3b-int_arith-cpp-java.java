import java.util.Scanner;

public class CodeConversion {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    System.out.println("a+b = " + (a + b));
    System.out.println("a-b = " + (a - b));
    System.out.println("a*b = " + (a * b));

    double quotient = (double) a / b;
    int remainder = a % b;
    if ((b < 0 && remainder < 0) || (b > 0 && remainder >= 0)) {
      remainder *= -1;
    }
    System.out.println("a/b = " + quotient + ", remainder " + remainder);
  }
}
