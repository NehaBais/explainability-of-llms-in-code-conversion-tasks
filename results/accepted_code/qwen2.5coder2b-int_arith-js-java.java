import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter the first integer: ");
    int a = scanner.nextInt();

    System.out.print("Enter the second integer: ");
    int b = scanner.nextInt();

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division = (double) a / b; // Casting to double for division
    int remainder = Math.floorMod(a, b);

    System.out.println("Sum: " + sum);
    System.out.println("Difference: " + difference);
    System.out.println("Product: " + product);
    System.out.println("Division: " + division);
    System.out.println("Remainder: " + remainder);

    scanner.close();
  }
}
