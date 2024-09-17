import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter first integer:");
    int a = scanner.nextInt();

    System.out.println("Enter second integer:");
    int b = scanner.nextInt();

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division = (double) a / b; // casting to double to get floating point result
    int remainder = a % b;

    System.out.println("Sum: " + sum);
    System.out.println("Difference: " + difference);
    System.out.println("Product: " + product);
    System.out.println("Division: " + division);
    System.out.println("Remainder: " + remainder);

    // Exponentiation in Java is done with Math.pow(a, b)
    double exponentiation = Math.pow(a, b);
    System.out.println("Exponentiation: " + exponentiation);
  }
}
