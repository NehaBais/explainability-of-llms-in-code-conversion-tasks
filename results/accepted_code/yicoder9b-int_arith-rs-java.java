public class Main {
  public static void main(String[] args) {
    if (args.length != 2) {
      System.out.println("Please provide exactly two command line arguments.");
      return;
    }
    int a = Integer.parseInt(args[0]);
    int b = Integer.parseInt(args[1]);

    System.out.println("sum:              " + (a + b));
    System.out.println("difference:       " + (a - b));
    System.out.println("product:          " + (a * b));
    System.out.println("integer quotient: " + (a / b)); // truncates towards zero
    System.out.println("remainder:        " + (a % b)); // same sign as first operand
  }
}
