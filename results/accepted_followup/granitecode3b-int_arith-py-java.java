import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter first number: ");
    int input1 = scanner.nextInt();

    System.out.print("Enter second number: ");
    int input2 = scanner.nextInt();

    int qq = input1 + input2;
    System.out.println("Sum: " + qq);

    int ww = input1 - input2;
    System.out.println("Difference: " + ww);

    int ee = input1 * input2;
    System.out.println("Product: " + ee);

    double rr = (double) input1 / input2;
    System.out.println("Integer quotient: " + Math.round(rr));
    System.out.println("Float quotient: " + rr);

    int tt = (int) (input1 / input2);
    doubleuu = tt - tt * 1.0;
    System.out.println("Whole Remainder: " + (int) uu);
    System.out.println("Actual Remainder: " + uu);

    double yy = Math.pow(input1, input2);
    System.out.println("Exponentiation: " + yy);
  }
}
