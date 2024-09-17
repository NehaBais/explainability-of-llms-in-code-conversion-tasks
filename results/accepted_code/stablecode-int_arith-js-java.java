import java.util.Scanner;  // Import the Scanner class

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
        double division = (double)a / (double)b; // Casting to double is necessary for correct division
        int remainder = a % b;  // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

        System.out.println("Sum of " + a + " and " + b + " is: " + sum);
        System.out.println("Difference between " + a + " and " + b + " is: " + difference);
        System.out.println("Product of " + a + " and " + b + " is: " + product);
        System.out.println("Quotient of " + a + " and " + b + " (rounded towards zero) is: " + Math.round(division)));  // The Math.round() method rounds a floating-point value to the nearest integer, rounded towards zero.
        System.out.println("Remainder of " + a + " divided by " + b + " is: " + remainder);

        // If you want to implement an exponentiation operation as well, uncomment the following lines:

        System.out.println("Exponentiation of " + a + " raised to the power of " + b + " is: " + Math.pow(a, b)));  // The Math.pow() method returns the value of the first argument raised to the power of the second argument.
    }
}