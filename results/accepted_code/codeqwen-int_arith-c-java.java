import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the first integer:");
    int A = sc.nextInt();

    System.out.println("Enter the second integer:");
    int b = sc.nextInt();

    if (b == 0) {
      System.out.println("Error! Division by zero is not allowed.");
      return;
    }

    System.out.printf("Sum of %d and %d is %d%n", A, b, A + b);
    System.out.printf("Difference between %d and %d is %d%n", A, b, A - b);
    System.out.printf("Product of %d and %d is %d%n", A, b, A * b);
    System.out.printf("Quotient when dividing %d by %d is %d%n", A, b, A / b);
    System.out.printf("Remainder when dividing %d by %d is %d%n", A, b, A % b);
  }
}
