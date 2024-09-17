import java.util.Scanner;

public class CompareNumbers {
  public static void main(String[] args) {
    int num1, num2;

    // Get user input for two numbers
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the first number: ");
    num1 = scanner.nextInt();
    System.out.print("Enter the second number: ");
    num2 = scanner.nextInt();

    // Compare numbers and print appropriate message
    if (num1 < num2) {
      System.out.println(num1 + " is less than " + num2);
    } else if (num1 == num2) {
      System.out.println(num1 + " is equal to " + num2);
    } else {
      System.out.println(num1 + " is greater than " + num2);
    }

    // Close scanner
    scanner.close();
  }
}
