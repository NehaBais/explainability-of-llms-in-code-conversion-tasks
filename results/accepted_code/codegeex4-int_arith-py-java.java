import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter first integer:");
    int input1 = scanner.nextInt();

    System.out.println("Enter second integer:");
    int input2 = scanner.nextInt();

    int sum = input1 + input2;
    System.out.println("Sum: " + sum);

    int difference = input1 - input2;
    System.out.println("Difference: " + difference);

    int product = input1 * input2;
    System.out.println("Product: " + product);

    int integerQuotient = input1 / input2;
    float floatQuotient = (float) input1 / input2;
    System.out.println("Integer Quotient: " + integerQuotient);
    System.out.println("Float Quotient: " + floatQuotient);

    // There is no operator to find the actual remainder based on the sign of operands

    int exponentiation = (int) Math.pow(input1, input2);
    System.out.println("Exponentiation: " + exponentiation);
  }
}
