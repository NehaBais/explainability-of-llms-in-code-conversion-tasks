public class Main {
  public static void main(String[] args) {
    int a = Integer.parseInt(args[0]);
    int b = Integer.parseInt(args[1]);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division =
        (double) a
            / (double)
                b; // Casting is required because the division result in Java can be a floating
    // point number
    int quotient =
        Math.floorDiv(
            a, b); // This function returns the quotient of 'a' divided by 'b', rounded towards zero
    int remainder =
        a % b; // This produces the remainder after dividing 'b' into 'a'. The '%' operator is
    // called the 'modulo' operator

    System.out.printf(
        "a + b = %d%n", sum); // \n is added for newline, %d is used to print integer values
    System.out.printf("a - b = %d%n", difference);
    System.out.printf("a * b = %d%n", product);
    System.out.printf(
        "a / b = %.2f%n",
        division); // The .2f syntax is used to print double values with 2 decimal places
    System.out.printf("a %% b = %d (Remainder sign matches the sign of a)%n", remainder);
  }
}
