import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter the first integer:");
    int input1 = scanner.nextInt();

    System.out.println("Enter the second integer:");
    int input2 = scanner.nextInt();

    int sum = input1 + input2;
    int difference = input1 - input2;
    int product = input1 * input2;
    double floatQuotient = (double) input1 / input2;
    int integerQuotient = input1 / input2;
    int wholeRemainder = input1 % input2;
    int exponentiation = (int) Math.pow(input1, input2);

    System.out.println("Sum: " + sum);
    System.out.println("Difference: " + difference);
    System.out.println("Product: " + product);
    System.out.println("Integer quotient: " + integerQuotient);
    System.out.println("Float quotient: " + floatQuotient);
    System.out.println("Whole Remainder: " + wholeRemainder);
    System.out.println("Actual Remainder: " + (input1 % input2));
    System.out.println("Exponentiation: " + exponentiation);

    scanner.close();
  }
}
