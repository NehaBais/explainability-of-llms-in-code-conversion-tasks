import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter two integers: ");
    int a = sc.nextInt();
    int b = sc.nextInt();

    System.out.println("a + b = " + (a + b));
    System.out.println("a - b = " + (a - b));
    System.out.println("a * b = " + (a * b));

    if (b != 0) {
      System.out.println("a / b = " + (a / b) + ", remainder " + (a % b));
      // In Java, division and modulo operations will not throw ArithmeticException for divide by
      // zero
      // It will give the correct result but will be meaningless in mathematical sense
    } else {
      System.out.println("Cannot perform division/modulo operation as divisor is zero.");
    }

    System.out.println("a ^ b = " + power(a, b)); // a to the power b
  }

  public static int power(int base, int exponent) {
    if (exponent != 0) {
      int result = 1;
      while (exponent > 0) {
        if ((exponent & 1) == 1) // if exponent is odd
        result = result * base;
        exponent = exponent >> 1; // divide exponent by 2
        base = base * base; // square the base
      }
      return result;
    } else {
      return 1;
    }
  }
}
