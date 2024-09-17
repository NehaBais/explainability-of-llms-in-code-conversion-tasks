import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter the first integer:");
    int A = scanner.nextInt();

    System.out.println("Enter the second integer:");
    int b = scanner.nextInt();

    float C = (float) A / (float) b; // For quotient we're using float to retain decimal part

    System.out.println("sum:                " + (A + b));
    System.out.println("difference:         " + (A - b));
    System.out.println("product:            " + (A * b));
    System.out.println("integer quotient:   " + ((int) C)); // truncates towards zero
    System.out.println("remainder:          " + (A % b)); // same sign as first operand

    scanner.close();
  }
}
