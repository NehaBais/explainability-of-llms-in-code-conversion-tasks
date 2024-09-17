import java.util.Scanner;

public class MathOperations {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter first number: ");
    int num1 = sc.nextInt();
    System.out.print("Enter second number: ");
    int num2 = sc.nextInt();

    // Sum
    int sum = num1 + num2;
    System.out.println("Sum: " + sum);

    // Difference
    int diff = num1 - num2;
    System.out.println("Difference: " + diff);

    // Product
    int product = num1 * num2;
    System.out.println("Product: " + product);

    // Integer quotient
    int integerQuotient = num1 / num2;
    System.out.println("Integer quotient: " + integerQuotient);

    // Float quotient
    float floatQuotient = (float) num1 / (float) num2;
    System.out.println("Float quotient: " + floatQuotient);

    // Whole Remainder
    int wholeRemainder = num1 % num2;
    System.out.println("Whole Remainder: " + wholeRemainder);

    // Actual Remainder
    float actualRemainder = ((float) num1 / (float) num2) - ((int) (num1 / num2));
    System.out.println("Actual Remainder: " + actualRemainder);

    // Exponentiation
    int exponentiation = (int) Math.pow(num1, num2);
    System.out.println("Exponentiation: " + exponentiation);
  }
}
