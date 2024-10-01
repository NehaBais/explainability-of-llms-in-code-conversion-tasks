import java.util.Scanner; // Importing Scanner class to take input from user

public class Main {
  public static void main(String[] args) {
    // Initialising scanner object
    Scanner sc = new Scanner(System.in);

    int a, b;
    a = sc.nextInt(); // Taking first integer input from user
    b = sc.nextInt(); // Taking second integer input from user

    // Displaying the sum of two integers
    System.out.println("Sum = " + (a + b));

    // Displaying the difference between two integers
    System.out.println("Difference = " + (a - b));

    // Displaying the product of two integers
    System.out.println("Product = " + (a * b));

    // Displaying the quotient of two integers, rounded towards zero
    double quotient =
        (double) a
            / b; // Since Java doesn't have built-in round function for floats or doubles, we cast
    // to double before taking the quotient
    System.out.println("Quotient = " + quotient);

    // Displaying the sign of the remainder when two integers are divided
    int rem = a % b; // Finding the remainder of division
    if (rem * ((a < 0) ? -1 : 1) == ((a > 0) ? (b > 0) ? 1 : -1 : (b < 0) ? 1 : -1))
      System.out.println(
          "Sign of Remainder = Same as sign of first operand"); // Sign of remainder will be same as
    // sign of first operand if they are
    // different and one is negative
    else
      System.out.println(
          "Sign of Remainder = Opposite of sign of second operand"); // Sign of remainder will be
    // opposite to sign of second
    // operand if they are
    // different and one is
    // negative
  }
}
