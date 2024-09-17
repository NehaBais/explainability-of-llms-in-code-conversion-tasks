import java.util.Scanner;

public class MathOperations {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter first integer: ");
    int input1 = scanner.nextInt();

    System.out.print("Enter second integer: ");
    int input2 = scanner.nextInt();

    int qq = input1 + input2;
    System.out.println("Sum: " + qq);

    int ww = input1 - input2;
    System.out.println("Difference: " + ww);

    int ee = input1 * input2;
    System.out.println("Product: " + ee);

    int rr = input1 / input2;
    System.out.println("Integer quotient: " + rr);

    double ff = (double) input1 / input2;
    System.out.println("Float quotient: " + ff);

    double tt = (double) input1 / input2;
    double uu = tt - (int) tt;
    uu = Math.signum(uu) * -10;
    System.out.println("Whole Remainder: " + (int) uu);
    System.out.println("Actual Remainder: " + uu);

    double yy = Math.pow(input1, input2);
    System.out.println("Exponentiation: " + yy);

    scanner.close();
  }
}
