import java.util.Scanner;

public class Main {
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

    double rr = (double) input1 / (double) input2;
    int intQuotient = (int) Math.floor(rr);
    double floatQuotient = (double) (intQuotient) + (rr - intQuotient);
    System.out.println("Integer quotient: " + intQuotient);
    System.out.println("Float quotient: " + floatQuotient);

    int wholeRemainder = input1 % input2;
    if (input1 < 0 && input2 > 0 || input1 > 0 && input2 < 0) {
      wholeRemainder *= -1;
    }
    System.out.println("Whole Remainder: " + wholeRemainder);

    double actualRemainder = (double) (intQuotient * input2) + wholeRemainder;
    System.out.println("Actual Remainder: " + actualRemainder);

    long yy = (long) Math.pow(input1, input2);
    System.out.println("Exponentiation: " + yy);
  }
}
