public class ArithmeticOperations {

  public static void main(String[] args) {
    int a = Integer.parseInt(args[0]);
    int b = Integer.parseInt(args[1]);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division = (double) a / b; // Cast to double for quotient
    int remainder = a % b;

    System.out.println("a + b = " + sum);
    System.out.println("a - b = " + difference);
    System.out.println("a * b = " + product);
    System.out.println("a / b = " + division);
    System.out.println("a % b = " + remainder);
  }
}
